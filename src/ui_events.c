// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project

#include "ui.h"
#include "plebtap.h"

void ButtonConfigBackMinusClicked(lv_event_t * e)
{
	// Your code here
	int angle = changeAngle(PLEBTAP_SERVO_BACK,-1);
	lv_label_set_text_fmt(ui_LabelConfigBackServo,"%d",angle);
}


void ButtonConfigBackPlusClicked(lv_event_t * e)
{
	// Your code here
	int angle = changeAngle(PLEBTAP_SERVO_BACK,1);
	lv_label_set_text_fmt(ui_LabelConfigBackServo,"%d",angle);
}

void ButtonConfigBackServoClicked(lv_event_t * e)
{
	// Your code here
	moveServo(PLEBTAP_SERVO_BACK);
}

void ButtonConfigCloseMinusClicked(lv_event_t * e)
{
	// Your code here
	int angle = changeAngle(PLEBTAP_SERVO_CLOSE,-1);
	lv_label_set_text_fmt(ui_LabelConfigCloseServo,"%d",angle);
}

void ButtonConfigCloseServoClicked(lv_event_t * e)
{
	// Your code here
	moveServo(PLEBTAP_SERVO_CLOSE);
}

void ButtonConfigClosePlusClicked(lv_event_t * e)
{
	// Your code here
	int angle = changeAngle(PLEBTAP_SERVO_CLOSE,1);
	lv_label_set_text_fmt(ui_LabelConfigCloseServo,"%d",angle);
}

void ButtonConfigOpenPlusClicked(lv_event_t * e)
{
	// Your code here
	int angle = changeAngle(PLEBTAP_SERVO_OPEN,1);
	lv_label_set_text_fmt(ui_LabelConfigOpenServo,"%d",angle);
}

void ButtonConfigOpenMinusClicked(lv_event_t * e)
{
	// Your code here
	int angle = changeAngle(PLEBTAP_SERVO_OPEN,-1);
	lv_label_set_text_fmt(ui_LabelConfigOpenServo,"%d",angle);
}


void ButtonConfigBierClicked(lv_event_t * e)
{
	// Your code here
	beer(true);
}

void ButtonConfigCleanClicked(lv_event_t * e)
{
	beer(false);
}

void ButtonConfigOpenServoClicked(lv_event_t * e)
{
	// Your code here
	moveServo(PLEBTAP_SERVO_OPEN);
}

void ButtonWifiConfigSaveClicked(lv_event_t * e)
{
	// Your code here
	const char *ssid = lv_textarea_get_text(ui_TextAreaConfigSSID);
	const char *pwd = lv_textarea_get_text(ui_TextAreaWifiPassword);	
	setWifiCredentials(ssid,pwd);
}

void ButtonBierFlowingStop(lv_event_t * e)
{
	// Your code here
	beerClose();
	lv_disp_load_scr(ui_ScreenMain);	
}