#pragma once

#define UI_BG_COLOR    lv_color_black()
#define UI_FRAME_COLOR lv_color_black()
#define UI_FONT_COLOR  lv_color_white() //lv_color_hex(0x66ff66)
#define UI_PAGE_COUNT  4

#define MSG_NEW_HOUR   1
#define MSG_NEW_MIN    2
#define MSG_NEW_VOLT   3
#define MSG_NEW_TOUCH_POINT   4
#define MSG_NEW_SEC    5
#define MSG_NEW_USB    6
#define MSG_NEW_OTG_BTN   7
#define MSG_NEW_SERIAL 8

void ui_begin();
void ui_switch_page(void);
void update_serial_display();

extern char timezone_name[255];
extern char serial_buffer[2550];

