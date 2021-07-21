#ifndef MAIN_H
#define MAIN_H

#include "hal.h"
#include "guiForecast.h"

#define NEWLINE_STR                     "\r\n"
#define NEWLINE_STR_SIMPLE              "\n"

//THREADS PRIORITY
#define THREAD_PRIORITY_GUI         NORMALPRIO
#define THREAD_PRIORITY_HC12        NORMALPRIO
#define THREAD_PRIORITY_ADCPOWER    NORMALPRIO + 10
#define THREAD_PRIORITY_BMP280      NORMALPRIO
#define THREAD_PRIORITY_REGISTER_HW NORMALPRIO
#define THREAD_PRIORITY_INTERVAL    NORMALPRIO + 50

typedef struct {
	uint8_t     dayIconIndex[FORECAST_DAYS]; // 7
	uint16_t    dayTemp[FORECAST_DAYS]; // 7 * 2
	uint8_t     dayNameStart; // 1
} __packed dataForecast_t;

typedef struct {
	uint32_t sunlight;
    uint32_t voltage;
    uint32_t temp;
    uint32_t humidity;
    uint32_t pressure;
    uint32_t wind;
    uint32_t uvIndex;
    uint32_t voltagePercent;
	bool rain;
} dataOutside_t;

typedef struct {
    uint32_t tempBedroom; // x/100 - 100
    uint32_t tempRoom; // x/100 - 100
    uint32_t humidityBedroom;
    uint32_t humidityRoom;
    uint32_t pressureBedroom;
    uint32_t pressureRoom;
} dataInside_t;


typedef struct {
	dataForecast_t forecast;
	dataOutside_t outside;
	dataInside_t inside;
} mainData_t;

extern mainData_t mainData;

#endif