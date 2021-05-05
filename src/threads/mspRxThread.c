#include "ch.h"
#include "main.h"
#include "msp.h"
#include "mspRxThread.h"

msg_t streamRxDataLetter[STREAM_POOL_SIZE];
MAILBOX_DECL(streamRxMSPMail, &streamRxDataLetter, STREAM_POOL_SIZE);

static void processFrameI(msp_frame_t *frame);

static THD_WORKING_AREA(mspRXVA, 128);
static THD_FUNCTION(mspParserThread, arg) {
	(void) arg;
	chRegSetThreadName("mspParser");

	poolStreamObject_t *pbuf;
	msg_t msg;
	msp_frame_t frame;

	while (true) {
		msg = chMBFetchTimeout(&streamRxMSPMail, (msg_t *) &pbuf, TIME_INFINITE);
		if (msg == MSG_OK) {
			for(uint8_t i = 0; i < pbuf->size; i++){
				chSysLock();
				if(MSP__parseMspFrameLoop(pbuf->message[i])){
					MSP__getFrameI(&frame);
					processFrameI(&frame);
				}
				chSysUnlock();
			}
			chPoolFree(&streamMemPool, pbuf);
		}
	}
}

/**
 *
 */
void MSPRX__thread_init(void) {
}

/**
 *
 */
void MSPRX__thread_start(void) {
	chThdCreateStatic(mspRXVA, sizeof(mspRXVA), THREAD_PRIORITY_MSPPARSER, mspParserThread, NULL);
}

/**
 *
 * @param frame
 */
static void processFrameI(msp_frame_t *frame){
	switch (frame->command) {
		case VALUE_TYPE_FORECAST:
			memcpy((uint8_t*)&mainData.forecast, (uint8_t*)&frame->payload[0], sizeof(mainData.forecast));
			break;
		case VALUE_TYPE_SUNLIGHT_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.sunlight, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.sunlight));
			break;
		case VALUE_TYPE_VOLTAGE_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.voltage, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.voltage));
			break;
		case VALUE_TYPE_TEMP_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.temp, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.temp));
			break;
		case VALUE_TYPE_HUMIDITY_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.humidity, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.humidity));
			break;
		case VALUE_TYPE_PRESSURE_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.pressure, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.pressure));
			break;
		case VALUE_TYPE_WIND_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.wind, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.wind));
			break;
		case VALUE_TYPE_UV_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.uvIndex, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.uvIndex));
			break;
		case VALUE_TYPE_RAIN_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.rain, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.rain));
			break;
		case VALUE_TYPE_TEMP_BEDROOM:
			memcpy((uint8_t*)&mainData.inside.tempBedroom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.tempBedroom));
			break;
		case VALUE_TYPE_HUMIDITY_BEDROOM:
			memcpy((uint8_t*)&mainData.inside.humidityBedroom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.humidityBedroom));
			break;
		/*case VALUE_TYPE_TEMP_ROOM:
			memcpy((uint8_t*)&mainData.inside.tempRoom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.tempRoom));
			break;*/
		/*case VALUE_TYPE_HUMIDITY_ROOM:
			memcpy((uint8_t*)&mainData.inside.humidityRoom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.humidityRoom));
			break*/;
		case VALUE_TYPE_PRESSURE_BEDROOM:
			memcpy((uint8_t*)&mainData.inside.pressureBedroom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.pressureBedroom));
			break;
	}
}