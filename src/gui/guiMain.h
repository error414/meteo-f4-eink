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
LV_IMG_DECLARE(no_rain36);
LV_IMG_DECLARE(uv36);
LV_IMG_DECLARE(wind36);
LV_IMG_DECLARE(temp);
;
LV_FONT_DECLARE(upheaval16);
LV_FONT_DECLARE(upheaval20);
LV_FONT_DECLARE(upheaval30);
LV_FONT_DECLARE(upheaval48);;
LV_FONT_DECLARE(retro12);

extern lv_style_t styleFontText12;
extern lv_style_t styleFont16;
extern lv_style_t styleFont20;
extern lv_style_t styleFont30;
extern lv_style_t styleFont48;
extern lv_style_t styleLine;
extern lv_style_t styleChart;
extern lv_style_t styleChartSeries;
extern lv_style_t noBorder;

void guiInit(void);
void guiCreateBackground(void);

#endif

