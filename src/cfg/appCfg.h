#ifndef APP_CFG_H
#define APP_CFG_H

#include "hal.h"

#define HC12_HW_ID_OFFSET 10
//#define ALLOW_GO_TO_SLEEP

////////////////////////////////////////
///// TIMMING /////////////////////////
////////////////////////////////////////
//in second
#ifdef ALLOW_GO_TO_SLEEP
    #define APP_TIMING_SLEEP_INTERVAL   15
    #define APP_TIMING_MAX_WOKE_TIMEOUT  40
#endif

#define APP_TIMING_WAIT_FOR_DATA_TIMEOUT  5
////////////////////////////////////////

////////////////////////////////////////
///// SENSORS /////////////////////////
////////////////////////////////////////

////////////////////////////////////////
///// BMP280 I2C1 //////////////////////
#define USE_BMP280

#ifdef USE_BMP280
	#define BMP280_HW_ID 1
#endif
////////////////////////////////////////


////////////////////////////////////////
///// HC12                 /////////////
#define HC12_HW_ID 0
////////////////////////////////////////

////////////////////////////////////////
///// POWER               /////////////
#define POWER_HW_ID 4
////////////////////////////////////////

////////////////////////////////////////
///// SHELL               /////////////
//#define USE_SHELL
////////////////////////////////////////
#endif