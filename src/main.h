#ifndef MAIN_H
#define MAIN_H

#include "hal.h"
#include "guiForecast.h"

#define NEWLINE_STR                     "\r\n"
#define NEWLINE_STR_SIMPLE              "\n"

//THREADS PRIORITY
#define THREAD_PRIORITY_GUI         NORMALPRIO
#define THREAD_PRIORITY_HC12        NORMALPRIO
#define THREAD_PRIORITY_MSPPARSER   NORMALPRIO
#define THREAD_PRIORITY_BMP280      NORMALPRIO
#define THREAD_PRIORITY_REGISTER_HW NORMALPRIO

#define HC12_HW_ID_OFFSET 20
#define HC12_HW_ID 0
#define BMP280_HW_ID 1


typedef struct {
	uint8_t     dayIconIndex[FORECAST_DAYS];
	uint16_t    dayTemp[FORECAST_DAYS];
	uint8_t     dayNameStart;
} __packed dataForecast_t;

typedef struct {
	uint32_t sunlight;
	uint16_t voltage;
	uint16_t temp;
	uint16_t humidity;
	uint16_t pressure;
	uint16_t wind;
	uint8_t uvIndex;
	uint8_t  voltagePercent;
	bool rain;
} dataOutside_t;

typedef struct {
	uint16_t tempBedroom; // x/100 - 100
	uint16_t tempRoom; // x/100 - 100
	uint16_t humidityBedroom;
	uint16_t humidityRoom;
	uint16_t pressureBedroom;
	uint16_t pressureRoom;
} dataInside_t;


typedef struct {
	dataForecast_t forecast;
	dataOutside_t outside;
	dataInside_t inside;
} mainData_t;

extern mainData_t mainData;

void checkI2CCondition(I2CDriver *driver);

#endif