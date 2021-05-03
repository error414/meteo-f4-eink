#include "ch.h"
#include "hal.h"
#include "hw.h"


////////////////////////////////////////////////////////////////////////////////////////////
// UART 2
////////////////////////////////////////////////////////////////////////////////////////////
static const SerialConfig sd2cfg = {
		9600,
		0,
		USART_CR2_STOP1_BITS | USART_CR2_LINEN,
		0
};

void uart_init(void){
	sdStart(&SD2, &sd2cfg);
	palSetPadMode(GPIOA, 2, PAL_MODE_ALTERNATE(7));
	palSetPadMode(GPIOA, 3, PAL_MODE_ALTERNATE(7));
}
////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////////
// SPI 2 / E-INK DISPLAY
////////////////////////////////////////////////////////////////////////////////////////////
static const SPIConfig hs_spicfg1 = {
		FALSE,
		NULL,
		GPIOB,
		6,
		SPI_CR1_BR_2 | SPI_CR1_BR_1 | SPI_CR1_BR_0,
		0
};

/**
 *
 */
void spi1_init(void){
	spiStart(&SPID1, &hs_spicfg1);

	/* busy */
	palSetLineMode(LINE_GPIOA_8, PAL_STM32_MODE_INPUT);

	/* reset */
	palSetLineMode(LINE_GPIOA_9, PAL_STM32_MODE_OUTPUT);

	/* DS */
	palSetLineMode(LINE_GPIOC_7, PAL_STM32_MODE_OUTPUT);

	/* CS */
	palSetLineMode(LINE_GPIOB_6, PAL_STM32_MODE_OUTPUT);

	/* SCK */
	palSetLineMode(LINE_GPIOA_5, PAL_MODE_ALTERNATE(5) | PAL_STM32_OSPEED_HIGHEST);

	/* MISO */
	palSetLineMode(LINE_GPIOA_6, PAL_MODE_ALTERNATE(5) | PAL_STM32_OSPEED_HIGHEST);

	/* MOSI */
	palSetLineMode(LINE_GPIOA_7, PAL_MODE_ALTERNATE(5) | PAL_STM32_OSPEED_HIGHEST);
}
////////////////////////////////////////////////////////////////////////////////////////////

