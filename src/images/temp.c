#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_TEMP
#define LV_ATTRIBUTE_IMG_TEMP
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_TEMP uint8_t temp_map[] = {
  0x04, 0x02, 0x04, 0xff, 	/*Color of index 0*/
  0xfc, 0xfe, 0xfc, 0xff, 	/*Color of index 1*/

  0xff, 0x1f, 0xe0, 
  0xfe, 0x0f, 0xe0, 
  0xfc, 0xe7, 0xe0, 
  0xf9, 0xf3, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x53, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xf9, 0x13, 0xe0, 
  0xe3, 0x18, 0xe0, 
  0xc7, 0x1c, 0x60, 
  0xcf, 0x1e, 0x60, 
  0x9f, 0x1f, 0x20, 
  0xbf, 0x1f, 0xa0, 
  0x3e, 0x0f, 0x80, 
  0x3e, 0x0f, 0x80, 
  0x3c, 0x07, 0x80, 
  0x3e, 0x0f, 0x80, 
  0x3e, 0x0f, 0x80, 
  0xbf, 0xbf, 0xa0, 
  0x9f, 0xff, 0x20, 
  0x8f, 0xfe, 0x20, 
  0xc7, 0xfc, 0x60, 
  0xe3, 0xf8, 0xe0, 
  0xf0, 0x01, 0xe0, 
  0xfe, 0x0f, 0xe0, 
};

const lv_img_dsc_t temp = {
  .header.always_zero = 0,
  .header.w = 19,
  .header.h = 46,
  .data_size = 146,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = temp_map,
};
