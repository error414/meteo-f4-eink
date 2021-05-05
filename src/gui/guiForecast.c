#include "guiMain.h"
#include "guiForecast.h"
#include "ch.h"
#include "hal.h"
#include "chprintf.h"

static const char *dayNameList[] = {DAY_NAME_LIST};

static struct guiMainHeaderObject_t{
    lv_obj_t* dayName[FORECAST_DAYS];
    lv_obj_t* fcIcon[FORECAST_DAYS];
    lv_obj_t* temp[FORECAST_DAYS];
} guiForecastObject;

void guiInitForecast(lv_obj_t *parent, uint16_t posY, uint16_t height){
    lv_obj_t * forecastMainBlock = lv_cont_create(parent, NULL);
    lv_obj_clean_style_list(forecastMainBlock, LV_LINE_PART_MAIN);
    lv_obj_set_pos(forecastMainBlock, 0, (lv_coord_t)posY);
    lv_obj_set_size(forecastMainBlock, LV_HOR_RES_MAX, (lv_coord_t)height);
    lv_cont_set_layout(forecastMainBlock, LV_LAYOUT_GRID);

    uint16_t itemBlockSize = LV_HOR_RES_MAX / FORECAST_DAYS;
    for(uint8_t i = 0; i < FORECAST_DAYS; i++){
        lv_obj_t * forecastItemCont = lv_cont_create(forecastMainBlock, NULL);
        lv_obj_clean_style_list(forecastItemCont, LV_LINE_PART_MAIN);
        lv_cont_set_layout(forecastItemCont, LV_LAYOUT_CENTER);
        lv_obj_set_size(forecastItemCont, (lv_coord_t)itemBlockSize, (lv_coord_t)height);

        guiForecastObject.dayName[i] = lv_label_create(forecastItemCont, NULL);
        lv_obj_add_style(guiForecastObject.dayName[i], LV_LINE_PART_MAIN, &styleFont16);
        lv_obj_align(guiForecastObject.dayName[i], NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

        guiForecastObject.fcIcon[i] = lv_img_create(forecastItemCont, NULL);
        lv_obj_align(guiForecastObject.fcIcon[i], NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

        guiForecastObject.temp[i] = lv_label_create(forecastItemCont, NULL);
        lv_obj_add_style(guiForecastObject.temp[i], LV_LINE_PART_MAIN, &styleFont20);
        lv_obj_align(guiForecastObject.temp[i], NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
    }
}

void guiFillForecast(guiForecastValues_t* values){
    for(uint8_t i = 0; i < FORECAST_DAYS; i++){
        if(i == 0){
            lv_label_set_text(guiForecastObject.dayName[i], DAY_NAME_TODAY);
        }else{
            lv_label_set_text(guiForecastObject.dayName[i], dayNameList[(values->dayNameStart + i) % 7]);
        }

	    char buffer[15];
	    chsnprintf(buffer, sizeof(buffer), "%.2f", ((float)(values->dayTemp[i]) / 100.0f) - 100);
        lv_label_set_text(guiForecastObject.temp[i], buffer);

        switch(values->dayIconIndex[i]){
        	case 1:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_CLEAR_1);
		        break;
	        case 2:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_CLOUND_A_2);
		        break;
	        case 3:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_CLOUND_A_3);
		        break;
	        case 4:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_CLOUND_A_4);
		        break;
	        case 11:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_THUNDERSTORM_11);
		        break;
	        case 9:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_DRIZZLE_9);
		        break;
	        case 10:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_RAIN_10);
		        break;
	        case 13:
		        lv_img_set_src(guiForecastObject.fcIcon[i], FC_SNOW_13);
		        break;
        }
    }
}
