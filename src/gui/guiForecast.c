#include "guiMain.h"
#include "guiForecast.h"


static const char *dayNameList[] = {DAY_NAME_LIST};
static const lv_img_dsc_t* iconList[] = {&fc_cloud, &fc_part_clound, &fc_rain};


static struct guiMainHeaderObject_t{
    lv_obj_t* dayName[FORECAST_DAYS];
    lv_obj_t* fcIcon[FORECAST_DAYS];
    lv_obj_t* temp[FORECAST_DAYS];
} guiForecastObject;

void guiInitForecast(lv_obj_t *parent, uint16_t posY, uint16_t height){
    lv_obj_t * forecastMainBlock = lv_cont_create(parent, NULL);
    lv_obj_clean_style_list(forecastMainBlock, LV_LINE_PART_MAIN);
    lv_obj_set_pos(forecastMainBlock, 0, posY);
    lv_obj_set_size(forecastMainBlock, LV_HOR_RES_MAX, height);
    lv_cont_set_layout(forecastMainBlock, LV_LAYOUT_GRID);

    uint16_t itemBlockSize = LV_HOR_RES_MAX / FORECAST_DAYS;
    for(uint8_t i = 0; i < FORECAST_DAYS; i++){
        lv_obj_t * forecastItemCont = lv_cont_create(forecastMainBlock, NULL);
        lv_obj_clean_style_list(forecastItemCont, LV_LINE_PART_MAIN);
        lv_cont_set_layout(forecastItemCont, LV_LAYOUT_CENTER);
        lv_obj_set_size(forecastItemCont, itemBlockSize, height);

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

        lv_img_set_src(guiForecastObject.fcIcon[i], iconList[values->dayIconIndex[i]]);
        lv_label_set_text(guiForecastObject.temp[i], "12.62C");
    }


}
