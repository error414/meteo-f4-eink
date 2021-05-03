#include "lvgl.h"
#include "guiMain.h"


static lv_point_t lineTopPoints1[] = { {0, HEIGHT_HEADER}, {LV_HOR_RES_MAX, HEIGHT_HEADER} };
static lv_point_t lineTopPoints2[] = { {0, HEIGHT_FORECAST + HEIGHT_HEADER}, {LV_HOR_RES_MAX, HEIGHT_FORECAST + HEIGHT_HEADER} };
static lv_point_t lineTopPoints3[] = { {0, HEIGHT_FORECAST + HEIGHT_HEADER + HEIGHT_SENSOR_HEADER}, {LV_HOR_RES_MAX, HEIGHT_FORECAST + HEIGHT_HEADER + HEIGHT_SENSOR_HEADER} };
static lv_point_t lineTopPoints4[] = { {LV_HOR_RES_MAX / 2 - 2 , HEIGHT_FORECAST + HEIGHT_HEADER}, {LV_HOR_RES_MAX / 2 - 2 , LV_VER_RES_MAX} };
static lv_point_t lineTopPoints5[] = { {LV_HOR_RES_MAX / 2 + 2 , HEIGHT_FORECAST + HEIGHT_HEADER}, {LV_HOR_RES_MAX / 2 + 2 , LV_VER_RES_MAX} };

lv_style_t styleFontText12;
lv_style_t styleFontText14;
lv_style_t styleFontText16;
lv_style_t styleFontText20;
lv_style_t styleFont16;
lv_style_t styleFont20;
lv_style_t styleFont30;
lv_style_t styleFont38;
lv_style_t styleFont42;
lv_style_t styleFont48;
lv_style_t styleLine;
lv_style_t styleChart;
lv_style_t styleChartSeries;
lv_style_t noBorder;

void guiInit(void){

    lv_style_init(&styleFontText12);
    lv_style_set_text_font(&styleFontText12, LV_STATE_DEFAULT, &retro12);

    lv_style_init(&styleFontText14);
    lv_style_set_text_font(&styleFontText14, LV_STATE_DEFAULT, &press14);

    lv_style_init(&styleFontText16);
    lv_style_set_text_font(&styleFontText16, LV_STATE_DEFAULT, &press16);

    lv_style_init(&styleFontText20);
    lv_style_set_text_font(&styleFontText20, LV_STATE_DEFAULT, &retro20);

    lv_style_init(&styleFont16);
    lv_style_set_text_font(&styleFont16, LV_STATE_DEFAULT, &upheaval16);

    lv_style_init(&styleFont20);
    lv_style_set_text_font(&styleFont20, LV_STATE_DEFAULT, &upheaval20);

    lv_style_init(&styleFont30);
    lv_style_set_text_font(&styleFont30, LV_STATE_DEFAULT, &upheaval30);

    lv_style_init(&styleFont48);
    lv_style_set_text_font(&styleFont48, LV_STATE_DEFAULT, &upheaval48);

    lv_style_init(&styleLine);
    lv_style_set_line_width(&styleLine, LV_STATE_DEFAULT, 1);

    lv_style_init(&styleChart);
    lv_style_set_border_width(&styleChart, LV_STATE_DEFAULT, 0);
    lv_style_set_margin_left(&styleChart, LV_STATE_DEFAULT, 0);

    lv_style_init(&noBorder);
    lv_style_set_border_width(&noBorder, LV_STATE_DEFAULT, 0);
    lv_style_set_margin_all(&noBorder, LV_STATE_DEFAULT, 0);
    lv_style_set_radius(&noBorder, LV_STATE_DEFAULT, 0);


    lv_style_init(&styleChartSeries);
    lv_style_set_border_width(&styleChartSeries, LV_STATE_DEFAULT, 1);
    lv_style_set_radius(&styleChartSeries, LV_STATE_DEFAULT, 0);
    lv_style_set_line_width(&styleChartSeries, LV_STATE_DEFAULT, LV_DPX(1));
    lv_style_set_line_dash_width(&styleChartSeries, LV_STATE_DEFAULT, LV_DPX(10));
    lv_style_set_line_dash_gap(&styleChartSeries, LV_STATE_DEFAULT, LV_DPX(10));
    lv_style_set_line_color(&styleChartSeries, LV_STATE_DEFAULT, LV_COLOR_BLACK);
}

void guiCreateBackground(void){
    lv_obj_t * lineTop = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(lineTop, lineTopPoints1, 2);
    lv_obj_add_style(lineTop, LV_LINE_PART_MAIN, &styleLine);

    lv_obj_t * lineTop2 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(lineTop2, lineTopPoints2, 2);
    lv_obj_add_style(lineTop2, LV_LINE_PART_MAIN, &styleLine);

    lv_obj_t * lineTop3 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(lineTop3, lineTopPoints3, 2);
    lv_obj_add_style(lineTop3, LV_LINE_PART_MAIN, &styleLine);

    lv_obj_t * lineTop4 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(lineTop4, lineTopPoints4, 2);
    lv_obj_add_style(lineTop4, LV_LINE_PART_MAIN, &styleLine);

    lv_obj_t * lineTop5 = lv_line_create(lv_scr_act(), NULL);
    lv_line_set_points(lineTop5, lineTopPoints5, 2);
    lv_obj_add_style(lineTop5, LV_LINE_PART_MAIN, &styleLine);
}
