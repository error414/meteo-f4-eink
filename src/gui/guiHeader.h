#ifndef GUI_HEADER_H
#define GUI_HEADER_H

#include "lvgl.h"

#define VOLTAGE_TEMPLATE "%.2fV"

typedef struct {
    uint16_t voltage; // x/100
    uint8_t voltagePercent;
} guiMainHeaderValues_t;


void guiInitMainHeader(const char *placeName);
void guiFillMainHeader(guiMainHeaderValues_t* values);


#endif
