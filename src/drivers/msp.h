#ifndef MSP_H
#define MSP_H

#define MSP_MAX_DATA_SIZE 255

#include "ch.h"
#include "pools.h"

typedef struct {
	uint8_t size;
	uint8_t command;
	char payload[MSP_MAX_DATA_SIZE];
} msp_frame_t;

void MSP__createMspFrame(poolStreamObject_t *streamObject, uint8_t cmd, uint32_t argc, const uint32_t *argv);
bool MSP__parseMspFrameLoop(char c);
void MSP__getFrameI(msp_frame_t *frame);

#endif