#include "hal.h"
#include "EPD_7in5_HD.h"

const EPD_7IN5_HD_cfg_t *epd7In5HdCfg;
static uint8_t txBuffer;

/**
 *
 * @param cfg
 */
void EPD_7IN5_HD_Init(const EPD_7IN5_HD_cfg_t *cfg){

	epd7In5HdCfg = cfg;

	EPD_7IN5_HD_Reset();

	EPD_7IN5_HD_WaitUntilIdle();
	EPD_7IN5_HD_SendCommand(0x12);  //SWRESET
	EPD_7IN5_HD_WaitUntilIdle();

	EPD_7IN5_HD_SendCommand(0x46);  // Auto Write Red RAM
	EPD_7IN5_HD_SendDataByte(0xf7);
	EPD_7IN5_HD_WaitUntilIdle();
	EPD_7IN5_HD_SendCommand(0x47);  // Auto Write  B/W RAM
	EPD_7IN5_HD_SendDataByte(0xf7);
	EPD_7IN5_HD_WaitUntilIdle();


	EPD_7IN5_HD_SendCommand(0x0C);  // Soft start setting
	EPD_7IN5_HD_SendDataByte(0xAE);
	EPD_7IN5_HD_SendDataByte(0xC7);
	EPD_7IN5_HD_SendDataByte(0xC3);
	EPD_7IN5_HD_SendDataByte(0xC0);
	EPD_7IN5_HD_SendDataByte(0x40);


	EPD_7IN5_HD_SendCommand(0x01);  // Set MUX as 527
	EPD_7IN5_HD_SendDataByte(0xAF);
	EPD_7IN5_HD_SendDataByte(0x02);
	EPD_7IN5_HD_SendDataByte(0x01);//0x01


	EPD_7IN5_HD_SendCommand(0x11);  // Data entry mode
	EPD_7IN5_HD_SendDataByte(0x01);

	EPD_7IN5_HD_SendCommand(0x44);
	EPD_7IN5_HD_SendDataByte(0x00); // RAM x address start at 0
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendDataByte(0x6F);
	EPD_7IN5_HD_SendDataByte(0x03);
	EPD_7IN5_HD_SendCommand(0x45);
	EPD_7IN5_HD_SendDataByte(0xAF);
	EPD_7IN5_HD_SendDataByte(0x02);
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendDataByte(0x00);


	EPD_7IN5_HD_SendCommand(0x3C); // VBD
	EPD_7IN5_HD_SendDataByte(0x05); // LUT1, for white

	EPD_7IN5_HD_SendCommand(0x18);
	EPD_7IN5_HD_SendDataByte(0X80);


	EPD_7IN5_HD_SendCommand(0x22);
	EPD_7IN5_HD_SendDataByte(0XB1); //Load Temperature and waveform setting.
	EPD_7IN5_HD_SendCommand(0x20);
	EPD_7IN5_HD_WaitUntilIdle();

	EPD_7IN5_HD_SendCommand(0x4E); // set RAM x address count to 0;
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendCommand(0x4F);
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendDataByte(0x00);
}


/**
 *
 */
static void EPD_7IN5_HD_Reset(void){
    palSetLine(epd7In5HdCfg->rstLine);
	chThdSleepMilliseconds(200);
	palClearLine(epd7In5HdCfg->rstLine);
	chThdSleepMilliseconds(2);
	palSetLine(epd7In5HdCfg->rstLine);
	chThdSleepMilliseconds(200);
}

/**
 *
 * @param reg
 */
static void EPD_7IN5_HD_SendCommand(uint8_t reg){
	spiAcquireBus(epd7In5HdCfg->spiDriver);
	palClearLine(epd7In5HdCfg->dcLine);
	palClearLine(epd7In5HdCfg->csLine);

	txBuffer = reg;
	spiSend(epd7In5HdCfg->spiDriver, 1, &txBuffer);
	palSetLine(epd7In5HdCfg->csLine);
	spiReleaseBus(epd7In5HdCfg->spiDriver);
}

/**
 *
 * @param data
 * @param size
 */
static void EPD_7IN5_HD_SendData(const uint8_t *data, uint32_t size){
	spiAcquireBus(epd7In5HdCfg->spiDriver);
	palSetLine(epd7In5HdCfg->dcLine);
	palClearLine(epd7In5HdCfg->csLine);
	spiSend(epd7In5HdCfg->spiDriver, size, &data);
	palSetLine(epd7In5HdCfg->csLine);
	spiReleaseBus(epd7In5HdCfg->spiDriver);
}

/**
 *
 * @param data
 */
static void EPD_7IN5_HD_SendDataByte(uint8_t data){
	spiAcquireBus(epd7In5HdCfg->spiDriver);
	palSetLine(epd7In5HdCfg->dcLine);
	palClearLine(epd7In5HdCfg->csLine);

	txBuffer = data;
	spiSend(epd7In5HdCfg->spiDriver, 1, &txBuffer);
	palSetLine(epd7In5HdCfg->csLine);
	spiReleaseBus(epd7In5HdCfg->spiDriver);
}

/**
 *
 */
static void EPD_7IN5_HD_WaitUntilIdle(void){
	do{
	    chThdSleepMilliseconds(10);
    }while(palReadLine(epd7In5HdCfg->busyLine) == 1);
	chThdSleepMilliseconds(200);
}

/**
 *
 * @param data
 * @param size
 */
void EPD_7IN5_HD_WriteToScreen(const uint8_t *data, uint32_t size){

	for (uint32_t i = 0; i < size; i++){
		EPD_7IN5_HD_SendDataByte(data[i]);
	}

}

/**
 *
 */
void EPD_7IN5_HD_StartWriteToScreen(void){
	EPD_7IN5_HD_SendCommand(0x4E); // Set RAM X address counter
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendDataByte(0x00);

	EPD_7IN5_HD_SendCommand(0x4F); // Set RAM Y address counter
	EPD_7IN5_HD_SendDataByte(0x00);
	EPD_7IN5_HD_SendDataByte(0x00);

	EPD_7IN5_HD_SendCommand(0x24); // Write RAM (BW)

}

/**
 *
 */
void EPD_7IN5_HD_EndWriteToScreen(void){
	EPD_7IN5_HD_SendCommand(0x22); // Display Update Control 2
	EPD_7IN5_HD_SendDataByte(0xF7); //Load LUT from MCU(0x32)
	EPD_7IN5_HD_SendCommand(0x20); // Master Activation
	chThdSleepMilliseconds(10);
	EPD_7IN5_HD_WaitUntilIdle();
}

/**
 *
 */
void EPD_7IN5_HD_Sleep(void)
{
	EPD_7IN5_HD_SendCommand(0x10);
	EPD_7IN5_HD_SendDataByte(0x01);
}

/**
 *
 */
void EPD_7IN5_HD_TurnOn(void){
	EPD_7IN5_HD_SendCommand(0x22);
	EPD_7IN5_HD_SendDataByte(0xC7);
	EPD_7IN5_HD_SendCommand(0x20);
	EPD_7IN5_HD_WaitUntilIdle();
}