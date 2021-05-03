#ifndef GUI_OUTSIDE_H
#define GUI_OUTSIDE_H

#include "lvgl.h"

typedef struct {
    uint32_t sunlight; //lux
    uint16_t voltage;
    uint16_t temp; // x/100
    uint16_t humidity;
    uint16_t pressure;
    uint16_t wind; // x/100
    uint8_t uvIndex;
    uint8_t  voltagePercent;
    bool rain; //lux

} guiOutsideValues_t;

void guiInitOutside(lv_obj_t *parent, uint16_t posY, uint16_t height, const char *name);
void guiFillOutsideAll(guiOutsideValues_t* values);

#endif
