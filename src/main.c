#include <stdio.h>
#include "ch.h"
#include "hal.h"
#include "pools.h"
#include "guiThread.h"
#include "hc12Thread.h"
#include "mspRxThread.h"
#include "hw.h"

/*
 * Application entry point.
 */
int main(void) {
	halInit();
	chSysInit();

	uart_init();
	spi1_init();

	const EPD_7IN5_HD_cfg_t _epd7In5HdCfg = {
			.spiDriver = &SPID1,
			.busyLine = LINE_GPIOA_8,
			.csLine = LINE_GPIOB_6,
			.dcLine = LINE_GPIOC_7,
			.rstLine = LINE_GPIOA_9
	};

	const gui__threadConfig_t guiCfg = {
		.epd7In5HdCfg = &_epd7In5HdCfg
	};

	const hc12ThreadCfg_t hc12ThreadCfg = {
			.hwId = 0,
			.lineSet = LINE_GPIOC_11,
			.sc_channel = (BaseChannel*)&SD2
	};

	static hc12cfg_t hc12cfg = {
			.baud       = HC12_AT_BAUD9600,
			.channel    = HC12_AT_CHANNEL1,
			.modeFU     = HC12_AT_MODE_FU1,
			.power      = HC12_AT_POWER_6_3mw
	};

	shared_pools_init();

	///////////////////////////////////////////////////////////////
	//INIT THREADS
	///////////////////////////////////////////////////////////////
	Gui__thread_init(&guiCfg);
	MSPRX__thread_init();
	HC12__thread_init(&hc12ThreadCfg, &hc12cfg);
	///////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////
	//START THREADS
	///////////////////////////////////////////////////////////////
	MSPRX__thread_start();
	Gui__thread_start();
	HC12__thread_start();
	///////////////////////////////////////////////////////////////

	while(true){
		chThdSleepMilliseconds(1000);
	}
}