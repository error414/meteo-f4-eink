
#include <string.h>
#include <stdlib.h>
#include "ch.h"
#include "hal.h"
#include "shell.h"
#include "chprintf.h"
#include "hc12Thread.h"
#include "hwListThread.h"
#include "intervalThread.h"

#if (SHELL_CMD_THREADS_ENABLED == TRUE) || defined(__DOXYGEN__)
static void cmd_threads(BaseSequentialStream *chp, int argc, char *argv[]) {
	static const char *states[] = {CH_STATE_NAMES};
	thread_t *tp;
	size_t sz;
	uint32_t used_pct;
	size_t n = 0;
	(void)argv;
	if (argc > 0) {
		shellUsage(chp, "threads");
		return;
	}
	chprintf(chp, "  size    used   used %%     prio     state         name\r\n");
	chprintf(chp, "--------------------------------------------------------------------\r\n");
	tp = chRegFirstThread();
	do {
		n = 0;
#if (CH_DBG_ENABLE_STACK_CHECK == TRUE) || (CH_CFG_USE_DYNAMIC == TRUE)
		uint32_t stklimit = (uint32_t)tp->wabase;
#else
		uint32_t stklimit = 0U;
#endif

		uint8_t *begin = (uint8_t *)stklimit;
		uint8_t *end = (uint8_t *)tp;
		sz = end - begin;

		while(begin < end)
			if(*begin++ == CH_DBG_STACK_FILL_VALUE) ++n;


		used_pct = 100 - (n * 100) / sz;
		chprintf(chp, "%6u   %6u  %6u%%   %3u      %9s %12s" SHELL_NEWLINE_STR,
		         sz,
		         sz - n,
		         used_pct,
		         (uint32_t)tp->realprio,
		         states[tp->state],
		         tp->name == NULL ? "" : tp->name);
		tp = chRegNextThread(tp);
	} while (tp != NULL);
}
#endif

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void cmd_mem(BaseSequentialStream *chp, int argc, char *argv[]) {
  size_t n, total, largest;

  (void)argv;
  if (argc > 0) {
    shellUsage(chp, "mem");
    return;
  }
  n = chHeapStatus(NULL, &total, &largest);
  chprintf(chp, "core free memory : %u bytes" SHELL_NEWLINE_STR, chCoreGetStatusX());
  chprintf(chp, "heap fragments   : %u" SHELL_NEWLINE_STR, n);
  chprintf(chp, "heap free total  : %u bytes" SHELL_NEWLINE_STR, total);
  chprintf(chp, "heap free largest: %u bytes" SHELL_NEWLINE_STR, largest);
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void cmd_hc12Set(BaseSequentialStream *chp, int argc, char *argv[]){
	(void)argv;

	if(!HC12__thread_reconfigureDefault(chp)){
		chprintf(chp, "ERROR");
	}
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void cmd_request_data(BaseSequentialStream *chp, int argc, char *argv[]){
	/*if (argc == 1) {
		poolStreamObject_t* messagePoolObject = (poolStreamObject_t *) chPoolAlloc(&streamMemPool);
		if (messagePoolObject) {
			strcpy(messagePoolObject->message, argv[0]);
			messagePoolObject->size = strlen(messagePoolObject->message);
			chMBPostTimeout(&streamMail, (msg_t) messagePoolObject, TIME_IMMEDIATE);
			chprintf(chp, "OK");
		}

		chprintf(chp, "" SHELL_NEWLINE_STR);
		return;
	}*/

	shellUsage(chp, "param missing");
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void cmd_values(BaseSequentialStream *chp, int argc, char *argv[]){
	(void)argv;
	hw_t** hwList = HwList__getHw();
	for(uint8_t i = 0; i < HW_LIST_SIZE; i++){
		if(hwList[i] && hwList[i]->type == VALUE_TYPE_SENSOR){
			for(uint8_t ii = 0; ii < HW_LIST_VALUES_SIZE; ii++){
				if(hwList[i]->values[ii].name != NULL){

					if(hwList[i]->values[ii].formatter == VALUE_FORMATTER_BOOL){
						chprintf(chp, "%15s: %3s  " SHELL_NEWLINE_STR,
						         hwList[i]->values[ii].name,
						         hwList[i]->values[ii].value ? "ON" : "OFF"
						);
					}else{

						float value = (float)hwList[i]->values[ii].value;
						if(hwList[i]->values[ii].formatter == VALUE_FORMATTER_100){
							value /= 100;
						}
						chprintf(chp, "%15s: %.2f  " SHELL_NEWLINE_STR,
						         hwList[i]->values[ii].name,
						         value
						);
					}

				}
			}
		}
	}
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void cmd_hw(BaseSequentialStream *chp, int argc, char *argv[]){
	(void)argv;
	static const char *states[] = {HW_STATUS_LIST};
	static const char *type[] = {HW_TYPE_LIST};

	hw_t** hwList = HwList__getHw();
	for(uint8_t i = 0; i < HW_LIST_SIZE; i++){
		if(hwList[i]){
			chprintf(chp, "%6u  %11s  %10s  %10s" SHELL_NEWLINE_STR,
			         hwList[i]->id,
			         type[hwList[i]->type],
			         hwList[i]->name,
			         states[hwList[i]->status]
			);
		}
	}
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
#ifdef ALLOW_GO_TO_SLEEP
static void noSleep(BaseSequentialStream *chp, int argc, char *argv[]){
	(void)argv;
	msg_t  msg = chBSemWaitTimeout(&sleepSem, 500);
	if (msg == MSG_TIMEOUT) {
		chprintf(chp, "ERROR" SHELL_NEWLINE_STR);
	}else {
		chprintf(chp, "Sleep deactivated" SHELL_NEWLINE_STR);
	}
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void allowSleep(BaseSequentialStream *chp, int argc, char *argv[]){
	(void)argv;
	chBSemSignal(&sleepSem);
	chprintf(chp, "Sleep allowed" SHELL_NEWLINE_STR);
	chThdSleepMilliseconds(1000);
}
#endif



/*===========================================================================*/
/* Module exported functions.                                                */
/*===========================================================================*/

/**
 * @brief   Array of the default commands.
 */

const ShellCommand shellCommands[] = {
#if SHELL_CMD_THREADS_ENABLED == TRUE
		{"threads", cmd_threads},
#endif
  {"values", cmd_values},
  {"hw", cmd_hw},
  {"hc12set", cmd_hc12Set},
  {"mem", cmd_mem},
#ifdef ALLOW_GO_TO_SLEEP
  {"noSleep", noSleep},
  {"allowSleep", allowSleep},
#endif
  {NULL, NULL}
};

/** @} */
