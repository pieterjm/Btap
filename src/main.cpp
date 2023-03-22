#include <Arduino.h>
#include <ArduinoOTA.h>
#include <esp32_smartdisplay.h>
#include "plebtap.h"
#include "ui.h"
#include <ESP32Servo.h>
#include <WebSocketsClient.h>
#include <LittleFS.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>

// config variables
int config_servo_back = 10;
int config_servo_close = 20;
int config_servo_open = 30;
String config_wifi_ssid = "";
String config_wifi_pwd = "";
String config_wsurl = "wss://lnbits.meulenhoff.org/api/v1/ws/CuEgAhrWog5hw4BgdBjqUP";
String config_lnbits_host = "";
int config_tap_duration = 8000;
String config_pin = String(PLEBTAP_CONFIG_PIN);

// two booleans to pass instructions to the main loop
bool bWiFiReconnect = true;
bool bLoadDeviceSettings = false;
bool bWebSocketReconnect = false;
String config_wshost = "";
String config_wspath = "";
String entered_pin = "";

Servo servo;
WebSocketsClient webSocket;

// defines for the config file
#define PLEBTAP_CFG_SSID "ssid"
#define PLEBTAP_CFG_WIFIPASS "wifipassword"
#define PLEBTAP_CFG_SERVO_BACK "servoback"
#define PLEBTAP_CFG_SERVO_CLOSE "servoclose"
#define PLEBTAP_CFG_SERVO_OPEN "servoopen"
#define PLEBTAP_CFG_WSURL "websocket"
#define PLEBTAP_CFG_TAP_DURATION "tapduration"
#define PLEBTAP_CFG_LNBITS_HOST "lnbitshost"
#define PLEBTAP_CFG_PIN "pin"

void beerClose() {
  servo.write(config_servo_close);
}

void beerOpen() {
  servo.write(config_servo_open);
}

void beerClean() {
  servo.write(config_servo_back);
}

void connectPlebTap(const char *ssid,const char *pwd, const char *lnbits_host) {
  config_wifi_ssid = String(ssid);
  config_wifi_pwd = String(pwd);
  config_lnbits_host = String(lnbits_host);
  bWiFiReconnect = true;
  saveConfig();
}

void saveTuning(int32_t servoBack, int32_t servoClosed, int32_t servoOpen, int32_t tapDuration) {
  config_servo_back = servoBack;
  config_servo_close = servoClosed;
  config_servo_open = servoOpen;
  config_tap_duration = tapDuration;
  saveConfig();
}

void addToPIN(int digit) {
  if (  entered_pin.length() < 6 ) {
    entered_pin += digit;

    String hidePIN = "";
    for(int i=0;(i<entered_pin.length());i++) {
      hidePIN += "*";
    }
    lv_label_set_text(ui_LabelPINValue,hidePIN.c_str());
  }
}

void updatePIN(const char *newpin) {
  config_pin = newpin;
  saveConfig();
}

void resetPIN() {
  entered_pin = "";
  lv_label_set_text(ui_LabelPINValue,"");
}

bool checkPIN() {
  if ( entered_pin == String(PLEBTAP_RESCUE_PIN) ) {
    entered_pin = "";
    lv_label_set_text(ui_LabelPINValue,"");
    return true;
  } 
  if ( config_pin == entered_pin ) {
    entered_pin = "";
    lv_label_set_text(ui_LabelPINValue,"");
  return true;
  }
  entered_pin = "";
  lv_label_set_text(ui_LabelPINValue,"");
  return false;
}

bool getWifiStatus() {
  if ( WiFi.status() == WL_CONNECTED ) {
    return true;
  } 
  return false;
}

bool getWebSocketStatus() {
  return webSocket.isConnected();
}

void beerTimerFinished(lv_timer_t * timer)
{
  beerClose();
  lv_timer_del(timer);
  lv_disp_load_scr(ui_ScreenMain);	  
} 

void beer()
{
	lv_disp_load_scr(ui_ScreenBierFlowing);	
	lv_timer_t *timer = lv_timer_create(beerTimerFinished, config_tap_duration, NULL);
	beerOpen();    
}

void setUIStatus(bool bWiFiConnected,bool bWebSocketConnected) {
  if ( bWebSocketConnected ) {
    lv_label_set_text(ui_LabelAboutStatus,"WebSocket connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"WS OK");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nWebSocket connected");
  } else if ( bWiFiConnected ) {
    lv_label_set_text(ui_LabelAboutStatus,"Wi-Fi Connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nWebSocket not connected");
  } else {
    lv_label_set_text(ui_LabelAboutStatus,"Wi-Fi not connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"No Wi-Fi");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi not connected\nWebSocket not connected");
  }
}

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length) {
  switch(type) {
    case WStype_DISCONNECTED:
      Serial.println("WebSocket disconnected");
      if ( WiFi.status() == WL_CONNECTED ) {
        setUIStatus(true,false);
      } else {
        setUIStatus(false,false);
      }
      break;
    case WStype_CONNECTED:
      webSocket.sendTXT("Connected");
      Serial.println("WebSocket Connected");
      setUIStatus(true,true);
      break;
    case WStype_TEXT:
      Serial.println("Beer via WebSocket");      
      beer();
      break;
    default:
			break;
  }
}

void myDelay(uint32_t ms) {
  delay(ms);
}

void loadConfig() {
  Serial.println("Loading config");

  File file = LittleFS.open("/config.json", "r");
  if (!file) {
    Serial.println("No config file /config.json");
    return;
  }

  StaticJsonDocument<2000> doc;
  String content = file.readString();
  DeserializationError error = deserializeJson(doc, content);
  file.close();

  if ( error.code() !=  DeserializationError::Ok ) {
    Serial.println("Serialisation error");
    return;     
  }

  JsonArray arr = doc.as<JsonArray>();
  for (JsonObject obj: arr) {
    String name = obj["name"];
    String value = obj["value"];
    Serial.print("Name: ");
    Serial.println(name);

    if ( name == PLEBTAP_CFG_SSID ) {
      config_wifi_ssid = String(value);
      Serial.print("Wi-Fi SSID: ");
      Serial.println(config_wifi_ssid);
    } else if ( name == PLEBTAP_CFG_WIFIPASS ) {
      config_wifi_pwd = String(value);
    } else if ( name  == PLEBTAP_CFG_WSURL ) {

      // convert to string object
      config_wsurl = value;
      String wsstr = config_wsurl;

      // check prefixes
      if ( wsstr.startsWith("ws://") ) {
        wsstr = wsstr.substring(5);
      } else if ( wsstr.startsWith("wss://") ) {
        wsstr = wsstr.substring(6);
      } else {
        Serial.println("Incorrect websocket URL");
        continue;
      }

      int index = wsstr.indexOf('/');
      if ( index == -1 ) {
        Serial.println("No host in WebSocket URL");
        continue;
      }
      config_wshost = wsstr.substring(0,index);
      config_wspath = wsstr.substring(index);

      Serial.print("WebSocket host: ");
      Serial.println(config_wshost);
      Serial.print("WebSocket path: ");
      Serial.println(config_wspath);
    } else if ( name == PLEBTAP_CFG_SERVO_CLOSE ) {
      config_servo_close = String(value).toInt();
    } else if ( name == PLEBTAP_CFG_SERVO_OPEN ) {
      config_servo_open = String(value).toInt();
    } else if ( name == PLEBTAP_CFG_SERVO_BACK ) {
      config_servo_back = String(value).toInt();
    } else if ( name == PLEBTAP_CFG_TAP_DURATION ) {
      config_tap_duration = String(value).toInt();
    } else if ( name == PLEBTAP_CFG_LNBITS_HOST ) {
      config_lnbits_host = String(value);     
    } else if (name == PLEBTAP_CFG_PIN ) {
      config_pin = String(value);
    }
  }
}

void saveConfig() {
  File file = LittleFS.open("/config.json", "w");
  if (!file) {
    return;
  }

  StaticJsonDocument<2000> doc;
  
  doc[0]["name"] = PLEBTAP_CFG_SSID;
  doc[0]["value"] = config_wifi_ssid;    
  doc[1]["name"] = PLEBTAP_CFG_WIFIPASS;
  doc[1]["value"]= config_wifi_pwd;
  doc[2]["name"] = PLEBTAP_CFG_SERVO_BACK;
  doc[2]["value"] = config_servo_back;
  doc[3]["name"] = PLEBTAP_CFG_SERVO_CLOSE;
  doc[3]["value"] = config_servo_close;
  doc[4]["name"] = PLEBTAP_CFG_SERVO_OPEN;
  doc[4]["value"] = config_servo_open;
  doc[5]["name"] = PLEBTAP_CFG_TAP_DURATION;
  doc[5]["value"] = config_tap_duration;
  doc[6]["name"] = PLEBTAP_CFG_LNBITS_HOST;
  doc[6]["value"] = config_lnbits_host;
  doc[7]["name"] = PLEBTAP_CFG_WSURL;
  doc[7]["value"] = config_wsurl;
  doc[8]["name"] = PLEBTAP_CFG_PIN;
  doc[8]["value"] = config_pin;

  String output = "";
  serializeJson(doc, output);
  Serial.println(output);

  serializeJson(doc, file);
    

  file.close();
}

void getLNURLSettings() 
{
  WiFiClient client;
  HTTPClient http;

  http.begin(client,"https://plebtab.wholestack.nl/config/demo.json");
  int statusCode = http.GET();
  if ( statusCode != 200 ) {
    return;
  }  
  String payload = http.getString();

}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(2000);



  LittleFS.begin(true);


  smartdisplay_init();
  ui_init();

  lv_color_t c = lv_color_hex(0x000000); 
  lv_color32_t rgb;
  rgb.full = lv_color_to32(c);
  smartdisplay_set_led_color(rgb);


  // set UI components from config
  loadConfig();

  // set the values of the sliders
  lv_slider_set_value(ui_SliderConfigServoBack,config_servo_back,LV_ANIM_OFF);
  lv_slider_set_value(ui_SliderConfigServoClosed,config_servo_close,LV_ANIM_OFF);
  lv_slider_set_value(ui_SliderConfigServoOpen,config_servo_open,LV_ANIM_OFF);
  lv_slider_set_value(ui_SliderConfigTapDuration,config_tap_duration,LV_ANIM_OFF);

  // set the current valuues of the labels
  lv_label_set_text_fmt(ui_LabelConfigServoBack,"%d",config_servo_back);
  lv_label_set_text_fmt(ui_LabelConfigServoClosed,"%d",config_servo_close);
  lv_label_set_text_fmt(ui_LabelConfigServoOpen,"%d",config_servo_open);
  lv_label_set_text_fmt(ui_LabelConfigTapDuration,"%d",config_tap_duration);

  // set wifi configuration and device id
  lv_textarea_set_text(ui_TextAreaConfigSSID,config_wifi_ssid.c_str());
  lv_textarea_set_text(ui_TextAreaWifiPassword,config_wifi_pwd.c_str());
  lv_textarea_set_text(ui_TextAreaConfigHost,config_lnbits_host.c_str());
  lv_label_set_text(ui_LabelPINValue,"");

  // connect to servo
  servo.attach(PLEBTAP_SERVO_PIN);
  webSocket.onEvent(webSocketEvent);

  // Force WiFi to reconnect
  bWiFiReconnect = true;


  // set label in the About screen
  setUIStatus(false,false);
}


void loop()
{

  // reconnect to Wi-Fi 
  if ( bWiFiReconnect ) {
    bWiFiReconnect = false;

    Serial.println("Connecting to Wi-Fi");
    WiFi.disconnect();
    WiFi.begin(config_wifi_ssid.c_str(),config_wifi_pwd.c_str());

    bLoadDeviceSettings = true;
  }

  if ( bLoadDeviceSettings && WiFi.status() == WL_CONNECTED ) {
    bLoadDeviceSettings = false;

    Serial.println("Loading device settings");
    setUIStatus(true,false);

    // retrieve settings json from server
    // configure QR code and WebSocket URL

    bWebSocketReconnect = true;
  }

  if ( bWebSocketReconnect && WiFi.status() == WL_CONNECTED ) {
    bWebSocketReconnect = false;
    Serial.println("Connecting to WebSocket");

    setUIStatus(true,false);

    webSocket.beginSSL(config_wshost, 443, config_wspath);
  }

  lv_timer_handler();

  webSocket.loop();
}