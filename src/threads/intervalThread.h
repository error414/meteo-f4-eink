#ifndef INTERVAL_THREAD_H
#define INTERVAL_THREAD_H
#include "appCfg.h"
#ifdef ALLOW_GO_TO_SLEEP

extern event_source_t guiDone_event_source;
extern binary_semaphore_t sleepSem;
void Interval__thread_init(void);
void Interval__thread_start(void);

#endif
#endif