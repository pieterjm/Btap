// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: SquareLine_Project4

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_ScreenAbout;
lv_obj_t * ui_PanelHeaderAbout;
lv_obj_t * ui_Label17;
lv_obj_t * ui_Image1;
lv_obj_t * ui_LabelAboutStatus;
void ui_event_ButtonAboutContinue(lv_event_t * e);
lv_obj_t * ui_ButtonAboutContinue;
lv_obj_t * ui_LabelAboutButton;
lv_obj_t * ui_ScreenMain;
lv_obj_t * ui_PanelHeaderMain;
lv_obj_t * ui_Label1;
void ui_event_ButtonMainConfig(lv_event_t * e);
lv_obj_t * ui_ButtonMainConfig;
lv_obj_t * ui_Label4;
void ui_event_ButtonMainAbout(lv_event_t * e);
lv_obj_t * ui_ButtonMainAbout;
lv_obj_t * ui_Label18;
lv_obj_t * ui_ImageQRCodeBorder;
lv_obj_t * ui_LabelMainWiFiStatus;
lv_obj_t * ui_LabelMainWebSocketStatus;
lv_obj_t * ui_Image2;
lv_obj_t * ui_ScreenPin;
lv_obj_t * ui_LabelPINValue;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Label12;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label15;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Label21;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label22;
void ui_event_Button4(lv_event_t * e);
lv_obj_t * ui_Button4;
lv_obj_t * ui_Label25;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
lv_obj_t * ui_Label20;
void ui_event_Button6(lv_event_t * e);
lv_obj_t * ui_Button6;
lv_obj_t * ui_Label29;
void ui_event_Button7(lv_event_t * e);
lv_obj_t * ui_Button7;
lv_obj_t * ui_Label30;
void ui_event_Button8(lv_event_t * e);
lv_obj_t * ui_Button8;
lv_obj_t * ui_Label31;
void ui_event_Button9(lv_event_t * e);
lv_obj_t * ui_Button9;
lv_obj_t * ui_Label13;
void ui_event_ButtonPINCancel(lv_event_t * e);
lv_obj_t * ui_ButtonPINCancel;
lv_obj_t * ui_Label32;
void ui_event_Button11(lv_event_t * e);
lv_obj_t * ui_Button11;
lv_obj_t * ui_Label33;
void ui_event_ButtonPinOK(lv_event_t * e);
lv_obj_t * ui_ButtonPinOK;
lv_obj_t * ui_Label34;
lv_obj_t * ui_ScreenConfig;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label23;
void ui_event_ButtonConfigWifiBack(lv_event_t * e);
lv_obj_t * ui_ButtonConfigWifiBack;
void ui_event_Label24(lv_event_t * e);
lv_obj_t * ui_Label24;
lv_obj_t * ui_Label6;
void ui_event_TextAreaConfigSSID(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigSSID;
lv_obj_t * ui_Label26;
void ui_event_TextAreaWifiPassword(lv_event_t * e);
lv_obj_t * ui_TextAreaWifiPassword;
lv_obj_t * ui_Label19;
void ui_event_ButtonConfigTuner(lv_event_t * e);
lv_obj_t * ui_ButtonConfigTuner;
lv_obj_t * ui_Label28;
void ui_event_ButtonConfigConnect(lv_event_t * e);
lv_obj_t * ui_ButtonConfigConnect;
lv_obj_t * ui_LabelConfigDeviceID;
void ui_event_TextAreaConfigDeviceID(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigDeviceID;
lv_obj_t * ui_LabelConfigStatus;
lv_obj_t * ui_Label14;
void ui_event_KeyboardConfigWifi(lv_event_t * e);
lv_obj_t * ui_KeyboardConfigWifi;
lv_obj_t * ui_ScreenConfigAdvanced;
lv_obj_t * ui_PanelHeaderConfig;
lv_obj_t * ui_Label2;
void ui_event_ButtonConfigBack(lv_event_t * e);
lv_obj_t * ui_ButtonConfigBack;
lv_obj_t * ui_Label16;
lv_obj_t * ui_Label5;
lv_obj_t * ui_LabelConfigServoBack;
void ui_event_SliderConfigServoBack(lv_event_t * e);
lv_obj_t * ui_SliderConfigServoBack;
lv_obj_t * ui_Label3;
lv_obj_t * ui_LabelConfigServoClosed;
void ui_event_SliderConfigServoClosed(lv_event_t * e);
lv_obj_t * ui_SliderConfigServoClosed;
lv_obj_t * ui_Label8;
lv_obj_t * ui_LabelConfigServoOpen;
void ui_event_SliderConfigServoOpen(lv_event_t * e);
lv_obj_t * ui_SliderConfigServoOpen;
void ui_event_ButtonConfigServoBack(lv_event_t * e);
lv_obj_t * ui_ButtonConfigServoBack;
lv_obj_t * ui_Label7;
void ui_event_ButtonConfigServoClose(lv_event_t * e);
lv_obj_t * ui_ButtonConfigServoClose;
lv_obj_t * ui_Label10;
void ui_event_ButtonConfigServoOpen(lv_event_t * e);
lv_obj_t * ui_ButtonConfigServoOpen;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Tap_duration;
lv_obj_t * ui_LabelConfigTapDuration;
void ui_event_SliderConfigTapDuration(lv_event_t * e);
lv_obj_t * ui_SliderConfigTapDuration;
void ui_event_ButtonConfigSave(lv_event_t * e);
lv_obj_t * ui_ButtonConfigSave;
lv_obj_t * ui_Label11;
void ui_event_ScreenBierFlowing(lv_event_t * e);
lv_obj_t * ui_ScreenBierFlowing;
lv_obj_t * ui_Panel4;
lv_obj_t * ui_Label27;
lv_obj_t * ui_Image3;
lv_obj_t * ui_BarBeerProgress;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ButtonAboutContinue(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ButtonMainConfig(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenPin, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ButtonMainAbout(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenAbout, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinOneClicked(e);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinTwoClicked(e);
    }
}
void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinThreeClicked(e);
    }
}
void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinFourClicked(e);
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinFiveClicked(e);
    }
}
void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinSixClicked(e);
    }
}
void ui_event_Button7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinSevenClicked(e);
    }
}
void ui_event_Button8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinEightClicked(e);
    }
}
void ui_event_Button9(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinNineClicked(e);
    }
}
void ui_event_ButtonPINCancel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinCancelClicked(e);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_Button11(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinZeroClicked(e);
    }
}
void ui_event_ButtonPinOK(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonPinOKClicked(e);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfig, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ButtonConfigWifiBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_Label24(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfigAdvanced, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_TextAreaConfigSSID(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_KeyboardConfigWifi,  ui_TextAreaConfigSSID);
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_TextAreaWifiPassword(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_keyboard_set_target(ui_KeyboardConfigWifi,  ui_TextAreaWifiPassword);
    }
}
void ui_event_ButtonConfigTuner(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfigAdvanced, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_ButtonConfigConnect(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigConnectClicked(e);
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_TextAreaConfigDeviceID(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_keyboard_set_target(ui_KeyboardConfigWifi,  ui_TextAreaConfigDeviceID);
    }
}
void ui_event_KeyboardConfigWifi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_ButtonConfigBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfig, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
}
void ui_event_SliderConfigServoBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelConfigServoBack, target, "", "");
    }
}
void ui_event_SliderConfigServoClosed(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelConfigServoClosed, target, "", "");
    }
}
void ui_event_SliderConfigServoOpen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelConfigServoOpen, target, "", "");
    }
}
void ui_event_ButtonConfigServoBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigCleanClicked(e);
    }
}
void ui_event_ButtonConfigServoClose(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigCloseClicked(e);
    }
}
void ui_event_ButtonConfigServoOpen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigOpenClicked(e);
    }
}
void ui_event_SliderConfigTapDuration(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_LabelConfigTapDuration, target, "", "");
    }
}
void ui_event_ButtonConfigSave(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigSaveClicked(e);
    }
}
void ui_event_ScreenBierFlowing(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonBierFlowingStop(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_ScreenAbout_screen_init(void)
{
    ui_ScreenAbout = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenAbout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenAbout, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenAbout, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelHeaderAbout = lv_obj_create(ui_ScreenAbout);
    lv_obj_set_width(ui_PanelHeaderAbout, 320);
    lv_obj_set_height(ui_PanelHeaderAbout, 50);
    lv_obj_clear_flag(ui_PanelHeaderAbout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelHeaderAbout, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelHeaderAbout, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelHeaderAbout, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelHeaderAbout, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label17 = lv_label_create(ui_PanelHeaderAbout);
    lv_obj_set_width(ui_Label17, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label17, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label17, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label17, "PlebTap");
    lv_obj_set_style_text_color(ui_Label17, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label17, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_ScreenAbout);
    lv_img_set_src(ui_Image1, &ui_img_kanhetal256_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 256
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 256
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelAboutStatus = lv_label_create(ui_ScreenAbout);
    lv_obj_set_width(ui_LabelAboutStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelAboutStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelAboutStatus, 0);
    lv_obj_set_y(ui_LabelAboutStatus, 380);
    lv_obj_set_align(ui_LabelAboutStatus, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_LabelAboutStatus, "--");
    lv_obj_set_style_text_color(ui_LabelAboutStatus, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelAboutStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelAboutStatus, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonAboutContinue = lv_btn_create(ui_ScreenAbout);
    lv_obj_set_width(ui_ButtonAboutContinue, 140);
    lv_obj_set_height(ui_ButtonAboutContinue, 50);
    lv_obj_set_x(ui_ButtonAboutContinue, 0);
    lv_obj_set_y(ui_ButtonAboutContinue, -10);
    lv_obj_set_align(ui_ButtonAboutContinue, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_ButtonAboutContinue, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonAboutContinue, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonAboutContinue, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonAboutContinue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelAboutButton = lv_label_create(ui_ButtonAboutContinue);
    lv_obj_set_width(ui_LabelAboutButton, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelAboutButton, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelAboutButton, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelAboutButton, "Continue");
    lv_obj_set_style_text_color(ui_LabelAboutButton, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelAboutButton, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelAboutButton, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonAboutContinue, ui_event_ButtonAboutContinue, LV_EVENT_ALL, NULL);

}
void ui_ScreenMain_screen_init(void)
{
    ui_ScreenMain = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenMain, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenMain, lv_color_hex(0xF2A900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenMain, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelHeaderMain = lv_obj_create(ui_ScreenMain);
    lv_obj_set_width(ui_PanelHeaderMain, 320);
    lv_obj_set_height(ui_PanelHeaderMain, 50);
    lv_obj_clear_flag(ui_PanelHeaderMain, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_PanelHeaderMain, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelHeaderMain, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelHeaderMain, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelHeaderMain, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_PanelHeaderMain);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Scan the QR CODE");
    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0xF2A900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMainConfig = lv_btn_create(ui_ScreenMain);
    lv_obj_set_width(ui_ButtonMainConfig, 100);
    lv_obj_set_height(ui_ButtonMainConfig, 50);
    lv_obj_set_x(ui_ButtonMainConfig, -10);
    lv_obj_set_y(ui_ButtonMainConfig, -10);
    lv_obj_set_align(ui_ButtonMainConfig, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_ButtonMainConfig, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMainConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonMainConfig, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMainConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_ButtonMainConfig);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Config");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMainAbout = lv_btn_create(ui_ScreenMain);
    lv_obj_set_width(ui_ButtonMainAbout, 100);
    lv_obj_set_height(ui_ButtonMainAbout, 50);
    lv_obj_set_x(ui_ButtonMainAbout, 10);
    lv_obj_set_y(ui_ButtonMainAbout, -10);
    lv_obj_set_align(ui_ButtonMainAbout, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_ButtonMainAbout, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMainAbout, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonMainAbout, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMainAbout, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label18 = lv_label_create(ui_ButtonMainAbout);
    lv_obj_set_width(ui_Label18, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label18, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label18, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label18, "About");
    lv_obj_set_style_text_color(ui_Label18, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label18, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label18, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImageQRCodeBorder = lv_img_create(ui_ScreenMain);
    lv_img_set_src(ui_ImageQRCodeBorder, &ui_img_329557545);
    lv_obj_set_width(ui_ImageQRCodeBorder, LV_SIZE_CONTENT);   /// 274
    lv_obj_set_height(ui_ImageQRCodeBorder, LV_SIZE_CONTENT);    /// 274
    lv_obj_set_align(ui_ImageQRCodeBorder, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageQRCodeBorder, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageQRCodeBorder, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LabelMainWiFiStatus = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_LabelMainWiFiStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelMainWiFiStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelMainWiFiStatus, 10);
    lv_obj_set_y(ui_LabelMainWiFiStatus, 60);
    lv_label_set_text(ui_LabelMainWiFiStatus, "--");
    lv_obj_set_style_text_color(ui_LabelMainWiFiStatus, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelMainWiFiStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelMainWiFiStatus, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelMainWebSocketStatus = lv_label_create(ui_ScreenMain);
    lv_obj_set_width(ui_LabelMainWebSocketStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelMainWebSocketStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelMainWebSocketStatus, -10);
    lv_obj_set_y(ui_LabelMainWebSocketStatus, 60);
    lv_obj_set_align(ui_LabelMainWebSocketStatus, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LabelMainWebSocketStatus, "--");
    lv_obj_set_style_text_color(ui_LabelMainWebSocketStatus, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelMainWebSocketStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelMainWebSocketStatus, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_ScreenMain);
    lv_img_set_src(ui_Image2, &ui_img_plebtap_biertest240_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 240
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 240
    lv_obj_set_x(ui_Image2, -7);
    lv_obj_set_y(ui_Image2, -7);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_ButtonMainConfig, ui_event_ButtonMainConfig, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonMainAbout, ui_event_ButtonMainAbout, LV_EVENT_ALL, NULL);

}
void ui_ScreenPin_screen_init(void)
{
    ui_ScreenPin = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenPin, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenPin, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenPin, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelPINValue = lv_label_create(ui_ScreenPin);
    lv_obj_set_width(ui_LabelPINValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPINValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPINValue, 0);
    lv_obj_set_y(ui_LabelPINValue, 70);
    lv_obj_set_align(ui_LabelPINValue, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_LabelPINValue, "______");
    lv_obj_set_style_text_color(ui_LabelPINValue, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelPINValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_LabelPINValue, 25, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_LabelPINValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelPINValue, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_ScreenPin);
    lv_obj_set_width(ui_Panel3, 320);
    lv_obj_set_height(ui_Panel3, 50);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Panel3);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "Enter PIN");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button1, 80);
    lv_obj_set_height(ui_Button1, 80);
    lv_obj_set_x(ui_Button1, -90);
    lv_obj_set_y(ui_Button1, -80);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "1");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button2, 80);
    lv_obj_set_height(ui_Button2, 80);
    lv_obj_set_x(ui_Button2, 0);
    lv_obj_set_y(ui_Button2, -80);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label21, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label21, "2");
    lv_obj_set_style_text_color(ui_Label21, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button3, 80);
    lv_obj_set_height(ui_Button3, 80);
    lv_obj_set_x(ui_Button3, 90);
    lv_obj_set_y(ui_Button3, -80);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "3");
    lv_obj_set_style_text_color(ui_Label22, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label22, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button4 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button4, 80);
    lv_obj_set_height(ui_Button4, 80);
    lv_obj_set_x(ui_Button4, -90);
    lv_obj_set_y(ui_Button4, 10);
    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label25 = lv_label_create(ui_Button4);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label25, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label25, "4");
    lv_obj_set_style_text_color(ui_Label25, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label25, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button5 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button5, 80);
    lv_obj_set_height(ui_Button5, 80);
    lv_obj_set_x(ui_Button5, 0);
    lv_obj_set_y(ui_Button5, 10);
    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label20 = lv_label_create(ui_Button5);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "5");
    lv_obj_set_style_text_color(ui_Label20, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label20, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button6 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button6, 80);
    lv_obj_set_height(ui_Button6, 80);
    lv_obj_set_x(ui_Button6, 90);
    lv_obj_set_y(ui_Button6, 10);
    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button6, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label29 = lv_label_create(ui_Button6);
    lv_obj_set_width(ui_Label29, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label29, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label29, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label29, "6");
    lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button7 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button7, 80);
    lv_obj_set_height(ui_Button7, 80);
    lv_obj_set_x(ui_Button7, -90);
    lv_obj_set_y(ui_Button7, 100);
    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label30 = lv_label_create(ui_Button7);
    lv_obj_set_width(ui_Label30, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label30, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label30, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label30, "7");
    lv_obj_set_style_text_color(ui_Label30, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label30, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button8 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button8, 80);
    lv_obj_set_height(ui_Button8, 80);
    lv_obj_set_x(ui_Button8, 0);
    lv_obj_set_y(ui_Button8, 100);
    lv_obj_set_align(ui_Button8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button8, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label31 = lv_label_create(ui_Button8);
    lv_obj_set_width(ui_Label31, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label31, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label31, 0);
    lv_obj_set_y(ui_Label31, -1);
    lv_obj_set_align(ui_Label31, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label31, "8");
    lv_obj_set_style_text_color(ui_Label31, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label31, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label31, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button9 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button9, 80);
    lv_obj_set_height(ui_Button9, 80);
    lv_obj_set_x(ui_Button9, 90);
    lv_obj_set_y(ui_Button9, 100);
    lv_obj_set_align(ui_Button9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button9, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button9, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Button9);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "9");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPINCancel = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_ButtonPINCancel, 80);
    lv_obj_set_height(ui_ButtonPINCancel, 80);
    lv_obj_set_x(ui_ButtonPINCancel, -90);
    lv_obj_set_y(ui_ButtonPINCancel, 190);
    lv_obj_set_align(ui_ButtonPINCancel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPINCancel, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPINCancel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPINCancel, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPINCancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label32 = lv_label_create(ui_ButtonPINCancel);
    lv_obj_set_width(ui_Label32, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label32, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label32, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label32, "C");
    lv_obj_set_style_text_color(ui_Label32, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label32, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label32, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button11 = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_Button11, 80);
    lv_obj_set_height(ui_Button11, 80);
    lv_obj_set_x(ui_Button11, 0);
    lv_obj_set_y(ui_Button11, 190);
    lv_obj_set_align(ui_Button11, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button11, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button11, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button11, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label33 = lv_label_create(ui_Button11);
    lv_obj_set_width(ui_Label33, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label33, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label33, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label33, "0");
    lv_obj_set_style_text_color(ui_Label33, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label33, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label33, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPinOK = lv_btn_create(ui_ScreenPin);
    lv_obj_set_width(ui_ButtonPinOK, 80);
    lv_obj_set_height(ui_ButtonPinOK, 80);
    lv_obj_set_x(ui_ButtonPinOK, 90);
    lv_obj_set_y(ui_ButtonPinOK, 190);
    lv_obj_set_align(ui_ButtonPinOK, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ButtonPinOK, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPinOK, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPinOK, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPinOK, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label34 = lv_label_create(ui_ButtonPinOK);
    lv_obj_set_width(ui_Label34, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label34, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label34, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label34, "OK");
    lv_obj_set_style_text_color(ui_Label34, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label34, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label34, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button8, ui_event_Button8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button9, ui_event_Button9, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPINCancel, ui_event_ButtonPINCancel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button11, ui_event_Button11, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPinOK, ui_event_ButtonPinOK, LV_EVENT_ALL, NULL);

}
void ui_ScreenConfig_screen_init(void)
{
    ui_ScreenConfig = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenConfig, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_Panel1, 320);
    lv_obj_set_height(ui_Panel1, 50);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label23 = lv_label_create(ui_Panel1);
    lv_obj_set_width(ui_Label23, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label23, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label23, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label23, "Configuration");
    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label23, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigWifiBack = lv_btn_create(ui_ScreenConfig);
    lv_obj_set_width(ui_ButtonConfigWifiBack, 100);
    lv_obj_set_height(ui_ButtonConfigWifiBack, 50);
    lv_obj_set_x(ui_ButtonConfigWifiBack, -10);
    lv_obj_set_y(ui_ButtonConfigWifiBack, -10);
    lv_obj_set_align(ui_ButtonConfigWifiBack, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_ButtonConfigWifiBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigWifiBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigWifiBack, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigWifiBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label24 = lv_label_create(ui_ButtonConfigWifiBack);
    lv_obj_set_width(ui_Label24, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label24, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label24, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label24, "Done");
    lv_obj_set_style_text_color(ui_Label24, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label24, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 10);
    lv_obj_set_y(ui_Label6, 70);
    lv_label_set_text(ui_Label6, "SSID");

    ui_TextAreaConfigSSID = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigSSID, 240);
    lv_obj_set_height(ui_TextAreaConfigSSID, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_TextAreaConfigSSID, 70);
    lv_obj_set_y(ui_TextAreaConfigSSID, 60);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigSSID, "Wi-Fi SSID");
    lv_textarea_set_one_line(ui_TextAreaConfigSSID, true);

    ui_Label26 = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, 10);
    lv_obj_set_y(ui_Label26, 120);
    lv_label_set_text(ui_Label26, "Secret");

    ui_TextAreaWifiPassword = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaWifiPassword, 240);
    lv_obj_set_height(ui_TextAreaWifiPassword, LV_SIZE_CONTENT);    /// 70
    lv_obj_set_x(ui_TextAreaWifiPassword, 70);
    lv_obj_set_y(ui_TextAreaWifiPassword, 110);
    lv_textarea_set_placeholder_text(ui_TextAreaWifiPassword, "Wi-Fi password");
    lv_textarea_set_one_line(ui_TextAreaWifiPassword, true);
    lv_textarea_set_password_mode(ui_TextAreaWifiPassword, true);

    ui_Label19 = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label19, 10);
    lv_obj_set_y(ui_Label19, 170);
    lv_label_set_text(ui_Label19, "Device ID");
    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigTuner = lv_btn_create(ui_ScreenConfig);
    lv_obj_set_width(ui_ButtonConfigTuner, 100);
    lv_obj_set_height(ui_ButtonConfigTuner, 50);
    lv_obj_set_x(ui_ButtonConfigTuner, 10);
    lv_obj_set_y(ui_ButtonConfigTuner, 210);
    lv_obj_add_flag(ui_ButtonConfigTuner, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigTuner, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigTuner, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigTuner, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label28 = lv_label_create(ui_ButtonConfigTuner);
    lv_obj_set_width(ui_Label28, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label28, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label28, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label28, "TUNER");
    lv_obj_set_style_text_color(ui_Label28, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label28, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label28, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigConnect = lv_btn_create(ui_ScreenConfig);
    lv_obj_set_width(ui_ButtonConfigConnect, 130);
    lv_obj_set_height(ui_ButtonConfigConnect, 50);
    lv_obj_set_x(ui_ButtonConfigConnect, -10);
    lv_obj_set_y(ui_ButtonConfigConnect, 210);
    lv_obj_set_align(ui_ButtonConfigConnect, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_ButtonConfigConnect, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigConnect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigConnect, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigConnect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelConfigDeviceID = lv_label_create(ui_ButtonConfigConnect);
    lv_obj_set_width(ui_LabelConfigDeviceID, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigDeviceID, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelConfigDeviceID, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigDeviceID, "Connect");
    lv_obj_set_style_text_color(ui_LabelConfigDeviceID, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigDeviceID, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelConfigDeviceID, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextAreaConfigDeviceID = lv_textarea_create(ui_ScreenConfig);
    lv_obj_set_width(ui_TextAreaConfigDeviceID, 200);
    lv_obj_set_height(ui_TextAreaConfigDeviceID, LV_SIZE_CONTENT);    /// 70
    lv_obj_set_x(ui_TextAreaConfigDeviceID, -10);
    lv_obj_set_y(ui_TextAreaConfigDeviceID, 160);
    lv_obj_set_align(ui_TextAreaConfigDeviceID, LV_ALIGN_TOP_RIGHT);
    lv_textarea_set_max_length(ui_TextAreaConfigDeviceID, 8);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigDeviceID, "PlebTap device ID");
    lv_textarea_set_one_line(ui_TextAreaConfigDeviceID, true);

    ui_LabelConfigStatus = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_LabelConfigStatus, 210);
    lv_obj_set_height(ui_LabelConfigStatus, 140);
    lv_obj_set_x(ui_LabelConfigStatus, 100);
    lv_obj_set_y(ui_LabelConfigStatus, 270);
    lv_label_set_text(ui_LabelConfigStatus, "--");

    ui_Label14 = lv_label_create(ui_ScreenConfig);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, 10);
    lv_obj_set_y(ui_Label14, 270);
    lv_label_set_text(ui_Label14, "Status");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_KeyboardConfigWifi = lv_keyboard_create(ui_ScreenConfig);
    lv_obj_set_width(ui_KeyboardConfigWifi, 320);
    lv_obj_set_height(ui_KeyboardConfigWifi, 150);
    lv_obj_add_flag(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_event_cb(ui_Label24, ui_event_Label24, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigWifiBack, ui_event_ButtonConfigWifiBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigSSID, ui_event_TextAreaConfigSSID, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaWifiPassword, ui_event_TextAreaWifiPassword, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigTuner, ui_event_ButtonConfigTuner, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigConnect, ui_event_ButtonConfigConnect, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigDeviceID, ui_event_TextAreaConfigDeviceID, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_KeyboardConfigWifi, ui_TextAreaConfigSSID);
    lv_obj_add_event_cb(ui_KeyboardConfigWifi, ui_event_KeyboardConfigWifi, LV_EVENT_ALL, NULL);

}
void ui_ScreenConfigAdvanced_screen_init(void)
{
    ui_ScreenConfigAdvanced = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenConfigAdvanced, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenConfigAdvanced, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfigAdvanced, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ScreenConfigAdvanced, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_ScreenConfigAdvanced, lv_color_hex(0xFFA900), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfigAdvanced, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreenConfigAdvanced, lv_color_hex(0x4D4D4E), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreenConfigAdvanced, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_PanelHeaderConfig = lv_obj_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_PanelHeaderConfig, 320);
    lv_obj_set_height(ui_PanelHeaderConfig, 50);
    lv_obj_clear_flag(ui_PanelHeaderConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_PanelHeaderConfig, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_PanelHeaderConfig, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_PanelHeaderConfig, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelHeaderConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_PanelHeaderConfig, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_PanelHeaderConfig);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_Label2, LV_LABEL_LONG_SCROLL);
    lv_label_set_text(ui_Label2, "Settings Tuner");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xF2A900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigBack = lv_btn_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_ButtonConfigBack, 100);
    lv_obj_set_height(ui_ButtonConfigBack, 50);
    lv_obj_set_x(ui_ButtonConfigBack, -10);
    lv_obj_set_y(ui_ButtonConfigBack, -10);
    lv_obj_set_align(ui_ButtonConfigBack, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_ButtonConfigBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigBack, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label16 = lv_label_create(ui_ButtonConfigBack);
    lv_obj_set_width(ui_Label16, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label16, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Done");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 10);
    lv_obj_set_y(ui_Label5, 60);
    lv_label_set_text(ui_Label5, "Servo clean position");

    ui_LabelConfigServoBack = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_LabelConfigServoBack, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigServoBack, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigServoBack, -15);
    lv_obj_set_y(ui_LabelConfigServoBack, 60);
    lv_obj_set_align(ui_LabelConfigServoBack, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LabelConfigServoBack, "--");
    lv_obj_set_style_text_color(ui_LabelConfigServoBack, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigServoBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SliderConfigServoBack = lv_slider_create(ui_ScreenConfigAdvanced);
    lv_slider_set_range(ui_SliderConfigServoBack, 0, 180);
    lv_obj_set_width(ui_SliderConfigServoBack, 290);
    lv_obj_set_height(ui_SliderConfigServoBack, 10);
    lv_obj_set_x(ui_SliderConfigServoBack, 15);
    lv_obj_set_y(ui_SliderConfigServoBack, 85);
    lv_obj_set_style_bg_color(ui_SliderConfigServoBack, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SliderConfigServoBack, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SliderConfigServoBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SliderConfigServoBack, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigServoBack, lv_color_hex(0x4D4D4E), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoBack, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigServoBack, lv_color_hex(0x4D4D4E), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoBack, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, 10);
    lv_obj_set_y(ui_Label3, 120);
    lv_label_set_text(ui_Label3, "Servo closed position");

    ui_LabelConfigServoClosed = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_LabelConfigServoClosed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigServoClosed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigServoClosed, -15);
    lv_obj_set_y(ui_LabelConfigServoClosed, 120);
    lv_obj_set_align(ui_LabelConfigServoClosed, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LabelConfigServoClosed, "--");

    ui_SliderConfigServoClosed = lv_slider_create(ui_ScreenConfigAdvanced);
    lv_slider_set_range(ui_SliderConfigServoClosed, 0, 180);
    lv_obj_set_width(ui_SliderConfigServoClosed, 290);
    lv_obj_set_height(ui_SliderConfigServoClosed, 10);
    lv_obj_set_x(ui_SliderConfigServoClosed, 15);
    lv_obj_set_y(ui_SliderConfigServoClosed, 145);
    lv_obj_set_style_bg_color(ui_SliderConfigServoClosed, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoClosed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SliderConfigServoClosed, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SliderConfigServoClosed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SliderConfigServoClosed, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigServoClosed, lv_color_hex(0x4D4D4E), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoClosed, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigServoClosed, lv_color_hex(0x4D4D4E), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoClosed, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, 10);
    lv_obj_set_y(ui_Label8, 180);
    lv_label_set_text(ui_Label8, "Servo open position");

    ui_LabelConfigServoOpen = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_LabelConfigServoOpen, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigServoOpen, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigServoOpen, -15);
    lv_obj_set_y(ui_LabelConfigServoOpen, 180);
    lv_obj_set_align(ui_LabelConfigServoOpen, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LabelConfigServoOpen, "--");

    ui_SliderConfigServoOpen = lv_slider_create(ui_ScreenConfigAdvanced);
    lv_slider_set_range(ui_SliderConfigServoOpen, 0, 180);
    lv_obj_set_width(ui_SliderConfigServoOpen, 290);
    lv_obj_set_height(ui_SliderConfigServoOpen, 10);
    lv_obj_set_x(ui_SliderConfigServoOpen, 15);
    lv_obj_set_y(ui_SliderConfigServoOpen, 205);
    lv_obj_set_style_bg_color(ui_SliderConfigServoOpen, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoOpen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SliderConfigServoOpen, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SliderConfigServoOpen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SliderConfigServoOpen, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigServoOpen, lv_color_hex(0x4D4D4E), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoOpen, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigServoOpen, lv_color_hex(0x4D4D4E), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigServoOpen, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_ButtonConfigServoBack = lv_btn_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_ButtonConfigServoBack, 90);
    lv_obj_set_height(ui_ButtonConfigServoBack, 50);
    lv_obj_set_x(ui_ButtonConfigServoBack, 10);
    lv_obj_set_y(ui_ButtonConfigServoBack, 230);
    lv_obj_add_flag(ui_ButtonConfigServoBack, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigServoBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigServoBack, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigServoBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_ButtonConfigServoBack);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Clean");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigServoClose = lv_btn_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_ButtonConfigServoClose, 90);
    lv_obj_set_height(ui_ButtonConfigServoClose, 50);
    lv_obj_set_x(ui_ButtonConfigServoClose, 0);
    lv_obj_set_y(ui_ButtonConfigServoClose, 230);
    lv_obj_set_align(ui_ButtonConfigServoClose, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_ButtonConfigServoClose, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigServoClose, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigServoClose, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigServoClose, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_ButtonConfigServoClose);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "Close");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigServoOpen = lv_btn_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_ButtonConfigServoOpen, 90);
    lv_obj_set_height(ui_ButtonConfigServoOpen, 50);
    lv_obj_set_x(ui_ButtonConfigServoOpen, -10);
    lv_obj_set_y(ui_ButtonConfigServoOpen, 230);
    lv_obj_set_align(ui_ButtonConfigServoOpen, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_ButtonConfigServoOpen, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigServoOpen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigServoOpen, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigServoOpen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_ButtonConfigServoOpen);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "Open");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tap_duration = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_Tap_duration, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tap_duration, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tap_duration, 15);
    lv_obj_set_y(ui_Tap_duration, 295);
    lv_label_set_text(ui_Tap_duration, "Tap duration (ms)");

    ui_LabelConfigTapDuration = lv_label_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_LabelConfigTapDuration, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigTapDuration, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelConfigTapDuration, -15);
    lv_obj_set_y(ui_LabelConfigTapDuration, 295);
    lv_obj_set_align(ui_LabelConfigTapDuration, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_LabelConfigTapDuration, "--");

    ui_SliderConfigTapDuration = lv_slider_create(ui_ScreenConfigAdvanced);
    lv_slider_set_range(ui_SliderConfigTapDuration, 0, 15000);
    lv_obj_set_width(ui_SliderConfigTapDuration, 290);
    lv_obj_set_height(ui_SliderConfigTapDuration, 10);
    lv_obj_set_x(ui_SliderConfigTapDuration, 15);
    lv_obj_set_y(ui_SliderConfigTapDuration, 320);
    lv_obj_set_style_bg_color(ui_SliderConfigTapDuration, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigTapDuration, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_SliderConfigTapDuration, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SliderConfigTapDuration, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SliderConfigTapDuration, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigTapDuration, lv_color_hex(0x4D4D4E), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigTapDuration, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SliderConfigTapDuration, lv_color_hex(0x4D4D4E), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SliderConfigTapDuration, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_ButtonConfigSave = lv_btn_create(ui_ScreenConfigAdvanced);
    lv_obj_set_width(ui_ButtonConfigSave, 150);
    lv_obj_set_height(ui_ButtonConfigSave, 50);
    lv_obj_set_x(ui_ButtonConfigSave, 0);
    lv_obj_set_y(ui_ButtonConfigSave, 340);
    lv_obj_set_align(ui_ButtonConfigSave, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_ButtonConfigSave, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigSave, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigSave, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigSave, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_ButtonConfigSave);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "Save Settings");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonConfigBack, ui_event_ButtonConfigBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderConfigServoBack, ui_event_SliderConfigServoBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderConfigServoClosed, ui_event_SliderConfigServoClosed, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderConfigServoOpen, ui_event_SliderConfigServoOpen, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigServoBack, ui_event_ButtonConfigServoBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigServoClose, ui_event_ButtonConfigServoClose, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigServoOpen, ui_event_ButtonConfigServoOpen, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SliderConfigTapDuration, ui_event_SliderConfigTapDuration, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigSave, ui_event_ButtonConfigSave, LV_EVENT_ALL, NULL);

}
void ui_ScreenBierFlowing_screen_init(void)
{
    ui_ScreenBierFlowing = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenBierFlowing, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenBierFlowing, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenBierFlowing, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_ScreenBierFlowing);
    lv_obj_set_width(ui_Panel4, 320);
    lv_obj_set_height(ui_Panel4, 50);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_Panel4);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "Enjoy your drink!");
    lv_obj_set_style_text_color(ui_Label27, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label27, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label27, &ui_font_FontBoucherieBlock24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_ScreenBierFlowing);
    lv_img_set_src(ui_Image3, &ui_img_biertap256_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 256
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 256
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BarBeerProgress = lv_bar_create(ui_ScreenBierFlowing);
    lv_obj_set_width(ui_BarBeerProgress, 240);
    lv_obj_set_height(ui_BarBeerProgress, 20);
    lv_obj_set_x(ui_BarBeerProgress, 0);
    lv_obj_set_y(ui_BarBeerProgress, -60);
    lv_obj_set_align(ui_BarBeerProgress, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_bg_color(ui_BarBeerProgress, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BarBeerProgress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BarBeerProgress, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BarBeerProgress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BarBeerProgress, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_BarBeerProgress, lv_color_hex(0x4D4D4E), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BarBeerProgress, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ScreenBierFlowing, ui_event_ScreenBierFlowing, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenAbout_screen_init();
    ui_ScreenMain_screen_init();
    ui_ScreenPin_screen_init();
    ui_ScreenConfig_screen_init();
    ui_ScreenConfigAdvanced_screen_init();
    ui_ScreenBierFlowing_screen_init();
    lv_disp_load_scr(ui_ScreenAbout);
}
