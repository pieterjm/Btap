// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project4

#include "ui.h"
#include "plebtap.h"

void ButtonPinOneClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(1);
}

void ButtonPinTwoClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(2);
}

void ButtonPinThreeClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(3);
}

void ButtonPinFourClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(4);
}

void ButtonPinFiveClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(5);
}

void ButtonPinSixClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(6);
}

void ButtonPinSevenClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(7);
}

void ButtonPinEightClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(8);
}

void ButtonPinNineClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(9);
}

void ButtonPinCancelClicked(lv_event_t * e)
{
	// Your code here
	resetPIN();
}

void ButtonPinZeroClicked(lv_event_t * e)
{
	// Your code here
	addToPIN(0);
}

void ButtonPinOKClicked(lv_event_t * e)
{
	// Your code here
	if ( checkPIN() == true ) {
		lv_disp_load_scr(ui_ScreenConfig);	
	}
}

void ButtonConfigConnectClicked(lv_event_t * e)
{
	// Your code here
	const char *ssid = lv_textarea_get_text(ui_TextAreaConfigSSID);
	const char *pwd = lv_textarea_get_text(ui_TextAreaWifiPassword);
	const char *deviceid = lv_textarea_get_text(ui_TextAreaConfigDeviceID);
	const char *cfgserver = lv_textarea_get_text(ui_TextAreaConfigHost);
	connectPlebTap(ssid,pwd,deviceid,cfgserver);
}

void ButtonConfigCleanClicked(lv_event_t * e)
{
	// Your code here
	beerClean();
}

void ButtonConfigCloseClicked(lv_event_t * e)
{
	// Your code here
	beerClose();
}


void ButtonConfigOpenClicked(lv_event_t * e)
{
	// Your code here
	beerOpen();
}

void ButtonConfigSaveClicked(lv_event_t * e)
{
	// Your code here
	int32_t servoBack = lv_slider_get_value(ui_SliderConfigServoBack);
	int32_t servoClosed = lv_slider_get_value(ui_SliderConfigServoClosed);
	int32_t servoOpen = lv_slider_get_value(ui_SliderConfigServoOpen);
	int32_t tapDuration = lv_slider_get_value(ui_SliderConfigTapDuration);
	saveTuning(servoBack,servoClosed,servoOpen,tapDuration);
}

void ButtonBierFlowingStop(lv_event_t * e)
{
	// Your code here
	beerClose();
}

