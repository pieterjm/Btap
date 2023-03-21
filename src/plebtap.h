#ifndef _PLEBTAP_H_
#define _PLEBTAP_H_

#ifdef __cplusplus
extern "C" {
#endif

void addToPIN(int digit);

void resetPIN();

bool checkPIN();

void beerOpen();

void beerClose();

void beerClean();

void beer();

void connectPlebTap(const char *ssid,const char *pwd, const char *deviceid, const char *configserver);

void saveTuning(int32_t servoBack, int32_t servoClosed, int32_t servoOpen, int32_t tapDuration);

bool getWifiStatus();

bool getWebSocketStatus();

void myDelay(uint32_t ms);

void saveConfig();

#ifdef __cplusplus
}
#endif


#endif