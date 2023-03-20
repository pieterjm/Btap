#ifndef _PLEBTAP_H_
#define _PLEBTAP_H_

#ifdef __cplusplus
extern "C" {
#endif

#define PLEBTAP_SERVO_PIN 21
#define PLEBTAP_SERVO_BACK 1
#define PLEBTAP_SERVO_CLOSE 2
#define PLEBTAP_SERVO_OPEN 3


int changeAngle(int where, int value);

void moveServo(int where);

void beerOpen();

void beerClose();

void beer(bool bConfig);

void clean(bool bConfig);

void beerBack();

void setWifiCredentials(const char *ssid,const char *pwd);

bool getWifiStatus();

bool getWebSocketStatus();

void myDelay(uint32_t ms);

void saveConfig();

#ifdef __cplusplus
}
#endif


#endif