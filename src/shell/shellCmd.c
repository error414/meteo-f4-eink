
#include <string.h>
#include <stdlib.h>
#include "ch.h"
#include "hal.h"
#include "shell.h"
#include "chprintf.h"

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

	/*if(!HC12__thread_reconfigureDefault(chp)){
		chprintf(chp, "ERROR");
	}*/
}

/**
 *
 * @param chp
 * @param argc
 * @param argv
 */
static void cmd_send(BaseSequentialStream *chp, int argc, char *argv[]){
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
  {"hc12set", cmd_hc12Set},
  {"send", cmd_send},
  {"mem", cmd_mem},
  {NULL, NULL}
};

/** @} */
