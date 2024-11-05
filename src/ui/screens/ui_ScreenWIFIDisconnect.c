// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Knomi2

#include "../ui.h"

void ui_ScreenWIFIDisconnect_screen_init(void)
{
    ui_ScreenWIFIDisconnect = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenWIFIDisconnect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenWIFIDisconnect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenWIFIDisconnect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_img_wifi_disconnect = lv_img_create(ui_ScreenWIFIDisconnect);
    lv_img_set_src(ui_img_wifi_disconnect, &ui_img_wifi_disconnect_png);
    lv_obj_set_width(ui_img_wifi_disconnect, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_wifi_disconnect, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_img_wifi_disconnect, 0);
    lv_obj_set_y(ui_img_wifi_disconnect, -17);
    lv_obj_set_align(ui_img_wifi_disconnect, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_wifi_disconnect, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_wifi_disconnect, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_wifi_disconnect = lv_label_create(ui_ScreenWIFIDisconnect);
    lv_obj_set_width(ui_label_wifi_disconnect, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_wifi_disconnect, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_wifi_disconnect, 0);
    lv_obj_set_y(ui_label_wifi_disconnect, -30);
    lv_obj_set_align(ui_label_wifi_disconnect, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_label_wifi_disconnect,
                      "Device lost network\n connection, please restart");
    lv_obj_set_style_text_color(ui_label_wifi_disconnect, lv_color_hex(0x4082F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_wifi_disconnect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}