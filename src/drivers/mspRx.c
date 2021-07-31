#include "ch.h"
#include "main.h"
#include "mspRx.h"

msg_t streamRxDataLetter[STREAM_POOL_SIZE];
MAILBOX_DECL(streamRxMSPMail, &streamRxDataLetter, STREAM_POOL_SIZE);

/**
 * MTODO check length of frame if match of size of struct
 * @param frame
 */
void processFrameI(msp_frame_t *frame){
	switch (frame->command) {
		case VALUE_TYPE_FORECAST:
			memcpy((uint8_t*)&mainData.forecast, (uint8_t*)&frame->payload[0], sizeof(mainData.forecast));
			break;
		case VALUE_TYPE_SUNLIGHT_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.sunlight, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.sunlight));
			break;
		case VALUE_TYPE_VOLTAGE_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.voltage, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.voltage));
			break;
		case VALUE_TYPE_TEMP_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.temp, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.temp));
			break;
		case VALUE_TYPE_HUMIDITY_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.humidity, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.humidity));
			break;
		case VALUE_TYPE_PRESSURE_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.pressure, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.pressure));
			break;
		case VALUE_TYPE_WIND_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.wind, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.wind));
			break;
		case VALUE_TYPE_UV_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.uvIndex, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.uvIndex));
			break;
		case VALUE_TYPE_RAIN_OUTSIDE:
			memcpy((uint8_t*)&mainData.outside.rain, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.rain));
			break;
		case VALUE_TYPE_TEMP_BEDROOM:
			memcpy((uint8_t*)&mainData.inside.tempBedroom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.tempBedroom));
			break;
		case VALUE_TYPE_HUMIDITY_BEDROOM:
			memcpy((uint8_t*)&mainData.inside.humidityBedroom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.humidityBedroom));
			break;
		/*case VALUE_TYPE_TEMP_ROOM:
			memcpy((uint8_t*)&mainData.inside.tempRoom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.tempRoom));
			break;*/
		/*case VALUE_TYPE_HUMIDITY_ROOM:
			memcpy((uint8_t*)&mainData.inside.humidityRoom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.humidityRoom));
			break*/;
		case VALUE_TYPE_PRESSURE_BEDROOM:
			memcpy((uint8_t*)&mainData.inside.pressureBedroom, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.pressureBedroom));
			break;
        case VALUE_TYPE_CHART_SERIES_OUTSIDE:
            memcpy((uint8_t*)&mainData.outside.chartSeries, (uint8_t*)&frame->payload[0], sizeof(mainData.outside.chartSeries));
            break;
        case VALUE_TYPE_CHART_SERIES_INSIDE:
            memcpy((uint8_t*)&mainData.inside.chartSeries, (uint8_t*)&frame->payload[0], sizeof(mainData.inside.chartSeries));
            break;
	}
}