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
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label19;
lv_obj_t * ui_Image1;
lv_obj_t * ui_ScreenMain;
lv_obj_t * ui_PanelHeaderMain;
lv_obj_t * ui_Label1;
void ui_event_ButtonMainConfig(lv_event_t * e);
lv_obj_t * ui_ButtonMainConfig;
lv_obj_t * ui_Label4;
void ui_event_ButtonMainAbout(lv_event_t * e);
lv_obj_t * ui_ButtonMainAbout;
lv_obj_t * ui_Label18;
lv_obj_t * ui_Image2;
lv_obj_t * ui_ScreenConfig;
lv_obj_t * ui_PanelHeaderConfig;
lv_obj_t * ui_Label2;
lv_obj_t * ui_PanelServoBack;
lv_obj_t * ui_Label7;
void ui_event_ButtonMinus1(lv_event_t * e);
lv_obj_t * ui_ButtonMinus1;
lv_obj_t * ui_Label3;
void ui_event_ButtonPlus1(lv_event_t * e);
lv_obj_t * ui_ButtonPlus1;
lv_obj_t * ui_Label5;
void ui_event_ButtonServo1(lv_event_t * e);
lv_obj_t * ui_ButtonServo1;
lv_obj_t * ui_LabelConfigBackServo;
lv_obj_t * ui_PanelServoClose;
lv_obj_t * ui_Label8;
void ui_event_ButtonMinus2(lv_event_t * e);
lv_obj_t * ui_ButtonMinus2;
lv_obj_t * ui_Label9;
void ui_event_ButtonServo2(lv_event_t * e);
lv_obj_t * ui_ButtonServo2;
lv_obj_t * ui_LabelConfigCloseServo;
void ui_event_ButtonPlus2(lv_event_t * e);
lv_obj_t * ui_ButtonPlus2;
lv_obj_t * ui_Label11;
lv_obj_t * ui_PanelServoOpen;
lv_obj_t * ui_Label12;
void ui_event_ButtonPlus3(lv_event_t * e);
lv_obj_t * ui_ButtonPlus3;
lv_obj_t * ui_Label13;
void ui_event_ButtonServo3(lv_event_t * e);
lv_obj_t * ui_ButtonServo3;
lv_obj_t * ui_LabelConfigOpenServo;
void ui_event_ButtonMinus3(lv_event_t * e);
lv_obj_t * ui_ButtonMinus3;
lv_obj_t * ui_Label15;
void ui_event_ButtonConfigBack(lv_event_t * e);
lv_obj_t * ui_ButtonConfigBack;
lv_obj_t * ui_Label16;
lv_obj_t * ui_PanelConfigTest;
void ui_event_ButtonConfigBier(lv_event_t * e);
lv_obj_t * ui_ButtonConfigBier;
lv_obj_t * ui_Label20;
void ui_event_ButtonConfigClean(lv_event_t * e);
lv_obj_t * ui_ButtonConfigClean;
lv_obj_t * ui_Label22;
lv_obj_t * ui_Label21;
lv_obj_t * ui_Panel2;
void ui_event_ButtonConfigWifi(lv_event_t * e);
lv_obj_t * ui_ButtonConfigWifi;
lv_obj_t * ui_Label14;
lv_obj_t * ui_Label25;
lv_obj_t * ui_ScreenConfigWifi;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label23;
void ui_event_ButtonConfigWifiBack(lv_event_t * e);
lv_obj_t * ui_ButtonConfigWifiBack;
void ui_event_Label24(lv_event_t * e);
lv_obj_t * ui_Label24;
lv_obj_t * ui_Label6;
void ui_event_TextAreaConfigSSID(lv_event_t * e);
lv_obj_t * ui_TextAreaConfigSSID;
void ui_event_KeyboardConfigWifi(lv_event_t * e);
lv_obj_t * ui_KeyboardConfigWifi;
lv_obj_t * ui_Label26;
void ui_event_TextAreaWifiPassword(lv_event_t * e);
lv_obj_t * ui_TextAreaWifiPassword;
void ui_event_ButtonConfigWifiSave(lv_event_t * e);
lv_obj_t * ui_ButtonConfigWifiSave;
lv_obj_t * ui_Label27;
void ui_event_ScreenBierFlowing(lv_event_t * e);
lv_obj_t * ui_ScreenBierFlowing;
lv_obj_t * ui_Image3;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_NONE, 500, 0);
    }
}
void ui_event_ButtonMainConfig(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfig, LV_SCR_LOAD_ANIM_NONE, 500, 0);
    }
}
void ui_event_ButtonMainAbout(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenAbout, LV_SCR_LOAD_ANIM_NONE, 500, 0);
    }
}
void ui_event_ButtonMinus1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigBackMinusClicked(e);
    }
}
void ui_event_ButtonPlus1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigBackPlusClicked(e);
    }
}
void ui_event_ButtonServo1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigBackServoClicked(e);
    }
}
void ui_event_ButtonMinus2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigCloseMinusClicked(e);
    }
}
void ui_event_ButtonServo2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigCloseServoClicked(e);
    }
}
void ui_event_ButtonPlus2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigClosePlusClicked(e);
    }
}
void ui_event_ButtonPlus3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigOpenPlusClicked(e);
    }
}
void ui_event_ButtonServo3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigOpenServoClicked(e);
    }
}
void ui_event_ButtonMinus3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigOpenMinusClicked(e);
    }
}
void ui_event_ButtonConfigBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_NONE, 500, 0);
    }
}
void ui_event_ButtonConfigBier(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigBierClicked(e);
    }
}
void ui_event_ButtonConfigClean(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonConfigCleanClicked(e);
    }
}
void ui_event_ButtonConfigWifi(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfigWifi, LV_SCR_LOAD_ANIM_NONE, 500, 0);
    }
}
void ui_event_ButtonConfigWifiBack(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfig, LV_SCR_LOAD_ANIM_NONE, 500, 0);
    }
}
void ui_event_Label24(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ScreenConfig, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_TextAreaConfigSSID(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_KeyboardConfigWifi,  ui_TextAreaConfigSSID);
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
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
void ui_event_TextAreaWifiPassword(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_keyboard_set_target(ui_KeyboardConfigWifi,  ui_TextAreaWifiPassword);
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_ButtonConfigWifiSave(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ButtonWifiConfigSaveClicked(e);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
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
    lv_obj_set_style_text_font(ui_Label17, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_ScreenAbout);
    lv_obj_set_width(ui_Button1, 140);
    lv_obj_set_height(ui_Button1, 50);
    lv_obj_set_x(ui_Button1, 0);
    lv_obj_set_y(ui_Button1, -10);
    lv_obj_set_align(ui_Button1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label19 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label19, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label19, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label19, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label19, "Continue");
    lv_obj_set_style_text_color(ui_Label19, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label19, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_ScreenAbout);
    lv_img_set_src(ui_Image1, &ui_img_kanhetal256_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 256
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 256
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

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
    lv_obj_set_style_text_font(ui_Label1, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_obj_set_style_text_font(ui_Label4, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_obj_set_style_text_font(ui_Label18, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image2 = lv_img_create(ui_ScreenMain);
    lv_img_set_src(ui_Image2, &ui_img_plebtap_biertest_256_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 256
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 256
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_ButtonMainConfig, ui_event_ButtonMainConfig, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonMainAbout, ui_event_ButtonMainAbout, LV_EVENT_ALL, NULL);

}
void ui_ScreenConfig_screen_init(void)
{
    ui_ScreenConfig = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenConfig, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenConfig, lv_color_hex(0xF2A900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreenConfig, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreenConfig, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_ScreenConfig, lv_color_hex(0xFFA900), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfig, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ScreenConfig, lv_color_hex(0x4D4D4E), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ScreenConfig, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_PanelHeaderConfig = lv_obj_create(ui_ScreenConfig);
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
    lv_label_set_text(ui_Label2, "Plebtap Configuration");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xF2A900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelServoBack = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_PanelServoBack, 300);
    lv_obj_set_height(ui_PanelServoBack, 60);
    lv_obj_set_x(ui_PanelServoBack, 10);
    lv_obj_set_y(ui_PanelServoBack, 60);
    lv_obj_clear_flag(ui_PanelServoBack, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelServoBack, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelServoBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PanelServoBack, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PanelServoBack, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_PanelServoBack);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label7, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label7, "Back");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMinus1 = lv_btn_create(ui_PanelServoBack);
    lv_obj_set_width(ui_ButtonMinus1, 50);
    lv_obj_set_height(ui_ButtonMinus1, 50);
    lv_obj_set_x(ui_ButtonMinus1, -150);
    lv_obj_set_y(ui_ButtonMinus1, 0);
    lv_obj_set_align(ui_ButtonMinus1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonMinus1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMinus1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonMinus1, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMinus1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_ButtonMinus1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "-");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPlus1 = lv_btn_create(ui_PanelServoBack);
    lv_obj_set_width(ui_ButtonPlus1, 50);
    lv_obj_set_height(ui_ButtonPlus1, 50);
    lv_obj_set_x(ui_ButtonPlus1, 10);
    lv_obj_set_y(ui_ButtonPlus1, 0);
    lv_obj_set_align(ui_ButtonPlus1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonPlus1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPlus1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPlus1, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPlus1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_ButtonPlus1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "+");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonServo1 = lv_btn_create(ui_PanelServoBack);
    lv_obj_set_width(ui_ButtonServo1, 100);
    lv_obj_set_height(ui_ButtonServo1, 50);
    lv_obj_set_x(ui_ButtonServo1, -45);
    lv_obj_set_y(ui_ButtonServo1, 0);
    lv_obj_set_align(ui_ButtonServo1, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonServo1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonServo1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonServo1, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonServo1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelConfigBackServo = lv_label_create(ui_ButtonServo1);
    lv_obj_set_width(ui_LabelConfigBackServo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigBackServo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelConfigBackServo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigBackServo, "--");
    lv_obj_set_style_text_color(ui_LabelConfigBackServo, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigBackServo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelConfigBackServo, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelServoClose = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_PanelServoClose, 300);
    lv_obj_set_height(ui_PanelServoClose, 60);
    lv_obj_set_x(ui_PanelServoClose, 10);
    lv_obj_set_y(ui_PanelServoClose, 125);
    lv_obj_clear_flag(ui_PanelServoClose, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelServoClose, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelServoClose, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PanelServoClose, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PanelServoClose, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_PanelServoClose);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label8, "Close");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMinus2 = lv_btn_create(ui_PanelServoClose);
    lv_obj_set_width(ui_ButtonMinus2, 50);
    lv_obj_set_height(ui_ButtonMinus2, 50);
    lv_obj_set_x(ui_ButtonMinus2, -150);
    lv_obj_set_y(ui_ButtonMinus2, 0);
    lv_obj_set_align(ui_ButtonMinus2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonMinus2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMinus2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonMinus2, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMinus2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_ButtonMinus2);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "-");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonServo2 = lv_btn_create(ui_PanelServoClose);
    lv_obj_set_width(ui_ButtonServo2, 100);
    lv_obj_set_height(ui_ButtonServo2, 50);
    lv_obj_set_x(ui_ButtonServo2, -45);
    lv_obj_set_y(ui_ButtonServo2, 0);
    lv_obj_set_align(ui_ButtonServo2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonServo2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonServo2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonServo2, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonServo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelConfigCloseServo = lv_label_create(ui_ButtonServo2);
    lv_obj_set_width(ui_LabelConfigCloseServo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigCloseServo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelConfigCloseServo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigCloseServo, "--");
    lv_obj_set_style_text_color(ui_LabelConfigCloseServo, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigCloseServo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelConfigCloseServo, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPlus2 = lv_btn_create(ui_PanelServoClose);
    lv_obj_set_width(ui_ButtonPlus2, 50);
    lv_obj_set_height(ui_ButtonPlus2, 50);
    lv_obj_set_x(ui_ButtonPlus2, 10);
    lv_obj_set_y(ui_ButtonPlus2, 0);
    lv_obj_set_align(ui_ButtonPlus2, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonPlus2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPlus2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPlus2, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPlus2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_ButtonPlus2);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "+");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelServoOpen = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_PanelServoOpen, 300);
    lv_obj_set_height(ui_PanelServoOpen, 60);
    lv_obj_set_x(ui_PanelServoOpen, 10);
    lv_obj_set_y(ui_PanelServoOpen, 190);
    lv_obj_clear_flag(ui_PanelServoOpen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelServoOpen, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelServoOpen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PanelServoOpen, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PanelServoOpen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_PanelServoOpen);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label12, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label12, "Open");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonPlus3 = lv_btn_create(ui_PanelServoOpen);
    lv_obj_set_width(ui_ButtonPlus3, 50);
    lv_obj_set_height(ui_ButtonPlus3, 50);
    lv_obj_set_x(ui_ButtonPlus3, 10);
    lv_obj_set_y(ui_ButtonPlus3, 0);
    lv_obj_set_align(ui_ButtonPlus3, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonPlus3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonPlus3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonPlus3, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonPlus3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_ButtonPlus3);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "+");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonServo3 = lv_btn_create(ui_PanelServoOpen);
    lv_obj_set_width(ui_ButtonServo3, 100);
    lv_obj_set_height(ui_ButtonServo3, 50);
    lv_obj_set_x(ui_ButtonServo3, -45);
    lv_obj_set_y(ui_ButtonServo3, 0);
    lv_obj_set_align(ui_ButtonServo3, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonServo3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonServo3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonServo3, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonServo3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelConfigOpenServo = lv_label_create(ui_ButtonServo3);
    lv_obj_set_width(ui_LabelConfigOpenServo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelConfigOpenServo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LabelConfigOpenServo, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelConfigOpenServo, "--");
    lv_obj_set_style_text_color(ui_LabelConfigOpenServo, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelConfigOpenServo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelConfigOpenServo, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonMinus3 = lv_btn_create(ui_PanelServoOpen);
    lv_obj_set_width(ui_ButtonMinus3, 50);
    lv_obj_set_height(ui_ButtonMinus3, 50);
    lv_obj_set_x(ui_ButtonMinus3, -150);
    lv_obj_set_y(ui_ButtonMinus3, 0);
    lv_obj_set_align(ui_ButtonMinus3, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonMinus3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonMinus3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonMinus3, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonMinus3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_ButtonMinus3);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "-");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigBack = lv_btn_create(ui_ScreenConfig);
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
    lv_obj_set_x(ui_Label16, 0);
    lv_obj_set_y(ui_Label16, -1);
    lv_obj_set_align(ui_Label16, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label16, "Back");
    lv_obj_set_style_text_color(ui_Label16, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label16, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label16, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PanelConfigTest = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_PanelConfigTest, 300);
    lv_obj_set_height(ui_PanelConfigTest, 60);
    lv_obj_set_x(ui_PanelConfigTest, 10);
    lv_obj_set_y(ui_PanelConfigTest, 320);
    lv_obj_clear_flag(ui_PanelConfigTest, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_PanelConfigTest, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_PanelConfigTest, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_PanelConfigTest, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_PanelConfigTest, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigBier = lv_btn_create(ui_PanelConfigTest);
    lv_obj_set_width(ui_ButtonConfigBier, 100);
    lv_obj_set_height(ui_ButtonConfigBier, 50);
    lv_obj_set_x(ui_ButtonConfigBier, 10);
    lv_obj_set_y(ui_ButtonConfigBier, 0);
    lv_obj_set_align(ui_ButtonConfigBier, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonConfigBier, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigBier, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigBier, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigBier, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label20 = lv_label_create(ui_ButtonConfigBier);
    lv_obj_set_width(ui_Label20, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label20, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label20, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label20, "Bier");
    lv_obj_set_style_text_color(ui_Label20, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label20, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label20, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigClean = lv_btn_create(ui_PanelConfigTest);
    lv_obj_set_width(ui_ButtonConfigClean, 100);
    lv_obj_set_height(ui_ButtonConfigClean, 50);
    lv_obj_set_x(ui_ButtonConfigClean, -100);
    lv_obj_set_y(ui_ButtonConfigClean, 0);
    lv_obj_set_align(ui_ButtonConfigClean, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonConfigClean, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigClean, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigClean, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigClean, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label22 = lv_label_create(ui_ButtonConfigClean);
    lv_obj_set_width(ui_Label22, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label22, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label22, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label22, "Clean");
    lv_obj_set_style_text_color(ui_Label22, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label22, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label22, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label21 = lv_label_create(ui_PanelConfigTest);
    lv_obj_set_width(ui_Label21, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label21, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label21, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label21, "Test");
    lv_obj_set_style_text_color(ui_Label21, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label21, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label21, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_ScreenConfig);
    lv_obj_set_width(ui_Panel2, 300);
    lv_obj_set_height(ui_Panel2, 60);
    lv_obj_set_x(ui_Panel2, 10);
    lv_obj_set_y(ui_Panel2, 255);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigWifi = lv_btn_create(ui_Panel2);
    lv_obj_set_width(ui_ButtonConfigWifi, 100);
    lv_obj_set_height(ui_ButtonConfigWifi, 50);
    lv_obj_set_x(ui_ButtonConfigWifi, 10);
    lv_obj_set_y(ui_ButtonConfigWifi, 0);
    lv_obj_set_align(ui_ButtonConfigWifi, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_ButtonConfigWifi, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigWifi, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigWifi, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigWifi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_ButtonConfigWifi);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "Wi-Fi");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label25 = lv_label_create(ui_Panel2);
    lv_obj_set_width(ui_Label25, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label25, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label25, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Label25, "Misc.");
    lv_obj_set_style_text_color(ui_Label25, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label25, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label25, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ButtonMinus1, ui_event_ButtonMinus1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPlus1, ui_event_ButtonPlus1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonServo1, ui_event_ButtonServo1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonMinus2, ui_event_ButtonMinus2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonServo2, ui_event_ButtonServo2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPlus2, ui_event_ButtonPlus2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonPlus3, ui_event_ButtonPlus3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonServo3, ui_event_ButtonServo3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonMinus3, ui_event_ButtonMinus3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigBack, ui_event_ButtonConfigBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigBier, ui_event_ButtonConfigBier, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigClean, ui_event_ButtonConfigClean, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigWifi, ui_event_ButtonConfigWifi, LV_EVENT_ALL, NULL);

}
void ui_ScreenConfigWifi_screen_init(void)
{
    ui_ScreenConfigWifi = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenConfigWifi, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenConfigWifi, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenConfigWifi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_ScreenConfigWifi);
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
    lv_label_set_text(ui_Label23, "Wi-Fi Configuration");
    lv_obj_set_style_text_color(ui_Label23, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label23, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label23, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ButtonConfigWifiBack = lv_btn_create(ui_ScreenConfigWifi);
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
    lv_label_set_text(ui_Label24, "Back");
    lv_obj_set_style_text_color(ui_Label24, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label24, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label24, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_ScreenConfigWifi);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 10);
    lv_obj_set_y(ui_Label6, 70);
    lv_label_set_text(ui_Label6, "SSID");

    ui_TextAreaConfigSSID = lv_textarea_create(ui_ScreenConfigWifi);
    lv_obj_set_width(ui_TextAreaConfigSSID, 240);
    lv_obj_set_height(ui_TextAreaConfigSSID, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_TextAreaConfigSSID, 70);
    lv_obj_set_y(ui_TextAreaConfigSSID, 60);
    lv_textarea_set_placeholder_text(ui_TextAreaConfigSSID, "Wi-Fi SSID");
    lv_textarea_set_one_line(ui_TextAreaConfigSSID, true);

    ui_KeyboardConfigWifi = lv_keyboard_create(ui_ScreenConfigWifi);
    lv_obj_set_width(ui_KeyboardConfigWifi, 320);
    lv_obj_set_height(ui_KeyboardConfigWifi, 150);
    lv_obj_add_flag(ui_KeyboardConfigWifi, LV_OBJ_FLAG_HIDDEN);     /// Flags

    ui_Label26 = lv_label_create(ui_ScreenConfigWifi);
    lv_obj_set_width(ui_Label26, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label26, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label26, 10);
    lv_obj_set_y(ui_Label26, 120);
    lv_label_set_text(ui_Label26, "Secret");

    ui_TextAreaWifiPassword = lv_textarea_create(ui_ScreenConfigWifi);
    lv_obj_set_width(ui_TextAreaWifiPassword, 240);
    lv_obj_set_height(ui_TextAreaWifiPassword, LV_SIZE_CONTENT);    /// 70
    lv_obj_set_x(ui_TextAreaWifiPassword, 70);
    lv_obj_set_y(ui_TextAreaWifiPassword, 110);
    lv_textarea_set_placeholder_text(ui_TextAreaWifiPassword, "Wi-Fi password");
    lv_textarea_set_one_line(ui_TextAreaWifiPassword, true);
    lv_textarea_set_password_mode(ui_TextAreaWifiPassword, true);

    ui_ButtonConfigWifiSave = lv_btn_create(ui_ScreenConfigWifi);
    lv_obj_set_width(ui_ButtonConfigWifiSave, 100);
    lv_obj_set_height(ui_ButtonConfigWifiSave, 50);
    lv_obj_set_x(ui_ButtonConfigWifiSave, 210);
    lv_obj_set_y(ui_ButtonConfigWifiSave, 155);
    lv_obj_add_flag(ui_ButtonConfigWifiSave, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ButtonConfigWifiSave, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ButtonConfigWifiSave, lv_color_hex(0x4D4D4E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ButtonConfigWifiSave, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label27 = lv_label_create(ui_ButtonConfigWifiSave);
    lv_obj_set_width(ui_Label27, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label27, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label27, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label27, "Save");
    lv_obj_set_style_text_color(ui_Label27, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label27, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label27, &ui_font_FontBoucherieBlock32, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Label24, ui_event_Label24, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigWifiBack, ui_event_ButtonConfigWifiBack, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaConfigSSID, ui_event_TextAreaConfigSSID, LV_EVENT_ALL, NULL);
    lv_keyboard_set_textarea(ui_KeyboardConfigWifi, ui_TextAreaConfigSSID);
    lv_obj_add_event_cb(ui_KeyboardConfigWifi, ui_event_KeyboardConfigWifi, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TextAreaWifiPassword, ui_event_TextAreaWifiPassword, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ButtonConfigWifiSave, ui_event_ButtonConfigWifiSave, LV_EVENT_ALL, NULL);

}
void ui_ScreenBierFlowing_screen_init(void)
{
    ui_ScreenBierFlowing = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenBierFlowing, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenBierFlowing, lv_color_hex(0xFFA900), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenBierFlowing, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image3 = lv_img_create(ui_ScreenBierFlowing);
    lv_img_set_src(ui_Image3, &ui_img_biertap256_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 256
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 256
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

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
    ui_ScreenConfig_screen_init();
    ui_ScreenConfigWifi_screen_init();
    ui_ScreenBierFlowing_screen_init();
    lv_disp_load_scr(ui_ScreenAbout);
}
