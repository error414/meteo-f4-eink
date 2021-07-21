#ifndef GUI_OUTSIDE_H
#define GUI_OUTSIDE_H

#include "lvgl.h"

typedef struct {
    uint32_t sunlight; //lux
    uint32_t voltage;
    uint32_t temp; // x/100
    uint32_t humidity;
    uint32_t pressure;
    uint32_t wind; // x/100
    uint32_t uvIndex;
    uint32_t  voltagePercent;
    bool rain; //lux
} guiOutsideValues_t;

void guiInitOutside(lv_obj_t *parent, uint16_t posY, uint16_t height, const char *name);
void guiFillOutsideAll(guiOutsideValues_t* values);

#endif
