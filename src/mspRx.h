#ifndef MSPRX_H
#define MSPRX_H

#include "hal.h"
#include "msp.h"

enum mspCmd_e {
	VALUE_TYPE_FORECAST             = 101,
	VALUE_TYPE_SUNLIGHT_OUTSIDE     = 102,
	VALUE_TYPE_VOLTAGE_OUTSIDE      = 103,
	VALUE_TYPE_TEMP_OUTSIDE         = 104,
	VALUE_TYPE_HUMIDITY_OUTSIDE     = 105,
	VALUE_TYPE_PRESSURE_OUTSIDE     = 106,
	VALUE_TYPE_WIND_OUTSIDE         = 107,
	VALUE_TYPE_UV_OUTSIDE           = 108,
	VALUE_TYPE_RAIN_OUTSIDE         = 117,

	VALUE_TYPE_TEMP_BEDROOM         = 111,
	VALUE_TYPE_HUMIDITY_BEDROOM     = 112,

	VALUE_TYPE_TEMP_ROOM            = 113,
	VALUE_TYPE_HUMIDITY_ROOM        = 114,

	VALUE_TYPE_PRESSURE_ROOM        = 115,
	VALUE_TYPE_PRESSURE_BEDROOM     = 116,


};

void processFrameI(msp_frame_t *frame);

#endif