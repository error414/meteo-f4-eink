#ifndef GUI_MAIN_H
#define GUI_MAIN_H

#include "lvgl.h"

#define HEIGHT_HEADER 20
#define HEIGHT_FORECAST 120
#define HEIGHT_SENSOR_HEADER 20

LV_IMG_DECLARE(humidity36);
LV_IMG_DECLARE(pressure36);
LV_IMG_DECLARE(sun36);
LV_IMG_DECLARE(rain36);
LV_IMG_DECLARE(uv36);
LV_IMG_DECLARE(wind36);
LV_IMG_DECLARE(temp);

LV_FONT_DECLARE(digital_48);
LV_FONT_DECLARE(digital_20)
LV_FONT_DECLARE(digital_16);
LV_FONT_DECLARE(upheaval16);
LV_FONT_DECLARE(upheaval20);
LV_FONT_DECLARE(upheaval30);
LV_FONT_DECLARE(upheaval48);
LV_FONT_DECLARE(omega16);
LV_FONT_DECLARE(omega20);
LV_FONT_DECLARE(press16);
LV_FONT_DECLARE(press14);
LV_FONT_DECLARE(press12);
LV_FONT_DECLARE(dogica12);
LV_FONT_DECLARE(omega12);
LV_FONT_DECLARE(retro12);
LV_FONT_DECLARE(retro20);

extern lv_style_t styleFontText12;
extern lv_style_t styleFontText14;
extern lv_style_t styleFontText16;
extern lv_style_t styleFontText20;
extern lv_style_t styleFont16;
extern lv_style_t styleFont20;
extern lv_style_t styleFont30;
extern lv_style_t styleFont38;
extern lv_style_t styleFont42;
extern lv_style_t styleFont48;
extern lv_style_t styleLine;
extern lv_style_t styleChart;
extern lv_style_t styleChartSeries;
extern lv_style_t noBorder;

void guiInit(void);
void guiCreateBackground(void);

#endif

