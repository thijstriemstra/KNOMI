// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Knomi2

#include "../ui.h"

void ui_ScreenExtrude_screen_init(void)
{
    ui_ScreenExtrude = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScreenExtrude, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScreenExtrude, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScreenExtrude, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScreenExtrude, &ui_img_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_extruder_extrude = lv_imgbtn_create(ui_ScreenExtrude);
    lv_imgbtn_set_src(ui_btn_extruder_extrude, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_rec_png, NULL);
    lv_obj_set_width(ui_btn_extruder_extrude, 108);
    lv_obj_set_height(ui_btn_extruder_extrude, 38);
    lv_obj_set_x(ui_btn_extruder_extrude, 66);
    lv_obj_set_y(ui_btn_extruder_extrude, 182);

    ui_label_extruder_extrude = lv_label_create(ui_btn_extruder_extrude);
    lv_obj_set_width(ui_label_extruder_extrude, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_extruder_extrude, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_extruder_extrude, 0);
    lv_obj_set_y(ui_label_extruder_extrude, -2);
    lv_obj_set_align(ui_label_extruder_extrude, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_extruder_extrude, "Extrude");
    lv_obj_set_style_text_font(ui_label_extruder_extrude, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_extruder_retract = lv_imgbtn_create(ui_ScreenExtrude);
    lv_imgbtn_set_src(ui_btn_extruder_retract, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_btn_rec_png, NULL);
    lv_obj_set_width(ui_btn_extruder_retract, 108);
    lv_obj_set_height(ui_btn_extruder_retract, 38);
    lv_obj_set_x(ui_btn_extruder_retract, 66);
    lv_obj_set_y(ui_btn_extruder_retract, 20);

    ui_label_extruder_retract = lv_label_create(ui_btn_extruder_retract);
    lv_obj_set_width(ui_label_extruder_retract, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_extruder_retract, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_extruder_retract, 0);
    lv_obj_set_y(ui_label_extruder_retract, -2);
    lv_obj_set_align(ui_label_extruder_retract, LV_ALIGN_CENTER);
    lv_label_set_text(ui_label_extruder_retract, "Retract");
    lv_obj_set_style_text_font(ui_label_extruder_retract, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_extruder_temp = lv_imgbtn_create(ui_ScreenExtrude);
    lv_imgbtn_set_src(ui_btn_extruder_temp, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_sta_temp_png, NULL);
    lv_obj_set_width(ui_btn_extruder_temp, 86);
    lv_obj_set_height(ui_btn_extruder_temp, 97);
    lv_obj_set_x(ui_btn_extruder_temp, 25);
    lv_obj_set_y(ui_btn_extruder_temp, 71);

    ui_img_extruder_nozzle = lv_img_create(ui_btn_extruder_temp);
    lv_img_set_src(ui_img_extruder_nozzle, &ui_img_nozzle_png);
    lv_obj_set_width(ui_img_extruder_nozzle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_img_extruder_nozzle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_img_extruder_nozzle, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_img_extruder_nozzle, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_img_extruder_nozzle, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_label_extruder_target = lv_label_create(ui_btn_extruder_temp);
    lv_obj_set_width(ui_label_extruder_target, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_extruder_target, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_extruder_target, 0);
    lv_obj_set_y(ui_label_extruder_target, -15);
    lv_obj_set_align(ui_label_extruder_target, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_label_extruder_target, "0°");
    lv_obj_set_style_text_font(ui_label_extruder_target, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_extruder_actual = lv_label_create(ui_btn_extruder_temp);
    lv_obj_set_width(ui_label_extruder_actual, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_extruder_actual, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_extruder_actual, 0);
    lv_obj_set_y(ui_label_extruder_actual, 10);
    lv_obj_set_align(ui_label_extruder_actual, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_label_extruder_actual, "0°");
    lv_obj_set_style_text_color(ui_label_extruder_actual, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label_extruder_actual, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label_extruder_actual, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btn_extruder_speed = lv_imgbtn_create(ui_ScreenExtrude);
    lv_imgbtn_set_src(ui_btn_extruder_speed, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_sta_extrude_png, NULL);
    lv_obj_set_width(ui_btn_extruder_speed, 101);
    lv_obj_set_height(ui_btn_extruder_speed, 83);
    lv_obj_set_x(ui_btn_extruder_speed, 119);
    lv_obj_set_y(ui_btn_extruder_speed, 79);

    ui_label_extruder_length = lv_label_create(ui_btn_extruder_speed);
    lv_obj_set_width(ui_label_extruder_length, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_extruder_length, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_extruder_length, 20);
    lv_obj_set_y(ui_label_extruder_length, 15);
    lv_label_set_text(ui_label_extruder_length, "");
    lv_obj_set_style_text_font(ui_label_extruder_length, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label_extruder_speed = lv_label_create(ui_btn_extruder_speed);
    lv_obj_set_width(ui_label_extruder_speed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label_extruder_speed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label_extruder_speed, 20);
    lv_obj_set_y(ui_label_extruder_speed, 40);
    lv_label_set_text(ui_label_extruder_speed, "");
    lv_obj_set_style_text_font(ui_label_extruder_speed, &ui_font_InterSemiBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btn_extruder_extrude, ui_event_btn_extruder_extrude, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btn_extruder_retract, ui_event_btn_extruder_retract, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btn_extruder_temp, ui_event_btn_extruder_temp, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_btn_extruder_speed, ui_event_btn_extruder_speed, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenExtrude, ui_event_ScreenExtrude, LV_EVENT_ALL, NULL);

}
