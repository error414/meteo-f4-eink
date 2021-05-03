#include "ch.h"
#include "main.h"
#include "msp.h"

static void processFrameI(msp_frame_t *frame);


static THD_WORKING_AREA(mspRXVA, 128);
static THD_FUNCTION(mspParserThread, arg) {
	(void) arg;
	chRegSetThreadName("mspParser");

	poolStreamObject_t *pbuf;
	msg_t msg;
	msp_frame_t frame;

	while (true) {
		msg = chMBFetchTimeout(&streamRxMail, (msg_t *) &pbuf, TIME_INFINITE);
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

}