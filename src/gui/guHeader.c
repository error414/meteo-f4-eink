#include "guiMain.h"
#include "guiHeader.h"

static struct guiMainHeaderObject_t {
    lv_obj_t* placeLabel;
    lv_obj_t* battIcon;
    lv_obj_t* battLabel;
} guiMainHeaderObject;

void guiInitMainHeader(const char *placeName){
    lv_obj_t * labelHeaderLeftBlock = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(labelHeaderLeftBlock, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_pos(labelHeaderLeftBlock, 0, 0);
    lv_obj_set_size(labelHeaderLeftBlock, LV_HOR_RES_MAX / 2, 20);

    lv_obj_t * labelHeaderRigtBlock = lv_obj_create(lv_scr_act(), NULL);
    lv_obj_add_style(labelHeaderRigtBlock, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_pos(labelHeaderRigtBlock, LV_HOR_RES_MAX / 2, 0);
    lv_obj_set_size(labelHeaderRigtBlock, LV_HOR_RES_MAX / 2, 20);

    guiMainHeaderObject.placeLabel = lv_label_create(labelHeaderLeftBlock, NULL);
    lv_obj_add_style(guiMainHeaderObject.placeLabel, LV_OBJ_PART_MAIN, &styleFontText12);
    lv_obj_align(guiMainHeaderObject.placeLabel, NULL, LV_ALIGN_IN_LEFT_MID, 50, 0);
    lv_label_set_text(guiMainHeaderObject.placeLabel, placeName);

    /*guiMainHeaderObject.battIcon = lv_img_create(labelHeaderRigtBlock, NULL);
    lv_obj_align(guiMainHeaderObject.battIcon, NULL, LV_ALIGN_IN_RIGHT_MID, -50, 0);*/

    guiMainHeaderObject.battLabel = lv_label_create(labelHeaderRigtBlock, NULL);
    lv_obj_add_style(guiMainHeaderObject.battLabel, LV_OBJ_PART_MAIN, &styleFontText12);
    lv_obj_add_style(guiMainHeaderObject.battLabel, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_align(guiMainHeaderObject.battLabel, NULL, LV_ALIGN_IN_RIGHT_MID, -10, 2);
}

void guiFillMainHeader(guiMainHeaderValues_t* values){
   /* if(values->voltagePercent < 10){
        lv_img_set_src(guiMainHeaderObject.battIcon, &batt0);
    }else if(values->voltagePercent < 30){
        lv_img_set_src(guiMainHeaderObject.battIcon, &batt20);
    }else if(values->voltagePercent < 60){
        lv_img_set_src(guiMainHeaderObject.battIcon, &batt20);
    }else if(values->voltagePercent < 90){
        lv_img_set_src(guiMainHeaderObject.battIcon, &batt80);
    }else {
        lv_img_set_src(guiMainHeaderObject.battIcon, &batt100);
    }*/
    //lv_obj_align(guiMainHeaderObject.battIcon, NULL, LV_ALIGN_IN_RIGHT_MID, -50, 0);

    lv_label_set_text(guiMainHeaderObject.battLabel, "4.15V");
}
