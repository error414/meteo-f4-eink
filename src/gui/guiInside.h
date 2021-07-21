#ifndef GUI_INSIDE_H
#define GUI_INSIDE_H

#include "lvgl.h"

typedef struct {
    uint32_t tempBedroom; // x/100 - 100
    uint32_t tempRoom; // x/100 - 100
    uint32_t humidityBedroom;
    uint32_t humidityRoom;
    uint32_t pressureBedroom;
    uint32_t pressureRoom;

} guiInsideValues_t;

void guiInitInside(lv_obj_t *parent, uint16_t posY, uint16_t height, const char *name1, const char *name2);
void guiFillInsideAll(guiInsideValues_t* values);

#endif
