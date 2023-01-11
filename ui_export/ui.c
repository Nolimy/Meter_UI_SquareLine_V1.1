// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.3.3
// PROJECT: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
void ui_event_startup(lv_event_t * e);
lv_obj_t * ui_startup;
lv_obj_t * ui_startupBar;
lv_obj_t * ui_startupLogo;
lv_obj_t * ui_home;
lv_obj_t * ui_logoLable;
lv_obj_t * ui_rpmNum;
lv_obj_t * ui_rpmUnit;
lv_obj_t * ui_nGearLable;
lv_obj_t * ui_socValue;
lv_obj_t * ui_socIcon;
lv_obj_t * ui_speedMode;
lv_obj_t * ui_ecoMode;
lv_obj_t * ui_iotStatus;
lv_obj_t * ui_batTemp;
lv_obj_t * ui_lMotorTemp;
lv_obj_t * ui_rMotorTemp;
lv_obj_t * ui_speedNum;
lv_obj_t * ui_speedUnitLable;
lv_obj_t * ui_bespLapTime;
lv_obj_t * ui_lapTime;
lv_obj_t * ui_bestLapTimeLable;
lv_obj_t * ui_lapTimeLable;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_startup(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        _ui_screen_change(ui_home, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 100, 0);
    }
}

///////////////////// SCREENS ////////////////////
void ui_startup_screen_init(void)
{
    ui_startup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_startup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_startup, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startupBar = lv_bar_create(ui_startup);
    lv_obj_set_width(ui_startupBar, 254);
    lv_obj_set_height(ui_startupBar, 15);
    lv_obj_set_x(ui_startupBar, -3);
    lv_obj_set_y(ui_startupBar, 40);
    lv_obj_set_align(ui_startupBar, LV_ALIGN_CENTER);
    lv_obj_set_style_anim_time(ui_startupBar, 4000, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_startupLogo = lv_img_create(ui_startup);
    lv_img_set_src(ui_startupLogo, &ui_img_splashmini_png);
    lv_obj_set_width(ui_startupLogo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_startupLogo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_startupLogo, 0);
    lv_obj_set_y(ui_startupLogo, -37);
    lv_obj_set_align(ui_startupLogo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_startupLogo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_startupLogo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_startup, ui_event_startup, LV_EVENT_ALL, NULL);

}
void ui_home_screen_init(void)
{
    ui_home = lv_obj_create(NULL);
    lv_obj_add_state(ui_home, LV_STATE_CHECKED | LV_STATE_FOCUSED);       /// States
    lv_obj_clear_flag(ui_home, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_home, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_home, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_logoLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_logoLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_logoLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_logoLable, -9);
    lv_obj_set_y(ui_logoLable, 110);
    lv_obj_set_align(ui_logoLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_logoLable, "LingYunRacingTeam");
    lv_label_set_recolor(ui_logoLable, "true");
    lv_obj_set_style_text_color(ui_logoLable, lv_color_hex(0x41A0FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_logoLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_logoLable, &ui_font_FastOne, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rpmNum = lv_label_create(ui_home);
    lv_obj_set_width(ui_rpmNum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rpmNum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rpmNum, 72);
    lv_obj_set_y(ui_rpmNum, -107);
    lv_obj_set_align(ui_rpmNum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rpmNum, "0000");
    lv_obj_set_style_text_color(ui_rpmNum, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rpmNum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_rpmNum, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_rpmNum, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rpmNum, &ui_font_bigNumber40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rpmUnit = lv_label_create(ui_home);
    lv_obj_set_width(ui_rpmUnit, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rpmUnit, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rpmUnit, 173);
    lv_obj_set_y(ui_rpmUnit, -95);
    lv_obj_set_align(ui_rpmUnit, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rpmUnit, "RPM");
    lv_obj_set_style_bg_color(ui_rpmUnit, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_rpmUnit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_nGearLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_nGearLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_nGearLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_nGearLable, 18);
    lv_obj_set_y(ui_nGearLable, -34);
    lv_obj_set_align(ui_nGearLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_nGearLable, "N");
    lv_obj_set_style_text_color(ui_nGearLable, lv_color_hex(0x4195F4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_nGearLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_nGearLable, &ui_font_PlayFairBig, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_socValue = lv_bar_create(ui_home);
    lv_bar_set_value(ui_socValue, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_socValue, 16);
    lv_obj_set_height(ui_socValue, 167);
    lv_obj_set_x(ui_socValue, 214);
    lv_obj_set_y(ui_socValue, -20);
    lv_obj_set_align(ui_socValue, LV_ALIGN_CENTER);

    ui_socIcon = lv_label_create(ui_home);
    lv_obj_set_width(ui_socIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_socIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_socIcon, 214);
    lv_obj_set_y(ui_socIcon, 84);
    lv_obj_set_align(ui_socIcon, LV_ALIGN_CENTER);
    lv_label_set_text(ui_socIcon, "");
    lv_obj_set_style_text_color(ui_socIcon, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_socIcon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_socIcon, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedMode = lv_label_create(ui_home);
    lv_obj_set_width(ui_speedMode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedMode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedMode, 84);
    lv_obj_set_y(ui_speedMode, 58);
    lv_obj_set_align(ui_speedMode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedMode, "");
    lv_obj_set_style_text_color(ui_speedMode, lv_color_hex(0x6464FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speedMode, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ecoMode = lv_label_create(ui_home);
    lv_obj_set_width(ui_ecoMode, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ecoMode, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ecoMode, 139);
    lv_obj_set_y(ui_ecoMode, 72);
    lv_obj_set_align(ui_ecoMode, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ecoMode, "");
    lv_obj_set_style_text_color(ui_ecoMode, lv_color_hex(0x80FF80), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ecoMode, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ecoMode, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_iotStatus = lv_label_create(ui_home);
    lv_obj_set_width(ui_iotStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_iotStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_iotStatus, 13);
    lv_obj_set_y(ui_iotStatus, 73);
    lv_obj_set_align(ui_iotStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_iotStatus, "");
    lv_obj_set_style_text_color(ui_iotStatus, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_iotStatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_iotStatus, &ui_font_icon_bettery, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_batTemp = lv_label_create(ui_home);
    lv_obj_set_width(ui_batTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_batTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_batTemp, 83);
    lv_obj_set_y(ui_batTemp, 20);
    lv_obj_set_align(ui_batTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_batTemp, "000");
    lv_obj_set_style_text_color(ui_batTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_batTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_batTemp, &ui_font_bigNumber_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lMotorTemp = lv_label_create(ui_home);
    lv_obj_set_width(ui_lMotorTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lMotorTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lMotorTemp, 4);
    lv_obj_set_y(ui_lMotorTemp, 32);
    lv_obj_set_align(ui_lMotorTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lMotorTemp, "00");
    lv_obj_set_style_text_color(ui_lMotorTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lMotorTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lMotorTemp, &ui_font_bigNumber_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_rMotorTemp = lv_label_create(ui_home);
    lv_obj_set_width(ui_rMotorTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_rMotorTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_rMotorTemp, 160);
    lv_obj_set_y(ui_rMotorTemp, 32);
    lv_obj_set_align(ui_rMotorTemp, LV_ALIGN_CENTER);
    lv_label_set_text(ui_rMotorTemp, "00");
    lv_obj_set_style_text_color(ui_rMotorTemp, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_rMotorTemp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_rMotorTemp, &ui_font_bigNumber_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedNum = lv_label_create(ui_home);
    lv_obj_set_width(ui_speedNum, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedNum, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedNum, -123);
    lv_obj_set_y(ui_speedNum, -21);
    lv_obj_set_align(ui_speedNum, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedNum, "000");
    lv_obj_set_style_text_color(ui_speedNum, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedNum, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_speedNum, &ui_font_bigNumber_25, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_speedUnitLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_speedUnitLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_speedUnitLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_speedUnitLable, -124);
    lv_obj_set_y(ui_speedUnitLable, 8);
    lv_obj_set_align(ui_speedUnitLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_speedUnitLable, "KMH");
    lv_obj_set_style_text_color(ui_speedUnitLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_speedUnitLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_speedUnitLable, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_speedUnitLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bespLapTime = lv_label_create(ui_home);
    lv_obj_set_width(ui_bespLapTime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bespLapTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_bespLapTime, 91);
    lv_obj_set_y(ui_bespLapTime, -51);
    lv_obj_set_align(ui_bespLapTime, LV_ALIGN_CENTER);
    lv_label_set_text(ui_bespLapTime, "00:00:00");
    lv_obj_set_style_text_color(ui_bespLapTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bespLapTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bespLapTime, &ui_font_FastOne, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lapTime = lv_label_create(ui_home);
    lv_obj_set_width(ui_lapTime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lapTime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lapTime, 91);
    lv_obj_set_y(ui_lapTime, -23);
    lv_obj_set_align(ui_lapTime, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lapTime, "00:00:00");
    lv_obj_set_style_text_color(ui_lapTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lapTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lapTime, &ui_font_FastOne, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bestLapTimeLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_bestLapTimeLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_bestLapTimeLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_bestLapTimeLable, 166);
    lv_obj_set_y(ui_bestLapTimeLable, -51);
    lv_obj_set_align(ui_bestLapTimeLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_bestLapTimeLable, "best lap");
    lv_obj_set_style_text_color(ui_bestLapTimeLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bestLapTimeLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bestLapTimeLable, lv_color_hex(0x00FFC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bestLapTimeLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lapTimeLable = lv_label_create(ui_home);
    lv_obj_set_width(ui_lapTimeLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lapTimeLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lapTimeLable, 167);
    lv_obj_set_y(ui_lapTimeLable, -24);
    lv_obj_set_align(ui_lapTimeLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lapTimeLable, "lap time");
    lv_obj_set_style_text_color(ui_lapTimeLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lapTimeLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lapTimeLable, lv_color_hex(0x00FFC8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lapTimeLable, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_startup_screen_init();
    ui_home_screen_init();
    lv_disp_load_scr(ui_startup);
}
