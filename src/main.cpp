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
int config_servo_close = 30;
int config_servo_open = 180;
String config_wifi_ssid = "";
String config_wifi_pwd = "";
String config_lnbits_host = "";
String config_lnurldeviceid = "";
String config_invoicekey = "";
int config_tap_duration = 8000;
String config_pin = String(PLEBTAP_CONFIG_PIN);

// two booleans to pass instructions to the main loop
bool bWiFiReconnect = true;
bool bGetLNURLDevice = false;
bool bWebSocketReconnect = false;
String entered_pin = "";

Servo servo;
WebSocketsClient webSocket;
lv_obj_t *ui_Qrcode = NULL; // the QR code object


// defines for the config file
#define PLEBTAP_CFG_SSID "ssid"
#define PLEBTAP_CFG_WIFIPASS "wifipassword"
#define PLEBTAP_CFG_SERVO_BACK "servoback"
#define PLEBTAP_CFG_SERVO_CLOSE "servoclose"
#define PLEBTAP_CFG_SERVO_OPEN "servoopen"
#define PLEBTAP_CFG_TAP_DURATION "tapduration"
#define PLEBTAP_CFG_LNBITS_HOST "lnbitshost"
#define PLEBTAP_CFG_INVOICEKEY "invoicekey"
#define PLEBTAP_CFG_LNURLDEVICEID "lnurldeviceid"
#define PLEBTAP_CFG_PIN "pin"

// defines for the QR code
#define QRCODE_PIXEL_SIZE 3
#define QRCODE_X_OFFSET 10
#define QRCODE_Y_OFFSET 10

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

void updateQrcode(String data)
{
  /*Set data*/
  lv_qrcode_update(ui_Qrcode, data.c_str(), data.length());
}

void setUIStatus(bool bWiFiConnected,bool bConfigLoaded, bool bWebSocketConnected) {
  if ( bWebSocketConnected ) {
    lv_label_set_text(ui_LabelAboutStatus,"WebSocket connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"WS OK");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nConfiguration loaded\nWebSocket connected");
    lv_obj_clear_flag(ui_Qrcode,LV_OBJ_FLAG_HIDDEN);
  } else if ( bConfigLoaded  ) {
    lv_label_set_text(ui_LabelAboutStatus,"Configuration loaded");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nConfiguration loaded\nWebSocket not connected");
    lv_obj_add_flag(ui_Qrcode,LV_OBJ_FLAG_HIDDEN);
  } else if ( bWiFiConnected ) {
    lv_label_set_text(ui_LabelAboutStatus,"Wi-Fi Connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nConfiguration not loaded\nWebSocket not connected");
    lv_obj_add_flag(ui_Qrcode, LV_OBJ_FLAG_HIDDEN);
  } else {
    lv_label_set_text(ui_LabelAboutStatus,"Wi-Fi not connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"No Wi-Fi");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi not connected\nConfiguration not loaded\nWebSocket not connected");
    lv_obj_add_flag(ui_Qrcode, LV_OBJ_FLAG_HIDDEN);
  }
}

void webSocketEvent(WStype_t type, uint8_t * payload, size_t length) {
  switch(type) {
    case WStype_DISCONNECTED:
      if ( WiFi.status() == WL_CONNECTED ) {
        setUIStatus(true,true,false);                  
      } else {
        setUIStatus(false,false,false);
      }
      break;
    case WStype_CONNECTED:
      webSocket.sendTXT("Connected");
      setUIStatus(true,true,true);
      break;
    case WStype_TEXT:
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
  File file = LittleFS.open("/config.json", "r");
  if (file) {

    StaticJsonDocument<2000> doc;
    String content = file.readString();
    DeserializationError error = deserializeJson(doc, content);
    file.close();

    if ( error.code() ==  DeserializationError::Ok ) {

      JsonArray arr = doc.as<JsonArray>();
      for (JsonObject obj: arr) {
        String name = obj["name"];
        String value = obj["value"];

        if ( name == PLEBTAP_CFG_SSID ) {
          config_wifi_ssid = String(value);
        } else if ( name == PLEBTAP_CFG_WIFIPASS ) {
          config_wifi_pwd = String(value);
        } else if ( name == PLEBTAP_CFG_SERVO_CLOSE ) {
          config_servo_close = String(value).toInt();
        } else if ( name == PLEBTAP_CFG_SERVO_OPEN ) {
          config_servo_open = String(value).toInt();
        } else if ( name == PLEBTAP_CFG_SERVO_BACK ) {
          config_servo_back = String(value).toInt();
        } else if ( name == PLEBTAP_CFG_LNBITS_HOST ) {
          config_lnbits_host = String(value);     
        } else if ( name == PLEBTAP_CFG_TAP_DURATION ) {
          config_tap_duration = String(value).toInt();
        } else if (name == PLEBTAP_CFG_PIN ) {
          config_pin = String(value);
        } else if ( name == PLEBTAP_CFG_INVOICEKEY ) {
          config_invoicekey = String(value);
        } else if ( name == PLEBTAP_CFG_LNURLDEVICEID ) {
          config_lnurldeviceid = String(value);
        }
      }
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
  doc[7]["name"] = PLEBTAP_CFG_PIN;
  doc[7]["value"] = config_pin;
  doc[8]["name"] = PLEBTAP_CFG_INVOICEKEY;
  doc[8]["value"] = config_invoicekey;
  doc[9]["name"] = PLEBTAP_CFG_LNURLDEVICEID;
  doc[9]["value"] = config_lnurldeviceid;

  String output = "";
  serializeJson(doc, output);
  Serial.println(output);

  serializeJson(doc, file);
  file.close();
}

void getLNURLDevice()
{  
  if ( config_lnbits_host.length() == 0 ) {
    return;
  }


  String url = "https://";
  url += config_lnbits_host;
  url += "/lnurldevice/api/v1/lnurlpos/";
  url += config_lnurldeviceid;
  
  HTTPClient http;
  http.addHeader("X-Api-Key",config_invoicekey);  
  http.begin(url);
  int statusCode = http.GET();
  if ( statusCode != HTTP_CODE_OK ) {
    return;
  }  

  // obtain the payload
  String payload = http.getString();                
  Serial.println(payload);
  http.end();

  StaticJsonDocument<2000> doc;
  DeserializationError error = deserializeJson(doc, payload);
  if ( error.code() ==  DeserializationError::Ok ) {
    String lnurl = doc["switches"][0][3];
    Serial.println(lnurl);
    updateQrcode(lnurl);
  }
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

  lv_label_set_text(ui_Label17,"BliksemBier");
  
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

  // initialize the QR code
  lv_color_t bg_color = lv_color_hex(0xFFFFFF);
  lv_color_t fg_color = lv_color_hex(0x000000);
  ui_Qrcode = lv_qrcode_create(ui_ScreenMain,240,fg_color,bg_color);
  lv_obj_center(ui_Qrcode);
  lv_obj_set_pos(ui_Qrcode,-3, -3);
  lv_obj_set_style_border_width(ui_Qrcode, 0, 0);
  lv_obj_add_flag(ui_Qrcode, LV_OBJ_FLAG_HIDDEN);

  // connect to servo
  servo.attach(PLEBTAP_SERVO_PIN);
  webSocket.onEvent(webSocketEvent);

  // Force WiFi to reconnect
  bWiFiReconnect = true;

  // set label in the About screen
  setUIStatus(false,false,false);
}

void loop()
{

  // reconnect to Wi-Fi 
  if ( bWiFiReconnect ) {
    bWiFiReconnect = false;
    WiFi.disconnect();
    WiFi.begin(config_wifi_ssid.c_str(),config_wifi_pwd.c_str());
    setUIStatus(false,false, false);
    bGetLNURLDevice = true;
  }

  if ( bGetLNURLDevice && WiFi.status() == WL_CONNECTED ) {
    bGetLNURLDevice = false;
    setUIStatus(true,false, false);
    getLNURLDevice();
    bWebSocketReconnect = true;
  }

  if ( bWebSocketReconnect && WiFi.status() == WL_CONNECTED && config_lnbits_host.length() > 0  && config_lnurldeviceid.length() > 0 ) {
    bWebSocketReconnect = false;
    setUIStatus(true, true, false);
    webSocket.beginSSL(config_lnbits_host, 443, String("/api/v1/ws/")  + config_lnurldeviceid);
  }

  lv_timer_handler();  
  webSocket.loop();
}