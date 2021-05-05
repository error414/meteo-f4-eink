#ifndef EPD_7IN5_HD
#define EPD_7IN5_HD

#include "hal.h"

#define SCREEN_WIDTH 880
#define SCREEN_HEIGHT 528

typedef struct {
	SPIDriver *spiDriver;
	uint32_t csLine;
	uint32_t dcLine;
	uint32_t rstLine;
	uint32_t busyLine;
} EPD_7IN5_HD_cfg_t;


static void EPD_7IN5_HD_Reset(void);
static void EPD_7IN5_HD_WaitUntilIdle(void);
static void EPD_7IN5_HD_SendCommand(uint8_t reg);
static void EPD_7IN5_HD_SendData(const uint8_t *data, uint32_t size);
static void EPD_7IN5_HD_SendDataByte(uint8_t data);

void EPD_7IN5_HD_Init(const EPD_7IN5_HD_cfg_t *cfg);
void EPD_7IN5_HD_StartWriteToScreen(void);
void EPD_7IN5_HD_WriteToScreen(const uint8_t *data, uint32_t size);
void EPD_7IN5_HD_EndWriteToScreen(void);
void EPD_7IN5_HD_Sleep(void);
void EPD_7IN5_HD_TurnOn(void);

#endif
