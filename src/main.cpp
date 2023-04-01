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
String config_adminkey = "";
String config_wallet = "";
String config_lnurl = "";
int config_tap_duration = 8000;
String config_pin = String(PLEBTAP_CONFIG_PIN);
String config_cfgserver = "plebtap.wholestack.nl";

// two booleans to pass instructions to the main loop
bool bWiFiReconnect = true;
bool bInitLNbits = false;
bool bWebSocketReconnect = false;
String entered_pin = "";

Servo servo;
WebSocketsClient webSocket;
lv_obj_t *ui_QrcodeLnurl = NULL; // the QR code object
lv_obj_t *ui_QrcodeWallet = NULL; 

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
#define PLEBTAP_CFG_ADMINKEY "adminkey"

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

void setUIStatus(bool bWiFiConnected,bool bConfigLoaded, bool bWebSocketConnected) {
  if ( bWebSocketConnected ) {
    lv_label_set_text(ui_LabelAboutStatus,"WebSocket connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"WS OK");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nConfiguration loaded\nWebSocket connected");
    lv_obj_clear_flag(ui_QrcodeLnurl,LV_OBJ_FLAG_HIDDEN);
  } else if ( bConfigLoaded  ) {
    lv_label_set_text(ui_LabelAboutStatus,"Configuration loaded");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nConfiguration loaded\nWebSocket not connected");
    lv_obj_add_flag(ui_QrcodeLnurl,LV_OBJ_FLAG_HIDDEN);
  } else if ( bWiFiConnected ) {
    lv_label_set_text(ui_LabelAboutStatus,"Wi-Fi Connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"Wi-Fi OK");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi connected\nConfiguration not loaded\nWebSocket not connected");
    lv_obj_add_flag(ui_QrcodeLnurl, LV_OBJ_FLAG_HIDDEN);
  } else {
    lv_label_set_text(ui_LabelAboutStatus,"Wi-Fi not connected");
    lv_label_set_text(ui_LabelMainWebSocketStatus,"No WS");
    lv_label_set_text(ui_LabelMainWiFiStatus,"No Wi-Fi");
    lv_label_set_text(ui_LabelConfigStatus,"Wi-Fi not connected\nConfiguration not loaded\nWebSocket not connected");
    lv_obj_add_flag(ui_QrcodeLnurl, LV_OBJ_FLAG_HIDDEN);
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

    //  StaticJsonDocument<2000> doc;
    DynamicJsonDocument doc(2000);
    String content = file.readString();
    DeserializationError error = deserializeJson(doc, content);
    file.close();

    Serial.println(content);
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
        } else if ( name == PLEBTAP_CFG_ADMINKEY ) {
          config_adminkey = String(value);
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

  //StaticJsonDocument<2000> doc;
  DynamicJsonDocument doc(2000);

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
  doc[10]["name"] = PLEBTAP_CFG_ADMINKEY;
  doc[10]["value"] = config_adminkey;

  String output = "";
  serializeJson(doc, output);
  Serial.println(output);

  serializeJson(doc, file);
  file.close();
}


bool createLNbitsWallet() {
  // Create an LNbits wallet and enable the LNURLdevice extension
  String url = "https://";
  url += config_lnbits_host;
  url += "/wallet";

  // API call to LNBITS
  HTTPClient http;
  http.setFollowRedirects(HTTPC_FORCE_FOLLOW_REDIRECTS);
  http.begin(url);
  int statusCode = http.GET();
  if ( statusCode != HTTP_CODE_OK ) {
    Serial.println("Wallet not created");
    return false;
  } 
  Serial.println("Wallet created");
  String payload = http.getString();                
  Serial.println(payload);
  http.end();

  // Extract data keys from response    
  int beginIndex = payload.indexOf("window.user = ");
  if ( beginIndex == -1 ) {
    Serial.println("beginIndex not found");
    Serial.println(payload);
    return false;    
  }
  beginIndex += strlen("window.user = ");
  Serial.print("beginIndex at ");
  Serial.println(beginIndex);

  int endIndex = payload.indexOf(";",beginIndex);
  if ( endIndex == -1 ) {
    Serial.println("endIndex not found");
    return false;
  }

  payload = payload.substring(beginIndex,endIndex);
  Serial.println(payload);

  String lnbits_userid = "";
  String lnbits_walleturl = "";

  DynamicJsonDocument doc(2048);
  DeserializationError error = deserializeJson(doc, payload);
  if ( error.code() ==  DeserializationError::Ok ) {
    lnbits_userid = doc["id"].as<const char *>();
    Serial.println(lnbits_userid);
  
    config_invoicekey = doc["wallets"][0]["inkey"].as<const char*>();
    config_adminkey = doc["wallets"][0]["adminkey"].as<const char*>();    
    config_wallet = doc["wallets"][0]["id"].as<const char *>();

    lnbits_walleturl = "https://";
    lnbits_walleturl += config_lnbits_host;
    lnbits_walleturl += "/wallet?usr=";
    lnbits_walleturl += lnbits_userid;
    Serial.println(lnbits_walleturl);
  } else {
    Serial.print("Deserialisation error ");
    Serial.println(error.code());
    return false;
  }

  // display wallet URL
  lv_qrcode_update(ui_QrcodeWallet, lnbits_walleturl.c_str(), lnbits_walleturl.length());



  // enable LNURLdevice extension
  url = "https://";
  url += config_lnbits_host;
  url += "/extensions?usr=";
  url += lnbits_userid;
  url += "&enable=lnurldevice";

  http.begin(url);
  statusCode = http.GET();
  payload = http.getString();                
  http.end();
  Serial.println(statusCode);
  if ( statusCode != HTTP_CODE_OK ) {
    Serial.println(payload);
    return false;
  } 

  saveConfig();
  return true;
}


bool createLNURLDevice() {
  HTTPClient http;

  // create LNURLdevice
  String url = "https://";
  url += config_lnbits_host;
  url += "/lnurldevice/api/v1/lnurlpos";
  http.begin(url);
  http.addHeader("X-Api-Key",config_adminkey);


  String payload = "{\"show_price\":\"None\",\"device\":\"switch\",\"profit\":\"1.00\",\"amount\":1,\"title\":\"BliksemBier\",\"currency\":\"EUR\",\"pin\":\"1\",\"wallet\":\"";
  payload += config_wallet;
  payload += "\"}";
  int statusCode = http.POST(payload);
  payload = http.getString();
  Serial.println(payload);
  http.end();
  Serial.print("Statuscode: ");
  Serial.println(statusCode);
  if ( statusCode != HTTP_CODE_OK ) {    
    return false;
  } 

  DynamicJsonDocument doc(2048);
  DeserializationError error = deserializeJson(doc, payload);
  if ( error == DeserializationError::Ok ) {
    config_lnurldeviceid = doc["id"].as<const char *>();
    config_lnurl = doc["switches"][0][3].as<const char *>();    
  } else {
    Serial.print("Deserialisation error ");
    Serial.println(error.code());
    return false;
  }

  saveConfig();
  return true;
}

void initLNbits()
{  
  // check the account, 
  // if non existent, create the account
  // get the first LNURLdevice
  // If not, create LNURLdevice
  if ( config_lnbits_host.length() == 0 ) {
    return;
  }

  // HTTP Client
  HTTPClient http;

  // get wallet details, if not available, create wallet
  String url = "https://";
  url += config_lnbits_host;
  url += "/api/v1/wallet";
  http.begin(url);
  http.addHeader("X-Api-Key",config_invoicekey);
  int statusCode = http.GET();
  Serial.print("Wallet exists: ");
  Serial.println(statusCode);
  if ( statusCode != HTTP_CODE_OK ) {
    if ( createLNbitsWallet() == false ) {
      Serial.println("terminataed");
      return;
    } 
  }


  // get lnurldevice, if not available, create lnurldevice
  url = "https://";
  url += config_lnbits_host;
  url += "/lnurldevice/api/v1/lnurlpos/";
  url += config_lnurldeviceid;
  Serial.println(url);

  http.begin(url);
  http.addHeader("X-Api-Key",config_invoicekey);  
  statusCode = http.GET();
  Serial.println(statusCode);
  String payload = http.getString();                
  http.end();
  if ( statusCode != HTTP_CODE_OK ) { 
    if ( createLNURLDevice() == false ) {
      return;
    }
  } else {
    DynamicJsonDocument doc(2000);
    DeserializationError error = deserializeJson(doc, payload);
    if ( error.code() ==  DeserializationError::Ok ) {
      config_lnurl = doc["switches"][0][3].as<const char *>();
    }
  }

  lv_qrcode_update(ui_QrcodeLnurl, config_lnurl.c_str(), config_lnurl.length());

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

  // initialize the QR code
  lv_color_t bg_color = lv_color_hex(0xFFFFFF);
  lv_color_t fg_color = lv_color_hex(0x000000);
  ui_QrcodeLnurl = lv_qrcode_create(ui_ScreenMain,240,fg_color,bg_color);
  lv_obj_center(ui_QrcodeLnurl);
  lv_obj_set_pos(ui_QrcodeLnurl,-3, -3);
  lv_obj_set_style_border_width(ui_QrcodeLnurl, 0, 0);
  lv_obj_add_flag(ui_QrcodeLnurl, LV_OBJ_FLAG_HIDDEN);

  // initialize the wallet QR code
  ui_QrcodeWallet = lv_qrcode_create(ui_PanelWallet,200,fg_color,bg_color);
  lv_obj_center(ui_QrcodeWallet);
  lv_obj_set_pos(ui_QrcodeWallet,0,-50);
  lv_obj_set_style_border_width(ui_QrcodeWallet, 0, 0);

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
    bInitLNbits = true;
  }

  if ( bInitLNbits && WiFi.status() == WL_CONNECTED ) {
    bInitLNbits = false;
    setUIStatus(true,false, false);
    initLNbits();
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