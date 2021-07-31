#include "ch.h"
#include "main.h"
#include "appCfg.h"
#ifdef ALLOW_GO_TO_SLEEP
#include "intervalThread.h"
#include "guiThread.h"

static RTCWakeup wakeupspec;
event_source_t guiDone_event_source;
binary_semaphore_t sleepSem;

static THD_WORKING_AREA(intervalVA, 50);
static THD_FUNCTION(intervalThread, arg) {
	(void) arg;
	chRegSetThreadName("interval");

	event_listener_t allDone_listener;
	chEvtRegisterMask(&guiDone_event_source,  &allDone_listener, EVENT_MASK(0));

	while (true) {
		//chEvtWaitOneTimeout(EVENT_MASK(0), TIME_S2I(APP_TIMING_MAX_WOKE_TIMEOUT));
        chEvtWaitOneTimeout(EVENT_MASK(0), TIME_INFINITE);
		chBSemWait(&sleepSem);
		wakeupspec.wutr = ((uint32_t)4) << 16;  //select 1 Hz clock source
		wakeupspec.wutr |= APP_TIMING_SLEEP_INTERVAL - 1;  //set counter value to 9. Period will be 9+1 seconds.
		rtcSTM32SetPeriodicWakeup(&RTCD1, &wakeupspec);

		chThdSleepMilliseconds(500);
		chSysLock();
		SCB->SCR |= SCB_SCR_SLEEPDEEP_Msk;
		PWR->CR  |= (PWR_CR_PDDS | PWR_CR_LPDS | PWR_CR_CSBF | PWR_CR_CWUF);
		RTC->ISR &= ~(RTC_ISR_ALRBF | RTC_ISR_ALRAF | RTC_ISR_WUTF | RTC_ISR_TAMP1F |
		              RTC_ISR_TSOVF | RTC_ISR_TSF);
		__WFI();
	}
}

/**
 *
 */
void Interval__thread_init(void) {
	chEvtObjectInit(&guiDone_event_source);
	chBSemObjectInit(&sleepSem, false);
}

/**
 *
 */
void Interval__thread_start(void) {
	chThdCreateStatic(intervalVA, sizeof(intervalVA), THREAD_PRIORITY_INTERVAL, intervalThread, NULL);
}

#endif