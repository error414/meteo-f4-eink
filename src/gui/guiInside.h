#ifndef GUI_INSIDE_H
#define GUI_INSIDE_H

#include "lvgl.h"

typedef struct {
    uint16_t tempBedroom; // x/100 - 100
    uint16_t tempRoom; // x/100 - 100
    uint16_t humidityBedroom;
    uint16_t humidityRoom;
    uint16_t pressureBedroom;
    uint16_t pressureRoom;

} guiInsideValues_t;

void guiInitInside(lv_obj_t *parent, uint16_t posY, uint16_t height, const char *name1, const char *name2);
void guiFillInsideAll(guiInsideValues_t* values);

#endif
