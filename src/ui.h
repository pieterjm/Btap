// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project4

#ifndef _SQUARELINE_PROJECT4_UI_H
#define _SQUARELINE_PROJECT4_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

extern lv_obj_t * ui_ScreenAbout;
extern lv_obj_t * ui_PanelHeaderAbout;
extern lv_obj_t * ui_Label17;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label19;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_ScreenMain;
extern lv_obj_t * ui_PanelHeaderMain;
extern lv_obj_t * ui_Label1;
void ui_event_ButtonMainConfig(lv_event_t * e);
extern lv_obj_t * ui_ButtonMainConfig;
extern lv_obj_t * ui_Label4;
void ui_event_ButtonMainAbout(lv_event_t * e);
extern lv_obj_t * ui_ButtonMainAbout;
extern lv_obj_t * ui_Label18;
extern lv_obj_t * ui_Image2;
extern lv_obj_t * ui_ScreenConfig;
extern lv_obj_t * ui_PanelHeaderConfig;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_PanelServoBack;
extern lv_obj_t * ui_Label7;
void ui_event_ButtonMinus1(lv_event_t * e);
extern lv_obj_t * ui_ButtonMinus1;
extern lv_obj_t * ui_Label3;
void ui_event_ButtonPlus1(lv_event_t * e);
extern lv_obj_t * ui_ButtonPlus1;
extern lv_obj_t * ui_Label5;
void ui_event_ButtonServo1(lv_event_t * e);
extern lv_obj_t * ui_ButtonServo1;
extern lv_obj_t * ui_LabelConfigBackServo;
extern lv_obj_t * ui_PanelServoClose;
extern lv_obj_t * ui_Label8;
void ui_event_ButtonMinus2(lv_event_t * e);
extern lv_obj_t * ui_ButtonMinus2;
extern lv_obj_t * ui_Label9;
void ui_event_ButtonServo2(lv_event_t * e);
extern lv_obj_t * ui_ButtonServo2;
extern lv_obj_t * ui_LabelConfigCloseServo;
void ui_event_ButtonPlus2(lv_event_t * e);
extern lv_obj_t * ui_ButtonPlus2;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_PanelServoOpen;
extern lv_obj_t * ui_Label12;
void ui_event_ButtonPlus3(lv_event_t * e);
extern lv_obj_t * ui_ButtonPlus3;
extern lv_obj_t * ui_Label13;
void ui_event_ButtonServo3(lv_event_t * e);
extern lv_obj_t * ui_ButtonServo3;
extern lv_obj_t * ui_LabelConfigOpenServo;
void ui_event_ButtonMinus3(lv_event_t * e);
extern lv_obj_t * ui_ButtonMinus3;
extern lv_obj_t * ui_Label15;
void ui_event_ButtonConfigBack(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigBack;
extern lv_obj_t * ui_Label16;
extern lv_obj_t * ui_PanelConfigTest;
void ui_event_ButtonConfigBier(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigBier;
extern lv_obj_t * ui_Label20;
void ui_event_ButtonConfigClean(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigClean;
extern lv_obj_t * ui_Label22;
extern lv_obj_t * ui_Label21;
extern lv_obj_t * ui_Panel2;
void ui_event_ButtonConfigWifi(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigWifi;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Label25;
extern lv_obj_t * ui_ScreenConfigWifi;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Label23;
void ui_event_ButtonConfigWifiBack(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigWifiBack;
void ui_event_Label24(lv_event_t * e);
extern lv_obj_t * ui_Label24;
extern lv_obj_t * ui_Label6;
void ui_event_TextAreaConfigSSID(lv_event_t * e);
extern lv_obj_t * ui_TextAreaConfigSSID;
void ui_event_KeyboardConfigWifi(lv_event_t * e);
extern lv_obj_t * ui_KeyboardConfigWifi;
extern lv_obj_t * ui_Label26;
void ui_event_TextAreaWifiPassword(lv_event_t * e);
extern lv_obj_t * ui_TextAreaWifiPassword;
void ui_event_ButtonConfigWifiSave(lv_event_t * e);
extern lv_obj_t * ui_ButtonConfigWifiSave;
extern lv_obj_t * ui_Label27;
void ui_event_ScreenBierFlowing(lv_event_t * e);
extern lv_obj_t * ui_ScreenBierFlowing;
extern lv_obj_t * ui_Image3;

void ButtonConfigBackMinusClicked(lv_event_t * e);
void ButtonConfigBackPlusClicked(lv_event_t * e);
void ButtonConfigBackServoClicked(lv_event_t * e);
void ButtonConfigCloseMinusClicked(lv_event_t * e);
void ButtonConfigCloseServoClicked(lv_event_t * e);
void ButtonConfigClosePlusClicked(lv_event_t * e);
void ButtonConfigOpenPlusClicked(lv_event_t * e);
void ButtonConfigOpenServoClicked(lv_event_t * e);
void ButtonConfigOpenMinusClicked(lv_event_t * e);
void ButtonConfigBierClicked(lv_event_t * e);
void ButtonConfigCleanClicked(lv_event_t * e);
void ButtonWifiConfigSaveClicked(lv_event_t * e);
void ButtonBierFlowingStop(lv_event_t * e);

LV_IMG_DECLARE(ui_img_kanhetal256_png);    // assets/kanhetal256.png
LV_IMG_DECLARE(ui_img_plebtap_biertest_256_png);    // assets/plebtap_biertest_256.png
LV_IMG_DECLARE(ui_img_biertap256_png);    // assets/biertap256.png


LV_FONT_DECLARE(ui_font_FontBoucherieBlock32);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
