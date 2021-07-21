#include "ch.h"
#include "hal.h"
#include "hw.h"
#include "usbcfg.h"


////////////////////////////////////////////////////////////////////////////////////////////
// I2C 1 / BME280
////////////////////////////////////////////////////////////////////////////////////////////
static const I2CConfig i2cfg1 = {
		OPMODE_I2C,
		400000,
		FAST_DUTY_CYCLE_2,
};

void i2c1_init(void){
	palSetLineMode(LINE_GPIOB_8,PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_MODE_INPUT_PULLUP);
	palSetLineMode(LINE_GPIOB_9, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN  | PAL_MODE_INPUT_PULLUP);

    palSetLineMode(LINE_GPIOA_7,PAL_STM32_MODE_OUTPUT);
    palSetLine(LINE_GPIOA_7);
	i2cStart(&I2CD1, &i2cfg1);
}
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
// I2C 3 / POWER
////////////////////////////////////////////////////////////////////////////////////////////
static const I2CConfig i2cfg3 = {
        OPMODE_I2C,
        400000,
        FAST_DUTY_CYCLE_2,
};

void i2c3_init(void){
    palSetLineMode(LINE_GPIOA_8,PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_MODE_INPUT_PULLUP);
    palSetLineMode(LINE_GPIOC_9, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN  | PAL_MODE_INPUT_PULLUP);
    i2cStart(&I2CD3, &i2cfg3);
}
////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
// UART 6 HC12
////////////////////////////////////////////////////////////////////////////////////////////
static const SerialConfig sd6cfg = {
		9600,
		0,
		USART_CR2_STOP1_BITS | USART_CR2_LINEN,
		0
};

void uart6_init(void){
	sdStart(&SD6, &sd6cfg);
	palSetLineMode(LINE_GPIOC_6, PAL_MODE_ALTERNATE(8));
	palSetLineMode(LINE_GPIOC_7, PAL_MODE_ALTERNATE(8));
}

////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
// SOLAR + BAT
////////////////////////////////////////////////////////////////////////////////////////////
void power_GPIO_init(void){
    palSetLineMode(LINE_GPIOC_4, PAL_MODE_INPUT_PULLUP); //CHRG
    palSetLineMode(LINE_GPIOC_3, PAL_MODE_INPUT_PULLUP); //STDBY
}

////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////
// SPI 1 / E-INK DISPLAY
////////////////////////////////////////////////////////////////////////////////////////////
static const SPIConfig hs_spicfg3 = {
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
void spi3_init(void){
	spiStart(&SPID3, &hs_spicfg3);

	// busy
	palSetLineMode(LINE_GPIOA_6, PAL_STM32_MODE_INPUT | PAL_MODE_INPUT_PULLDOWN);

	// reset
	palSetLineMode(LINE_GPIOA_9, PAL_STM32_MODE_OUTPUT);

	// DS
	palSetLineMode(LINE_GPIOC_5, PAL_STM32_MODE_OUTPUT);

	// CS
	palSetLineMode(LINE_GPIOB_6, PAL_STM32_MODE_OUTPUT);

	// SCK
	palSetLineMode(LINE_GPIOC_10, PAL_MODE_ALTERNATE(6) | PAL_STM32_OSPEED_HIGHEST);

	// MISO
	palSetLineMode(LINE_GPIOC_11, PAL_MODE_ALTERNATE(6) | PAL_STM32_OSPEED_HIGHEST);

	// MOSI
	palSetLineMode(LINE_GPIOC_12, PAL_MODE_ALTERNATE(6) | PAL_STM32_OSPEED_HIGHEST);
}

/**
 *
 */
void spi1_init(void){
    spiStart(&SPID1, &hs_spicfg3);

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

////////////////////////////////////////////////////////////////////////////////////////////
// USB1 CDC
////////////////////////////////////////////////////////////////////////////////////////////
void uart_cdc_init(void){
    sduObjectInit(&SDU1);
    sduStart(&SDU1, &serusbcfg);

    usbDisconnectBus(serusbcfg.usbp);
    chThdSleepMilliseconds(1500);
    usbStart(serusbcfg.usbp, &usbcfg);
    usbConnectBus(serusbcfg.usbp);
}

////////////////////////////////////////////////////////////////////////////////////////////

