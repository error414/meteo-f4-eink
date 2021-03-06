#ifndef BMP280_THREAD_H
#define BMP280_THREAD_H

#include "hal.h"

#define BM280_NAME "BMP280"

typedef struct {
	uint32_t hwId;
	I2CDriver *driver;
	bool (*checkI2cFunc)(I2CDriver *driver);
} Bmp280__threadConfig_t;

void Bmp280__thread_init(const Bmp280__threadConfig_t *cfg);
void Bmp280__thread_start(void);

#endif