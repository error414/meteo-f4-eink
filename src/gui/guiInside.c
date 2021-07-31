#include "guiMain.h"
#include "guiInside.h"
#include "ch.h"
#include "hal.h"
#include "chprintf.h"


static struct guiInsideObject_t{
    lv_obj_t* tempBedroomLabel;
    lv_obj_t* tempRoomLabel;

    lv_obj_t* humidityBedroomLabel;
    lv_obj_t* humidityRoomLabel;

    lv_obj_t* presureBedroomLabel;
    lv_obj_t* presureRoomLabel;

    lv_obj_t* tempChart;
} guiInsideObject;

lv_chart_series_t * guiInsideChartTempSer;

static lv_point_t lineTopPoints1[] = { {0, HEIGHT_HEADER}, {LV_HOR_RES_MAX, HEIGHT_HEADER} };
static lv_point_t lineTopPoints2[] = { {0, HEIGHT_FORECAST + HEIGHT_HEADER}, {LV_HOR_RES_MAX, HEIGHT_FORECAST + HEIGHT_HEADER} };
static lv_point_t lineTopPoints3[] = { {0, HEIGHT_FORECAST + HEIGHT_HEADER + HEIGHT_SENSOR_HEADER}, {LV_HOR_RES_MAX, HEIGHT_FORECAST + HEIGHT_HEADER + HEIGHT_SENSOR_HEADER} };
static lv_point_t lineTopPoints4[] = { {LV_HOR_RES_MAX / 2 - 2 , HEIGHT_FORECAST + HEIGHT_HEADER}, {LV_HOR_RES_MAX / 2 - 2 , LV_VER_RES_MAX} };
static lv_point_t lineTopPoints5[] = { {LV_HOR_RES_MAX / 2 + 2 , HEIGHT_FORECAST + HEIGHT_HEADER}, {LV_HOR_RES_MAX / 2 + 2 , LV_VER_RES_MAX} };

/**
 *
 * @param parent
 * @param posY
 * @param height
 * @param name1
 * @param name2
 */
void guiInitInside(lv_obj_t *parent, uint16_t posY, uint16_t height, const char *name1, const char *name2){
	lv_obj_t * labelLeftBlock = lv_obj_create(lv_scr_act(), NULL);
	lv_obj_add_style(labelLeftBlock, LV_OBJ_PART_MAIN, &noBorder);
	lv_obj_set_pos(labelLeftBlock, LV_HOR_RES_MAX / 2, posY);
	lv_obj_set_size(labelLeftBlock, LV_HOR_RES_MAX / 2, height);

	lv_obj_t * labelLef1 = lv_label_create(labelLeftBlock, NULL);
	lv_obj_add_style(labelLef1, LV_OBJ_PART_MAIN, &styleFontText12);
	lv_label_set_text(labelLef1, name1);
	lv_obj_align(labelLef1, NULL, LV_ALIGN_IN_LEFT_MID, 30, 0);

	lv_obj_t * labelLef2 = lv_label_create(labelLeftBlock, NULL);
	lv_obj_add_style(labelLef2, LV_OBJ_PART_MAIN, &styleFontText12);
	lv_label_set_text(labelLef2, name2);
	lv_obj_align(labelLef2, NULL, LV_ALIGN_IN_RIGHT_MID, -80, 0);
	////////////////////////////////////////////////////////////////////////////////
	posY += 20;
	height = LV_VER_RES_MAX - posY;

	lv_obj_t * mainCon = lv_cont_create(parent, NULL);
	lv_obj_clean_style_list(mainCon, LV_LINE_PART_MAIN);
	lv_cont_set_layout(mainCon, LV_LAYOUT_PRETTY_TOP);
	lv_obj_set_size(mainCon, LV_HOR_RES_MAX / 2, height);
	lv_obj_set_pos(mainCon, LV_HOR_RES_MAX / 2, posY);

	//////////////////////////////////////////////////
	//TEMP
	lv_obj_t * tempBlock = lv_obj_create(mainCon, NULL);
	lv_obj_add_style(tempBlock, LV_OBJ_PART_MAIN, &noBorder);
	lv_obj_set_size(tempBlock, LV_HOR_RES_MAX / 2, 80);
	lv_obj_align(tempBlock, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);

	lv_obj_t * tempBedrooIcon = lv_img_create(tempBlock, NULL);
	lv_img_set_src(tempBedrooIcon, &temp);
	lv_obj_align(tempBedrooIcon, NULL, LV_ALIGN_IN_LEFT_MID, 20, 0);

	guiInsideObject.tempBedroomLabel = lv_label_create(tempBlock, NULL);
	lv_obj_add_style(guiInsideObject.tempBedroomLabel, LV_OBJ_PART_MAIN, &styleFont48);
	lv_obj_align(guiInsideObject.tempBedroomLabel, NULL, LV_ALIGN_IN_LEFT_MID, 50, 0);

	////////
	lv_obj_t * tempRooIcon = lv_img_create(tempBlock, NULL);
	lv_img_set_src(tempRooIcon, &temp);
	lv_obj_align(tempRooIcon, NULL, LV_ALIGN_IN_LEFT_MID, LV_HOR_RES_MAX / 4 + 20, 0);

	guiInsideObject.tempRoomLabel = lv_label_create(tempBlock, NULL);
	lv_obj_add_style(guiInsideObject.tempRoomLabel, LV_OBJ_PART_MAIN, &styleFont48);
	lv_obj_align(guiInsideObject.tempRoomLabel, NULL, LV_ALIGN_IN_LEFT_MID, LV_HOR_RES_MAX / 4 + 50, 0);
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
	// HUMIDITY BEDROOM
	lv_obj_t * sensorsLine1ACon = lv_cont_create(sensorsLine1Con, NULL);
	lv_cont_set_layout(sensorsLine1ACon, LV_LAYOUT_ROW_MID);
	lv_obj_add_style(sensorsLine1ACon, LV_OBJ_PART_MAIN, &noBorder);
	lv_cont_set_layout(sensorsLine1ACon, LV_LAYOUT_ROW_MID);
	lv_obj_set_size(sensorsLine1ACon, LV_HOR_RES_MAX / 4, 55);

	lv_obj_t * humidityBedroomIcon = lv_img_create(sensorsLine1ACon, NULL);
	lv_img_set_src(humidityBedroomIcon, &humidity36);
	lv_obj_align(humidityBedroomIcon, NULL, LV_ALIGN_IN_LEFT_MID, 0, 0);

	guiInsideObject.humidityBedroomLabel = lv_label_create(sensorsLine1ACon, NULL);
	lv_obj_add_style(guiInsideObject.humidityBedroomLabel, LV_OBJ_PART_MAIN, &styleFont30);

	//////////////////////////////////////////////////
	// HUMIDITY ROOM
	lv_obj_t * sensorsLine1BCon = lv_cont_create(sensorsLine1Con, NULL);
	lv_cont_set_layout(sensorsLine1BCon, LV_LAYOUT_ROW_MID);
	lv_obj_add_style(sensorsLine1BCon, LV_OBJ_PART_MAIN, &noBorder);
	lv_cont_set_layout(sensorsLine1BCon, LV_LAYOUT_ROW_MID);
	lv_obj_set_size(sensorsLine1BCon, LV_HOR_RES_MAX / 4, 55);
	lv_obj_align(sensorsLine1BCon, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

	lv_obj_t * humidityRoomIcon = lv_img_create(sensorsLine1BCon, NULL);
	lv_img_set_src(humidityRoomIcon, &humidity36);
	lv_obj_align(humidityRoomIcon, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

	guiInsideObject.humidityRoomLabel = lv_label_create(sensorsLine1BCon, NULL);
	lv_obj_add_style(guiInsideObject.humidityRoomLabel, LV_OBJ_PART_MAIN, &styleFont30);


	//////////////////////////////////////////////////
	//////////////////////////////////////////////////
	// SECOND ROW
	lv_obj_t * sensorsLine2Con = lv_obj_create(sensorsCon, NULL);
	lv_obj_clean_style_list(sensorsLine2Con, LV_LINE_PART_MAIN);
	lv_obj_set_size(sensorsLine2Con, LV_HOR_RES_MAX / 2, 110);
	lv_obj_align(sensorsLine2Con, NULL, LV_ALIGN_IN_TOP_LEFT, 0, 55);


	//////////////////////////////////////////////////
	// PRESSURE BEDROOM
	lv_obj_t * sensorsLine2BCon = lv_cont_create(sensorsLine2Con, NULL);
	lv_cont_set_layout(sensorsLine2BCon, LV_LAYOUT_ROW_MID);
	lv_obj_add_style(sensorsLine2BCon, LV_OBJ_PART_MAIN, &noBorder);
	lv_obj_set_size(sensorsLine2BCon, LV_HOR_RES_MAX / 4, 55);

	lv_obj_t * pressureBedroomIcon = lv_img_create(sensorsLine2BCon, NULL);
	lv_img_set_src(pressureBedroomIcon, &pressure36);
	lv_obj_align(pressureBedroomIcon, NULL, LV_ALIGN_IN_LEFT_MID, 0, 0);

	guiInsideObject.presureBedroomLabel = lv_label_create(sensorsLine2BCon, NULL);
	lv_obj_add_style(guiInsideObject.presureBedroomLabel, LV_OBJ_PART_MAIN, &styleFont30);
	lv_obj_align(guiInsideObject.presureBedroomLabel, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
	//////////////////////////////////////////////////

	//////////////////////////////////////////////////
	// PRESSURE ROOM
	lv_obj_t * sensorsLine2ACon = lv_cont_create(sensorsLine2Con, NULL);
	lv_cont_set_layout(sensorsLine2ACon, LV_LAYOUT_ROW_MID);
	lv_obj_add_style(sensorsLine2ACon, LV_OBJ_PART_MAIN, &noBorder);
	lv_obj_set_size(sensorsLine2ACon, LV_HOR_RES_MAX / 4, 55);
	lv_obj_align(sensorsLine2ACon, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

	lv_obj_t * pressureRoomIcon = lv_img_create(sensorsLine2ACon, NULL);
	lv_img_set_src(pressureRoomIcon, &pressure36);
	lv_obj_align(pressureRoomIcon, NULL, LV_ALIGN_IN_TOP_RIGHT, 0, 0);

	guiInsideObject.presureRoomLabel = lv_label_create(sensorsLine2ACon, NULL);
	lv_obj_add_style(guiInsideObject.presureRoomLabel, LV_OBJ_PART_MAIN, &styleFont30);
	lv_obj_align(guiInsideObject.presureRoomLabel, NULL, LV_ALIGN_IN_TOP_MID, 0, 0);
	//////////////////////////////////////////////////


	//////////////////////////////////////////////////
	//////////////////////////////////////////////////
	// CHART
	posY += 110 + 80;
	height = LV_VER_RES_MAX - posY;

	guiInsideObject.tempChart = lv_chart_create(mainCon, NULL);
	lv_obj_add_style(guiInsideObject.tempChart, LV_CHART_PART_BG, &styleChart);
	lv_obj_add_style(guiInsideObject.tempChart, LV_CHART_PART_SERIES_BG, &styleChartSeries);
	lv_obj_set_size(guiInsideObject.tempChart, LV_HOR_RES_MAX / 2, height);
	lv_obj_align(guiInsideObject.tempChart, NULL, LV_ALIGN_CENTER, 0, 0);
	lv_chart_set_type(guiInsideObject.tempChart, LV_CHART_TYPE_LINE );   /*Show lines and points too*/

	lv_chart_set_range(guiInsideObject.tempChart, 10, 35);
	lv_chart_set_point_count(guiInsideObject.tempChart, 24 * 6); // 24hours * 10 min
	lv_chart_set_div_line_count(guiInsideObject.tempChart, 4, 0);


	lv_chart_set_y_tick_texts(guiInsideObject.tempChart, "10\n15\n20\n25\n30\n35", 6, LV_CHART_AXIS_DRAW_LAST_TICK | LV_CHART_AXIS_INVERSE_LABELS_ORDER);
	lv_chart_set_y_tick_length(guiInsideObject.tempChart, 4, 0);
	lv_obj_set_style_local_text_color(guiInsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_BLACK);
	lv_obj_set_style_local_text_font(guiInsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, &lv_font_montserrat_12);
	lv_obj_set_style_local_pad_bottom(guiInsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 10);
	lv_obj_set_style_local_pad_left(guiInsideObject.tempChart, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 50);

    /*Add two data series*/
    guiInsideChartTempSer = lv_chart_add_series(guiInsideObject.tempChart, LV_COLOR_BLACK);
}

/**
 *
 * @param values
 */
void guiFillInsideAll(guiInsideValues_t* values){
    ///////////////////////////////////////////////////////////////////////////////
	char bufferTempBedroomLabel[10];
	chsnprintf(bufferTempBedroomLabel, sizeof(bufferTempBedroomLabel), "%.1f", (float)((float)values->tempBedroom / 100.0f) - 100);
	lv_label_set_text(guiInsideObject.tempBedroomLabel, bufferTempBedroomLabel);

	char bufferTempRoomLabel[10];
	chsnprintf(bufferTempRoomLabel, sizeof(bufferTempRoomLabel), "%.1f", (float)((float)values->tempRoom / 100.0f) - 100);
	lv_label_set_text(guiInsideObject.tempRoomLabel, bufferTempRoomLabel);


	char bufferHumidityBedroomLabel[10];
	chsnprintf(bufferHumidityBedroomLabel, sizeof(bufferHumidityBedroomLabel), "%d", values->humidityBedroom);
	lv_label_set_text(guiInsideObject.humidityBedroomLabel, bufferHumidityBedroomLabel);

	char bufferHumidityRoomLabel[10];
	chsnprintf(bufferHumidityRoomLabel, sizeof(bufferHumidityRoomLabel), "%d", values->humidityRoom);
	lv_label_set_text(guiInsideObject.humidityRoomLabel, bufferHumidityRoomLabel);

	char bufferPresureBedroomLabel[10];
	chsnprintf(bufferPresureBedroomLabel, sizeof(bufferPresureBedroomLabel), "%d", values->pressureBedroom);
	lv_label_set_text(guiInsideObject.presureBedroomLabel, bufferPresureBedroomLabel);

	char bufferPresureRoomLabel[10];
	chsnprintf(bufferPresureRoomLabel, sizeof(bufferPresureRoomLabel), "%d", values->pressureRoom);
	lv_label_set_text(guiInsideObject.presureRoomLabel, bufferPresureRoomLabel);

    for(uint8_t i = 0; i < (uint8_t)sizeof(values->chartSeries); i++){
        lv_chart_set_next(guiInsideObject.tempChart, guiInsideChartTempSer, (lv_coord_t)((values->chartSeries[i] / 2)  - 50));
    }
}
