#ifndef GUI_FORECAST_H
#define GUI_FORECAST_H

#include "lvgl.h"

#define FORECAST_DAYS 7
#define DAY_NAME_LIST "Pondeli", "Utery", "Streda", "Ctvrtek", "Patek", "Sobota", "Nedele"
#define DAY_NAME_TODAY "Dnes"

LV_IMG_DECLARE(fc_part_clound);
LV_IMG_DECLARE(fc_snow);
LV_IMG_DECLARE(fc_cloud);
LV_IMG_DECLARE(fc_part_clound);
LV_IMG_DECLARE(fc_rain);
LV_IMG_DECLARE(fc_thunderstorm);
LV_IMG_DECLARE(fc_drizzle);
LV_IMG_DECLARE(fc_clear);

#define FC_CLEAR_1              &fc_clear
#define FC_CLOUND_A_2           &fc_part_clound
#define FC_CLOUND_A_3           &fc_part_clound
#define FC_CLOUND_A_4           &fc_cloud
#define FC_THUNDERSTORM_11      &fc_thunderstorm
#define FC_DRIZZLE_9            &fc_drizzle
#define FC_RAIN_10              &fc_rain
#define FC_SNOW_13              &fc_snow



typedef struct {
    uint8_t     dayIconIndex[FORECAST_DAYS];
    uint16_t    dayTemp[FORECAST_DAYS];
    uint8_t     dayNameStart;
} __packed guiForecastValues_t;

void guiInitForecast(lv_obj_t *parent, uint16_t posY, uint16_t height);
void guiFillForecast(guiForecastValues_t* values);

#endif
