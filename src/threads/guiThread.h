#ifndef GUI_THREAD_H
#define GUI_THREAD_H

#include "hal.h"
#include "lvgl.h"
#include "lv_conf.h"
#include "EPD_7in5_HD.h"

typedef struct {
	const EPD_7IN5_HD_cfg_t *epd7In5HdCfg;
} gui__threadConfig_t;

void Gui__thread_init(const gui__threadConfig_t *cfg);
void Gui__thread_start(void);
void Gui__thread_setInterval(uint16_t i);

#endif