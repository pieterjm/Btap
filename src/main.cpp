#include <Arduino.h>
#include <ArduinoOTA.h>
#include <esp32_smartdisplay.h>
#include "plebtap.h"
#include "ui.h"
#include <ESP32Servo.h>
#include <WebSocketsClient.h>
#include <LittleFS.h>
#include <ArduinoJson.h>

// config variables
int config_servo_back = 10;
int config_servo_close = 20;
int config_servo_open = 30;
String config_wifi_ssid = "";
String config_wifi_pwd = "";
String config_wsurl = "wss://lnbits.meulenhoff.org/api/v1/ws/CuEgAhrWog5hw4BgdBjqUP";
int config_tap_duration = 5000;
int config_clean_duration = 3000;

// two booleans to pass instructions to the main loop
bool bWiFiReconnect = true;
bool bWebSocketReconnect = false;
String config_wshost = "";
String config_wspath = "";

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
#define PLEBTAP_CFG_CLEAN_DURATION "cleanduration"

int restrictToBoundary(int angle) {
  if ( angle < 0 ) {
    return 0;
  }
  if ( angle > 180 ) {
    return 180;
  }
  return angle;
}

int changeAngle(int where, int value) {
  switch ( where ) {
    case PLEBTAP_SERVO_BACK:
      config_servo_back += value;
      config_servo_back = restrictToBoundary(config_servo_back);
      saveConfig();
      return config_servo_back;
    case PLEBTAP_SERVO_CLOSE:
      config_servo_close += value;
      config_servo_close = restrictToBoundary(config_servo_close);
      saveConfig();
      return config_servo_close;
    case PLEBTAP_SERVO_OPEN:
      config_servo_open += value;
      config_servo_open = restrictToBoundary(config_servo_open);
      saveConfig();
      return config_servo_open;
    default:
      return 0;
  }
}

void moveServo(int where) {
  switch (where ) {
    case PLEBTAP_SERVO_BACK:
      servo.write(config_servo_back);
      break; 
   case PLEBTAP_SERVO_CLOSE:
      servo.write(config_servo_close);
      break;
    case PLEBTAP_SERVO_OPEN:
      servo.write(config_servo_open);
      break;
    default:
      break;
  }
}

void beerClose() {
  moveServo(PLEBTAP_SERVO_CLOSE);
}

void beerOpen() {
  moveServo(PLEBTAP_SERVO_OPEN);
}

void beerBack() {
  moveServo(PLEBTAP_SERVO_BACK);
}

void setWifiCredentials(const char *ssid,const char *pwd) {
  config_wifi_ssid = String(ssid);
  config_wifi_pwd = String(pwd);
  bWiFiReconnect = true;
  saveConfig();
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
  bool bConfig = (bool)timer->user_data;
  lv_timer_del(timer);
  if ( bConfig ) {
    lv_disp_load_scr(ui_ScreenConfig);	
  } else {
    lv_disp_load_scr(ui_ScreenMain);	  
  }
} 

void beer(bool bConfig)
{
  static uint32_t user_data = bConfig ? 1 : 0;
	lv_disp_load_scr(ui_ScreenBierFlowing);	
	lv_timer_t *timer = lv_timer_create(beerTimerFinished, config_tap_duration, (void *)bConfig);
	beerOpen();    
}

void clean(bool bConfig)
{
  lv_disp_load_scr(ui_ScreenBierFlowing);	
  lv_timer_t *timer = lv_timer_create(beerTimerFinished, config_clean_duration, (void *)bConfig);
	beerOpen();    
}

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length) {
  switch(type) {
    case WStype_DISCONNECTED:
      Serial.println("WebSocket disconnected");
      break;
    case WStype_CONNECTED:
      Serial.println("WebSocket Connected");
      webSocket.sendTXT("Connected");
      break;
    case WStype_TEXT:
      Serial.println("Beer via WebSocket");
      beer(false);
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
      String wsstr = value;

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
    } else if ( name == PLEBTAP_CFG_CLEAN_DURATION ) {
      config_clean_duration = String(value).toInt();      
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
  doc[6]["name"] = PLEBTAP_CFG_CLEAN_DURATION;
  doc[6]["value"] = config_clean_duration;
  doc[7]["name"] = PLEBTAP_CFG_WSURL;
  doc[7]["value"] = config_wsurl;

  String output = "";
  serializeJson(doc, output);
  Serial.println(output);

  serializeJson(doc, file);
    

  file.close();
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(2000);

  LittleFS.begin(true);


  smartdisplay_init();
  ui_init();

  // set UI components from config
  loadConfig();

  lv_label_set_text_fmt(ui_LabelConfigBackServo,"%d",config_servo_back);
  lv_label_set_text_fmt(ui_LabelConfigCloseServo,"%d",config_servo_close);
  lv_label_set_text_fmt(ui_LabelConfigOpenServo,"%d",config_servo_open);
  lv_textarea_set_text(ui_TextAreaConfigSSID,config_wifi_ssid.c_str());
  lv_textarea_set_text(ui_TextAreaWifiPassword,config_wifi_pwd.c_str());


  servo.attach(PLEBTAP_SERVO_PIN);
  webSocket.onEvent(webSocketEvent);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if ( bWiFiReconnect ) {
    Serial.println("Connecting to Wi-Fi");
    bWiFiReconnect = false;
    WiFi.disconnect();
    WiFi.begin(config_wifi_ssid.c_str(),config_wifi_pwd.c_str());
    bWebSocketReconnect = true;
  }

  if ( bWebSocketReconnect && WiFi.status() == WL_CONNECTED ) {
    Serial.println("Connecting to WebSocket");
    bWebSocketReconnect = false;
    webSocket.beginSSL(config_wshost, 443, config_wspath);
  }

  // Red if no wifi, otherwise green
  //bool connected = WiFi.isConnected();
  //smartdisplay_set_led_color(lv_color32_t({.ch = {.green = 0xFF}}));
  // smartdisplay_set_led_color(lv_color32_t({.ch = {.green = 0x0}}));

  lv_color_t c = lv_color_hex(0x000000); 

  lv_color32_t rgb;
  rgb.full = lv_color_to32(c);
  smartdisplay_set_led_color(rgb);
  //   ArduinoOTA.handle();

  lv_timer_handler();

  webSocket.loop();
}