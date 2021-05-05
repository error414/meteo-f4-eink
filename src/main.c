#include <stdio.h>
#include "ch.h"
#include "hal.h"
#include "main.h"
#include "hw.h"
#include "pools.h"
#include "guiThread.h"
#include "hc12Thread.h"
#include "mspRxThread.h"
#include "bmp280Thread.h"
#include "shell.h"
#include "shellCmd.h"
#include "hwListThread.h"

mainData_t mainData;

/*
 * Application entry point.
 */
int main(void) {
	halInit();
	chSysInit();
	shellInit();
	shared_pools_init();

	///////////////////////////////////////////////////////////////
	//CONFIGURATION
	///////////////////////////////////////////////////////////////
	const Bmp280__threadConfig_t bmp280Cfg = {
			.hwId = BMP280_HW_ID,
			.driver = &I2CD1,
	};

	const EPD_7IN5_HD_cfg_t _epd7In5HdCfg = {
			.spiDriver = &SPID1,
			.busyLine   = LINE_GPIOA_8,
			.csLine     = LINE_GPIOB_6,
			.dcLine     = LINE_GPIOC_7,
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

	const ShellConfig shellCfgUart = {
			(BaseSequentialStream *)&SD2,
			shellCommands
	};

	///////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////
	//INIT HW
	///////////////////////////////////////////////////////////////
	uart6_init();
	uart2_init();
	spi1_init();
	i2c1_init();
	///////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////
	//INIT THREADS
	///////////////////////////////////////////////////////////////
	HwList__thread_init();
	Gui__thread_init(&guiCfg);
	MSPRX__thread_init();
	Bmp280__thread_init(&bmp280Cfg);
	HC12__thread_init(&hc12ThreadCfg, &hc12cfg);
	///////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////
	//START THREADS
	///////////////////////////////////////////////////////////////
	HwList__thread_start();         // must be second
	MSPRX__thread_start();
	Bmp280__thread_start();
	Gui__thread_start();
	HC12__thread_start();
	///////////////////////////////////////////////////////////////

	Shell__thread_init(&shellCfgUart);
	while (true) {
		chThdSleepMilliseconds(10000);
		chSysLock();
		chEvtBroadcastI(&shell_terminated);
		chSysUnlock();
	}
}

void checkI2CCondition(I2CDriver *driver){
	if(driver->state == I2C_LOCKED){
		i2cAcquireBus(driver);

		i2cStop(driver);
		if(driver == &I2CD1){
			i2c1_init();
		}

		i2cReleaseBus(driver);
	}
}