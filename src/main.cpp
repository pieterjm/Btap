#include <Arduino.h>
#include <ArduinoOTA.h>
#include <esp32_smartdisplay.h>
#include <ESP32Servo.h>

#define BUTTON_HEIGHT 80
#define BUTTON_MARGIN 12
#define BUTTON_WIDTH  90

int grad1 = 0;
int grad2 = 90;
int grad3 = 180;

static lv_obj_t *label1_2;
static lv_obj_t *label2_2;
static lv_obj_t *label3_2;

// LVGL Objects
static lv_obj_t *bier_image;

Servo servo;

void display_update()
{
}

void btn_event_cb(lv_event_t *e)
{
  const std::lock_guard<std::recursive_mutex> lock(lvgl_mutex);

  Serial.println("event");

  auto code = lv_event_get_code(e);
  auto btn = lv_event_get_target(e);
  
  if (code == LV_EVENT_CLICKED)
  {
    servo.write(0);
  }
}

void btn_event_cb_minus(lv_event_t *e)
{
  const std::lock_guard<std::recursive_mutex> lock(lvgl_mutex);
  auto code = lv_event_get_code(e);
  auto btn = lv_event_get_target(e);
  int *grad = (int *)lv_event_get_user_data(e);

  if (code == LV_EVENT_CLICKED)
  {
    if ( *grad > 0 ) {
      (*grad) -= 1;
      lv_label_set_text_fmt(label1_2, "%d",grad1);
      lv_label_set_text_fmt(label2_2, "%d",grad2);
      lv_label_set_text_fmt(label3_2, "%d",grad3);
    }
  }
}

void btn_event_cb_plus(lv_event_t *e)
{
  const std::lock_guard<std::recursive_mutex> lock(lvgl_mutex);
  auto code = lv_event_get_code(e);
  auto btn = lv_event_get_target(e);
  int *grad = (int *)lv_event_get_user_data(e);

  if (code == LV_EVENT_CLICKED)
  {
    if ( *grad < 180 ) {
      (*grad) += 1;  
      lv_label_set_text_fmt(label1_2, "%d",grad1);
      lv_label_set_text_fmt(label2_2, "%d",grad2);
      lv_label_set_text_fmt(label3_2, "%d",grad3);
    }
  }
}

void btn_event_cb_servo(lv_event_t *e)
{
  const std::lock_guard<std::recursive_mutex> lock(lvgl_mutex);
  auto code = lv_event_get_code(e);
  auto btn = lv_event_get_target(e);
  int *grad = (int *)lv_event_get_user_data(e);

  if (code == LV_EVENT_CLICKED)
  {
    servo.write(*grad);
  }
}

void mainscreen()
{
  const std::lock_guard<std::recursive_mutex> lock(lvgl_mutex);

  // Clear screen
  lv_obj_clean(lv_scr_act());

  
  // minus first row
  auto btn1_1 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn1_1, BUTTON_MARGIN, BUTTON_MARGIN);
  lv_obj_set_size(btn1_1, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn1_1, btn_event_cb_minus, LV_EVENT_CLICKED, &grad1);
  auto label1_1 = lv_label_create(btn1_1);
  lv_label_set_text_static(label1_1, "-");
  lv_obj_center(label1_1);

  // gradient button
  auto btn1_2 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn1_2, 2 * BUTTON_MARGIN + BUTTON_WIDTH, BUTTON_MARGIN);
  lv_obj_set_size(btn1_2, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn1_2, btn_event_cb_servo, LV_EVENT_CLICKED, &grad1);
  label1_2 = lv_label_create(btn1_2);
  lv_label_set_text_fmt(label1_2, "%d",grad1);
  lv_obj_center(label1_2);

  // plus button
  auto btn1_3 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn1_3, 3 * BUTTON_MARGIN + 2 * BUTTON_WIDTH, BUTTON_MARGIN);
  lv_obj_set_size(btn1_3, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn1_3, btn_event_cb_plus, LV_EVENT_CLICKED, &grad1);
  auto label1_3 = lv_label_create(btn1_3);
  lv_label_set_text_static(label1_3, "+");
  lv_obj_center(label1_3);

  // row 2

  // Create a button
  auto btn2_1 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn2_1, BUTTON_MARGIN, 2 * BUTTON_MARGIN + BUTTON_HEIGHT);
  lv_obj_set_size(btn2_1, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn2_1, btn_event_cb_minus, LV_EVENT_CLICKED, &grad2);
  auto label2_1 = lv_label_create(btn2_1);
  lv_label_set_text_static(label2_1, "-");
  lv_obj_center(label2_1);

  // gradient button
  auto btn2_2 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn2_2, 2 * BUTTON_MARGIN + BUTTON_WIDTH, 2 * BUTTON_MARGIN + 1 * BUTTON_HEIGHT);
  lv_obj_set_size(btn2_2, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn2_2, btn_event_cb_servo, LV_EVENT_CLICKED, &grad2);
  label2_2 = lv_label_create(btn2_2);
  lv_label_set_text_fmt(label2_2, "%d",grad2);
  lv_obj_center(label2_2);

  // plus button
  auto btn2_3 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn2_3, 3 * BUTTON_MARGIN + 2 * BUTTON_WIDTH, 2 * BUTTON_MARGIN + 1 * BUTTON_HEIGHT);
  lv_obj_set_size(btn2_3, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn2_3, btn_event_cb_plus, LV_EVENT_CLICKED, &grad2);
  auto label2_3 = lv_label_create(btn2_3);
  lv_label_set_text_static(label2_3, "+");
  lv_obj_center(label2_3);

  // row 3

  // minus button
  auto btn3_1 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn3_1, BUTTON_MARGIN, 3 * BUTTON_MARGIN + 2 * BUTTON_HEIGHT);
  lv_obj_set_size(btn3_1, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn3_1, btn_event_cb_minus, LV_EVENT_CLICKED, &grad3);
  auto label3_1 = lv_label_create(btn3_1);
  lv_label_set_text_static(label3_1, "-");
  lv_obj_center(label3_1);

  // gradient button
  auto btn3_2 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn3_2, 2 * BUTTON_MARGIN + BUTTON_WIDTH, 3 * BUTTON_MARGIN + 2 * BUTTON_HEIGHT);
  lv_obj_set_size(btn3_2, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn3_2, btn_event_cb_servo, LV_EVENT_CLICKED, &grad3);
  label3_2 = lv_label_create(btn3_2);
  lv_label_set_text_fmt(label3_2, "%d", grad3);
  lv_obj_center(label3_2);

  // plus button
  auto btn3_3 = lv_btn_create(lv_scr_act());
  lv_obj_set_pos(btn3_3, 3 * BUTTON_MARGIN + 2 * BUTTON_WIDTH, 3 * BUTTON_MARGIN + 2 * BUTTON_HEIGHT);
  lv_obj_set_size(btn3_3, BUTTON_WIDTH, BUTTON_HEIGHT);
  lv_obj_add_event_cb(btn3_3, btn_event_cb_plus, LV_EVENT_CLICKED, &grad3);
  auto label3_3 = lv_label_create(btn3_3);
  lv_label_set_text_static(label3_3, "+");
  lv_obj_center(label3_3);

 
}

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);

  smartdisplay_init();


  servo.attach(21);
  //WiFi.begin();

  // Set the time servers
  //configTime(0, 0, "pool.ntp.org");

  mainscreen();
}




void loop()
{
  // put your main code here, to run repeatedly:

  // Red if no wifi, otherwise green
  //bool connected = WiFi.isConnected();
  //smartdisplay_set_led_color(lv_color32_t({.ch = {.green = 0xFF}}));
  // smartdisplay_set_led_color(lv_color32_t({.ch = {.green = 0x0}}));

  lv_color_t c = lv_color_hex(0x000000); 

  lv_color32_t rgb;
  rgb.full = lv_color_to32(c);
  smartdisplay_set_led_color(rgb);
  //   ArduinoOTA.handle();

  display_update();
  lv_timer_handler();
}