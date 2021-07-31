#include <stdio.h>
#include "ch.h"
#include "hal.h"
#include "appCfg.h"
#include "usbcfg.h"
#include "main.h"
#include "hw.h"
#include "pools.h"
#include "shell.h"
#include "shellCmd.h"
#include "guiThread.h"
#include "hc12Thread.h"
#include "bmp280Thread.h"
#include "hwListThread.h"
#include "intervalThread.h"
#include "powerThread.h"

mainData_t mainData;
static bool checkI2CCondition(I2CDriver *driver);

/*
 * Application entry point.
 */
int main(void) {
 	halInit();
	chSysInit();

#ifdef USE_SHELL
	shellInit();
#endif
	shared_pools_init();

	///////////////////////////////////////////////////////////////
	//CONFIGURATION
	///////////////////////////////////////////////////////////////
#ifdef USE_BMP280
	const Bmp280__threadConfig_t bmp280Cfg = {
			.hwId = BMP280_HW_ID,
			.driver = &I2CD1,
			.checkI2cFunc = &checkI2CCondition,
	};
#endif


	const EPD_7IN5_HD_cfg_t _epd7In5HdCfg = {
			.spiDriver = &SPID3,
			.busyLine   = LINE_GPIOA_6,
			.csLine     = LINE_GPIOB_6,
			.dcLine     = LINE_GPIOC_5,
			.rstLine    = LINE_GPIOA_9
	};

	const gui__threadConfig_t guiCfg = {
		.epd7In5HdCfg = &_epd7In5HdCfg
	};

	const hc12ThreadCfg_t hc12ThreadCfg = {
			.hwId = HC12_HW_ID,
			.lineSet = LINE_GPIOC_8,
			.sc_channel = (BaseChannel*)&SD6
	};

	static hc12cfg_t hc12cfg = {
			.baud       = HC12_AT_BAUD9600,
			.channel    = HC12_AT_CHANNEL3,
			.modeFU     = HC12_AT_MODE_FU3,
			.power      = HC12_AT_POWER_6_3mw
	};

#ifdef USE_SHELL
	const ShellConfig shellCfgUart = {
			(BaseSequentialStream *)&SDU1,
			shellCommands
	};
#endif

    power__threadConfig_t powerCfg = {
            .hwId               = POWER_HW_ID,
            .i2cDriver          = &I2CD3,
            .checkI2cFunc       = &checkI2CCondition,
            .chrgInfoLine       = LINE_GPIOC_4,
            .stdbyInfoLine      = LINE_GPIOC_3,
    };

	///////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////
	//INIT HW
	///////////////////////////////////////////////////////////////
	uart6_init();
    spi3_init();
#ifdef USE_BMP280
    i2c1_init();
#endif
	i2c3_init();
    power_GPIO_init();
#ifdef USE_SHELL
    uart_cdc_init();
#endif
	///////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////
	//INIT THREADS
	///////////////////////////////////////////////////////////////
#ifdef ALLOW_GO_TO_SLEEP
	Interval__thread_init();
#endif
	HwList__thread_init();
    Power__thread_init(&powerCfg);
	Gui__thread_init(&guiCfg);
#ifdef USE_BMP280
	Bmp280__thread_init(&bmp280Cfg);
#endif
	HC12__thread_init(&hc12ThreadCfg, &hc12cfg);
	///////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////
	//START THREADS
	///////////////////////////////////////////////////////////////
	HwList__thread_start();         // must be second
    Power__thread_start();
#ifdef USE_BMP280
	Bmp280__thread_start();
#endif
	Gui__thread_start();
	HC12__thread_start();
#ifdef ALLOW_GO_TO_SLEEP
	Interval__thread_start();
#endif
	///////////////////////////////////////////////////////////////

#ifdef USE_SHELL
	Shell__thread_init(&shellCfgUart);
	///////////////////////////////////////////////////////////////

	while (true) {
	    chThdSleepMilliseconds(1000);
	}
#else
	while (true) {
	    chThdSleepMilliseconds(1000);
	}
#endif
}

static bool checkI2CCondition(I2CDriver *driver){
	if(driver->state == I2C_LOCKED){
		i2cAcquireBus(driver);

		i2cStop(driver);
#ifdef USE_BMP280
		if(driver == &I2CD1){
			i2c1_init();
		}
#endif

        if(driver == &I2CD3){
            i2c3_init();
        }

		i2cReleaseBus(driver);
	}
}