#include "guiMain.h"
#include "guiOutside.h"
#include "ch.h"
#include "hal.h"
#include "chprintf.h"

static struct guiOutsideObject_t{
    lv_obj_t* battIcon;
    lv_obj_t* battLabel;
    lv_obj_t* tempLabel;
    lv_obj_t* humidityLabel;
    lv_obj_t* presureLabel;
    lv_obj_t* windLabel;
    lv_obj_t* uvLabel;
    lv_obj_t* lightLabel;
    lv_obj_t* rainIcon;
    lv_obj_t* tempChart;
} guiOutsideObject;

lv_chart_series_t * guiOutsideChartTempSer;

/**
 *
 * @param parent
 * @param posY
 * @param height
 * @param name
 */
void guiInitOutside(lv_obj_t *parent, uint16_t posY, uint16_t height, const char *name){
    lv_obj_t * labelLeftBlock = lv_obj_create(parent, NULL);
    lv_obj_add_style(labelLeftBlock, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_pos(labelLeftBlock, 0, posY);
    lv_obj_set_size(labelLeftBlock, LV_HOR_RES_MAX / 2, height);

    lv_obj_t * labelLef = lv_label_create(labelLeftBlock, NULL);
    lv_obj_add_style(labelLef, LV_OBJ_PART_MAIN, &styleFontText12);
    lv_label_set_text(labelLef, name);
    lv_obj_align(labelLef, NULL, LV_ALIGN_CENTER, 0, 0);

    //guiOutsideObject.battIcon = lv_img_create(labelLeftBlock, NULL);

    guiOutsideObject.battLabel = lv_label_create(labelLeftBlock, NULL);
    lv_obj_add_style(guiOutsideObject.battLabel, LV_OBJ_PART_MAIN, &styleFontText12);
    lv_obj_align(guiOutsideObject.battLabel, NULL, LV_ALIGN_IN_RIGHT_MID, -8, 0);

    ////////////////////////////////////////////////////////////////////////////////
    posY += 20;
    height = LV_VER_RES_MAX - posY;

    lv_obj_t * mainCon = lv_cont_create(parent, NULL);
    lv_obj_clean_style_list(mainCon, LV_LINE_PART_MAIN);
    lv_cont_set_layout(mainCon, LV_LAYOUT_PRETTY_TOP);
    lv_obj_set_size(mainCon, LV_HOR_RES_MAX / 2, height);
    lv_obj_set_pos(mainCon, 0, posY);

    //////////////////////////////////////////////////
    //TEMP
    lv_obj_t * tempBlock = lv_obj_create(mainCon, NULL);
    lv_obj_add_style(tempBlock, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(tempBlock, LV_HOR_RES_MAX / 2, 80);
    lv_obj_align(tempBlock, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

    lv_obj_t * tempIcon = lv_img_create(tempBlock, NULL);
    lv_img_set_src(tempIcon, &temp);
    lv_obj_align(tempIcon, NULL, LV_ALIGN_IN_LEFT_MID, 20, 0);

    guiOutsideObject.tempLabel = lv_label_create(tempBlock, NULL);
    lv_obj_add_style(guiOutsideObject.tempLabel, LV_OBJ_PART_MAIN, &styleFont48);
    lv_obj_align(guiOutsideObject.tempLabel, NULL, LV_ALIGN_IN_LEFT_MID, 50, 0);
    //////////////////////////////////////////////////


    //////////////////////////////////////////////////
    //////////////////////////////////////////////////
    lv_obj_t * sensorsCon = lv_obj_create(mainCon, NULL);
    lv_obj_add_style(sensorsCon, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(sensorsCon, LV_HOR_RES_MAX / 2, 110);
    lv_obj_align(sensorsCon, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);


    //////////////////////////////////////////////////
    // FIRST ROW
    lv_obj_t * sensorsLine1Con = lv_cont_create(sensorsCon, NULL);
    lv_obj_clean_style_list(sensorsLine1Con, LV_LINE_PART_MAIN);
    lv_obj_add_style(sensorsLine1Con, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(sensorsLine1Con, LV_HOR_RES_MAX / 2, 55);
    lv_obj_align(sensorsLine1Con, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 0);

    //////////////////////////////////////////////////
    // HUMIDITY
    lv_obj_t * sensorsLine1ACon = lv_cont_create(sensorsLine1Con, NULL);
    lv_cont_set_layout(sensorsLine1ACon, LV_LAYOUT_ROW_MID);
    lv_obj_add_style(sensorsLine1ACon, LV_OBJ_PART_MAIN, &noBorder);
    lv_cont_set_layout(sensorsLine1ACon, LV_LAYOUT_ROW_MID);
    lv_obj_set_size(sensorsLine1ACon, LV_HOR_RES_MAX / 6, 55);

    lv_obj_t * humidityIcon = lv_img_create(sensorsLine1ACon, NULL);
    lv_img_set_src(humidityIcon, &humidity36);
    lv_obj_align(humidityIcon, NULL, LV_ALIGN_IN_LEFT_MID, 0, 0);

    guiOutsideObject.humidityLabel = lv_label_create(sensorsLine1ACon, NULL);
    lv_obj_add_style(guiOutsideObject.humidityLabel, LV_OBJ_PART_MAIN, &styleFont30);

    //////////////////////////////////////////////////
    // PRESSURE
    lv_obj_t * sensorsLine1BCon = lv_cont_create(sensorsLine1Con, NULL);
    lv_cont_set_layout(sensorsLine1BCon, LV_LAYOUT_ROW_MID);
    lv_obj_add_style(sensorsLine1BCon, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(sensorsLine1BCon, LV_HOR_RES_MAX / 5.5, 55);
    lv_obj_align(sensorsLine1BCon, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

    lv_obj_t * pressureIcon = lv_img_create(sensorsLine1BCon, NULL);
    lv_img_set_src(pressureIcon, &pressure36);
    lv_obj_align(pressureIcon, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 0);

    guiOutsideObject.presureLabel = lv_label_create(sensorsLine1BCon, NULL);
    lv_obj_add_style(guiOutsideObject.presureLabel, LV_OBJ_PART_MAIN, &styleFont30);
    lv_obj_align(guiOutsideObject.presureLabel, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
    //////////////////////////////////////////////////

    //////////////////////////////////////////////////
    // WIND
    lv_obj_t * sensorsLine1CCon = lv_cont_create(sensorsLine1Con, NULL);
    lv_cont_set_layout(sensorsLine1CCon, LV_LAYOUT_ROW_MID);
    lv_obj_add_style(sensorsLine1CCon, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(sensorsLine1CCon, LV_HOR_RES_MAX / 7, 55);
    lv_obj_align(sensorsLine1CCon, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

    lv_obj_t * windIcon = lv_img_create(sensorsLine1CCon, NULL);
    lv_img_set_src(windIcon, &wind36);
    lv_obj_align(windIcon, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 0);

    guiOutsideObject.windLabel = lv_label_create(sensorsLine1CCon, NULL);
    lv_obj_add_style(guiOutsideObject.windLabel, LV_OBJ_PART_MAIN, &styleFont30);
    lv_obj_align(guiOutsideObject.windLabel, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 0);
    //////////////////////////////////////////////////


    //////////////////////////////////////////////////
    //////////////////////////////////////////////////
    // SECOND ROW
    lv_obj_t * sensorsLine2Con = lv_obj_create(sensorsCon, NULL);
    lv_obj_clean_style_list(sensorsLine2Con, LV_LINE_PART_MAIN);
    lv_obj_set_size(sensorsLine2Con, LV_HOR_RES_MAX / 2, 110);
    lv_obj_align(sensorsLine2Con, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 55);

    //////////////////////////////////////////////////
    // UV INDEX
    lv_obj_t * sensorsLine2ACon = lv_cont_create(sensorsLine2Con, NULL);
    lv_cont_set_layout(sensorsLine2ACon, LV_LAYOUT_ROW_MID);
    lv_obj_add_style(sensorsLine2ACon, LV_OBJ_PART_MAIN, &noBorder);
    lv_cont_set_layout(sensorsLine2ACon, LV_LAYOUT_ROW_MID);
    lv_obj_set_size(sensorsLine2ACon, LV_HOR_RES_MAX / 6, 55);

    lv_obj_t * uvIcon = lv_img_create(sensorsLine2ACon, NULL);
    lv_img_set_src(uvIcon, &uv36);
    lv_obj_align(uvIcon, NULL, LV_ALIGN_IN_LEFT_MID, 0, 0);

    guiOutsideObject.uvLabel = lv_label_create(sensorsLine2ACon, NULL);
    lv_obj_add_style(guiOutsideObject.uvLabel, LV_OBJ_PART_MAIN, &styleFont30);
    //////////////////////////////////////////////////

    //////////////////////////////////////////////////
    // LIGHT
    lv_obj_t * sensorsLine2BCon = lv_cont_create(sensorsLine2Con, NULL);
    lv_cont_set_layout(sensorsLine2BCon, LV_LAYOUT_ROW_MID);
    lv_obj_add_style(sensorsLine2BCon, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(sensorsLine2BCon, LV_HOR_RES_MAX / 5.5, 55);
    lv_obj_align(sensorsLine2BCon, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

    lv_obj_t * lightIcon = lv_img_create(sensorsLine2BCon, NULL);
    lv_img_set_src(lightIcon, &sun36);
    lv_obj_align(lightIcon, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 0);

    guiOutsideObject.lightLabel = lv_label_create(sensorsLine2BCon, NULL);
    lv_obj_add_style(guiOutsideObject.lightLabel, LV_OBJ_PART_MAIN, &styleFont30);
    lv_obj_align(guiOutsideObject.lightLabel, NULL, LV_ALIGN_IN_RIGHT_MID, 0, 0);
    //////////////////////////////////////////////////

    //////////////////////////////////////////////////
    // RAIN
    lv_obj_t * sensorsLine2CCon = lv_cont_create(sensorsLine2Con, NULL);
    lv_cont_set_layout(sensorsLine2CCon, LV_LAYOUT_ROW_MID);
    lv_obj_add_style(sensorsLine2CCon, LV_OBJ_PART_MAIN, &noBorder);
    lv_obj_set_size(sensorsLine2CCon, LV_HOR_RES_MAX / 9, 55);
    lv_obj_align(sensorsLine2CCon, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

    guiOutsideObject.rainIcon = lv_img_create(sensorsLine2CCon, NULL);
    //////////////////////////////////////////////////

    //////////////////////////////////////////////////
    //////////////////////////////////////////////////
    // CHART
    posY += 110 + 80;
    height = LV_VER_RES_MAX - posY;

    guiOutsideObject.tempChart = lv_chart_create(mainCon, NULL);
    lv_obj_add_style(guiOutsideObject.tempChart, LV_CHART_PART_BG, &styleChart);
    lv_obj_add_style(guiOutsideObject.tempChart, LV_CHART_PART_SERIES_BG, &styleChartSeries);
    lv_obj_set_size(guiOutsideObject.tempChart, LV_HOR_RES_MAX / 2, height);
    lv_obj_align(guiOutsideObject.tempChart, NULL, LV_ALIGN_CENTER, 0, 0);
    lv_chart_set_type(guiOutsideObject.tempChart, LV_CHART_TYPE_LINE );   /*Show lines and points too*/

    lv_chart_set_range(guiOutsideObject.tempChart, -20, 40);
    lv_chart_set_point_count(guiOutsideObject.tempChart, 24 * 6); // 24hours * 10 min
    lv_chart_set_div_line_count(guiOutsideObject.tempChart, 7, 0);


    lv_chart_set_y_tick_texts(guiOutsideObject.tempChart, "-20\n-10\n0\n10\n20\n30\n40", 7, LV_CHART_AXIS_DRAW_LAST_TICK | LV_CHART_AXIS_INVERSE_LABELS_ORDER);
    lv_chart_set_y_tick_length(guiOutsideObject.tempChart, 4, 0);
    lv_obj_set_style_local_text_color(guiOutsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_obj_set_style_local_text_font(guiOutsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_obj_set_style_local_pad_bottom(guiOutsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_left(guiOutsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 50);

    /*Add two data series*/
    guiOutsideChartTempSer = lv_chart_add_series(guiOutsideObject.tempChart, LV_COLOR_BLACK);
}

/**
 *
 * @param values
 */
void guiFillOutsideAll(guiOutsideValues_t* values){
    ///////////////////////////////////////////////////////////////////////////////
	char bufferBattLabel[10];
	chsnprintf(bufferBattLabel, sizeof(bufferBattLabel), "%.2fV", (float)values->voltage / 100.0f);
    lv_label_set_text(guiOutsideObject.battLabel, bufferBattLabel);

	char bufferTempLabel[10];
	chsnprintf(bufferTempLabel, sizeof(bufferTempLabel), "%.2f", (float)((float)values->temp / 100.0f) - 100);
    lv_label_set_text(guiOutsideObject.tempLabel, bufferTempLabel);

	char bufferHumidityLabel[10];
	chsnprintf(bufferHumidityLabel, sizeof(bufferHumidityLabel), "%d", values->humidity);
    lv_label_set_text(guiOutsideObject.humidityLabel, bufferHumidityLabel);

	char bufferPresureLabel[15];
	chsnprintf(bufferPresureLabel, sizeof(bufferPresureLabel), "%d", values->pressure);
    lv_label_set_text(guiOutsideObject.presureLabel, bufferPresureLabel);

    lv_label_set_text(guiOutsideObject.windLabel, "0");

	if(values->rain){
		lv_img_set_src(guiOutsideObject.rainIcon, &rain36);
	}else{
		lv_img_set_src(guiOutsideObject.rainIcon, &no_rain36);
	}
    lv_obj_align(guiOutsideObject.rainIcon, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

	char bufferUvLabel[10];
	chsnprintf(bufferUvLabel, sizeof(bufferUvLabel), "%.2f", (float)values->uvIndex / 100.0f);
    lv_label_set_text(guiOutsideObject.uvLabel, bufferUvLabel);

	char bufferLightLabel[10];
	chsnprintf(bufferLightLabel, sizeof(bufferLightLabel), "%d", values->sunlight);
    lv_label_set_text(guiOutsideObject.lightLabel, bufferLightLabel);

    lv_chart_set_next(guiOutsideObject.tempChart, guiOutsideChartTempSer, (lv_coord_t)((values->temp / 100) - 100));
}
