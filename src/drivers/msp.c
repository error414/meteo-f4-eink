#include <string.h>
#include "msp.h"
#include "main.h"
#include "appCfg.h"

struct MSP_status_t{
	systime_t lastRunTime;
	msp_frame_t msp_frame;
	uint8_t indexMSP;
	uint8_t indexPayloadMSP;
	uint8_t crcMSP;
} MSP_status;

/**
 *
 * @return
 */
void MSP__createMspFrame(poolStreamObject_t *streamObject, uint8_t cmd, uint32_t argc, const uint32_t *argv){
	memcpy(streamObject->message, "$M<", 3);
	uint8_t *p;

	streamObject->size =  6 + (argc * 4);
	if(argc > 0){
		cmd = HC12_HW_ID_OFFSET + cmd;
	}else{
		cmd = cmd;
	}

	uint8_t crc = cmd ^ (argc * 4);

	p = (uint8_t*)(streamObject->message);              p += 3;
	*p = (uint8_t)(argc * 4);                           p++;
	*p = (uint8_t)cmd;                                  p++;
	for(uint32_t i = 0; i < argc; i++){
		crc ^= *p = (uint8_t)((*argv) >> 24);           p++;
		crc ^= *p = (uint8_t)((*argv) >> 16);           p++;
		crc ^= *p = (uint8_t)((*argv) >> 8);            p++;
		crc ^= *p = (uint8_t)(*argv);                   p++;
		argv++;
	}

	*p = crc;
}

/**
 *
 * @param c
 */
bool MSP__parseMspFrameLoop(const char c){

    if(MSP_status.indexMSP > 0 && MSP_status.lastRunTime > 0 && chVTGetSystemTimeX() - MSP_status.lastRunTime > 25000){
		MSP_status.indexMSP = 0;
		MSP_status.indexPayloadMSP = 0;
		MSP_status.lastRunTime = chVTGetSystemTimeX();
		return false;
	}

	if (MSP_status.indexMSP == 0 && c == '$') {
		MSP_status.indexMSP++;
	} else if (MSP_status.indexMSP == 1 && c == 'M') {
		MSP_status.indexMSP++;
	} else if (MSP_status.indexMSP == 2 && c == '>') {
		MSP_status.indexMSP++;
	} else if (MSP_status.indexMSP == 3 && c < MSP_MAX_DATA_SIZE) {  //size
		MSP_status.indexMSP++;
		MSP_status.msp_frame.size = c;
	} else if (MSP_status.indexMSP == 4) {  //command
		MSP_status.indexMSP++;
		MSP_status.msp_frame.command = c;

	} else if (MSP_status.indexMSP == 5) {  // payload
		if (MSP_status.indexPayloadMSP < MSP_status.msp_frame.size) {
			MSP_status.msp_frame.payload[MSP_status.indexPayloadMSP++] = c;
		} else {
			MSP_status.crcMSP = MSP_status.msp_frame.size ^ MSP_status.msp_frame.command;

			for (uint8_t i = 0; i < MSP_status.msp_frame.size; i++) {
				MSP_status.crcMSP ^= MSP_status.msp_frame.payload[i];
			}

			MSP_status.crcMSP ^= c;
			MSP_status.indexMSP = 0;
			MSP_status.indexPayloadMSP = 0;

			if (MSP_status.crcMSP == 0) {
				return true;
			}
		}

	} else {
		MSP_status.indexMSP = 0;
		MSP_status.indexPayloadMSP = 0;
	}

	MSP_status.lastRunTime = chVTGetSystemTimeX();
	return false;
}

/**
 *
 * @param frame
 */
void MSP__getFrameI(msp_frame_t *frame){
	memcpy(frame, &MSP_status.msp_frame, sizeof(MSP_status.msp_frame));
}

