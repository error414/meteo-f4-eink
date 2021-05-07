#include "ch.h"
#include "hal.h"
#include "main.h"
#include "guiThread.h"
#include "pools.h"
#include "hc12Thread.h"
#include "msp.h"
#include "guiMain.h"
#include "guiHeader.h"
#include "guiForecast.h"
#include "guiOutside.h"
#include "guiInside.h"

#define LVGL_BUFFER_SIZE LV_HOR_RES_MAX * 10

LV_IMG_DECLARE(fc_snow);

static const gui__threadConfig_t *guiThreadCfg;
static uint8_t flush_buff[LVGL_BUFFER_SIZE / 8];


static guiMainHeaderValues_t headerValues;
static guiForecastValues_t forecastValues;
static guiOutsideValues_t outsideValues;
static guiInsideValues_t insideValues;

//////////////////////////////////
bool blackTransmission = true;
lv_disp_drv_t disp_drv;
static lv_disp_buf_t disp_buf_lvgl;
static lv_color_t color_buff_1[LVGL_BUFFER_SIZE];
static void Gui__LVGLdispFlushCb(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);
static void Gui__LVGLmonitorCb(struct _disp_drv_t * disp_drv, uint32_t time, uint32_t px);
///////////////////////////////

static THD_WORKING_AREA(GUIVA, 6500);
static THD_FUNCTION(guiThread, arg) {
	(void) arg;
	chRegSetThreadName("GUI");

	chThdSleepMilliseconds(1000); // wait 10s to boot up

	lv_init();
	lv_disp_buf_init(&disp_buf_lvgl, color_buff_1, NULL, LVGL_BUFFER_SIZE);

	//E-INK
	lv_disp_drv_init(&disp_drv);
	disp_drv.hor_res = SCREEN_WIDTH;
	disp_drv.ver_res = SCREEN_HEIGHT;
	disp_drv.flush_cb = Gui__LVGLdispFlushCb;
	disp_drv.monitor_cb = Gui__LVGLmonitorCb;
	disp_drv.buffer = &disp_buf_lvgl;
	lv_disp_drv_register(&disp_drv);
	/////

	/////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////
	guiInit();

	guiInitMainHeader("--- Stary Liskovec ---");
	guiFillMainHeader(&headerValues);

	guiInitForecast(lv_scr_act(), HEIGHT_HEADER, HEIGHT_FORECAST);
	guiFillForecast(&forecastValues);

	guiInitOutside(lv_scr_act(), HEIGHT_FORECAST + HEIGHT_HEADER, HEIGHT_HEADER, "--- Balkon ---");
	guiInitInside(lv_scr_act(), HEIGHT_FORECAST + HEIGHT_HEADER, HEIGHT_HEADER, "--- Pokoj ---", "--- Loznic ---");
	guiFillInsideAll(&insideValues);

	guiCreateBackground();
	/////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////

	while (true) {
		//collect data for display
		poolStreamObject_t* messagePoolObject = (poolStreamObject_t *) chPoolAlloc(&streamMemPool);
		if (messagePoolObject) {
			MSP__createMspFrame(messagePoolObject, 179, 0, NULL);
			chMBPostTimeout(&streamTxMail, (msg_t) messagePoolObject, TIME_IMMEDIATE);
		}

		chThdSleepMilliseconds(5000);

		chSysLock();
		memcpy(&outsideValues, &mainData.outside, sizeof(mainData.outside));
		memcpy(&forecastValues, &mainData.forecast, sizeof(mainData.forecast));
		memcpy(&insideValues, &mainData.inside, sizeof(mainData.inside));
		chSysUnlock();

		guiFillOutsideAll(&outsideValues);
		guiFillInsideAll(&insideValues);
		guiFillForecast(&forecastValues);
		lv_tick_inc(1000);
		lv_task_handler();
		chThdSleepMilliseconds(1000);
	}
}

/**
 *
 */
void Gui__thread_init(const gui__threadConfig_t *cfg) {
	guiThreadCfg = cfg;
}

/**
 *
 */
void Gui__thread_start(void) {
	chThdCreateStatic(GUIVA, sizeof(GUIVA), THREAD_PRIORITY_GUI, guiThread,NULL);
}

/**
 *
 */

static void Gui__LVGLdispFlushCb(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p) {
	uint32_t index = 0;
	uint32_t byteIterator = 0;

	if(area->x1 == 0 && area->y1 == 0){
		EPD_7IN5_HD_Init(guiThreadCfg->epd7In5HdCfg);
		EPD_7IN5_HD_StartWriteToScreen();
	}

	//better use https://maldus512.medium.com/porting-littlevgl-for-a-monochrome-display-6c7be58851ce
	for (int y = area->y1; y <= area->y2; y++) {
		for (int x = area->x1; x <= area->x2; x++) {
			flush_buff[index] = flush_buff[index] << 1;
			flush_buff[index] |= (uint8_t)(color_p->full) & 0x01;
			color_p++;
			byteIterator++;
			if(byteIterator % 8 == 0){
				index++;;
			}
		}
	}

	EPD_7IN5_HD_WriteToScreen(flush_buff, index);

	if(area->x2 == LV_HOR_RES_MAX - 1 && area->y2 == LV_VER_RES_MAX - 1){
		EPD_7IN5_HD_EndWriteToScreen();
		EPD_7IN5_HD_Sleep();
		blackTransmission = true;
	}

	lv_disp_flush_ready(disp);
}

/**
 *
 * @param disp_drv
 * @param time
 * @param px
 */
static void Gui__LVGLmonitorCb(struct _disp_drv_t * disp_drv, uint32_t time, uint32_t px){
	if(blackTransmission == false) {
		lv_obj_invalidate(lv_scr_act());
		blackTransmission = true;
	}
}
