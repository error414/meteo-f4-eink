#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SUN36
#define LV_ATTRIBUTE_IMG_SUN36
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SUN36 uint8_t sun36_map[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x03, 0x80, 0x60, 0x1c, 0x00, 
  0x03, 0xc0, 0x60, 0x3c, 0x00, 
  0x03, 0xe0, 0x00, 0x7c, 0x00, 
  0x01, 0xe1, 0xf8, 0x78, 0x00, 
  0x00, 0xe7, 0xfe, 0x70, 0x00, 
  0x00, 0x0f, 0xff, 0x00, 0x00, 
  0x00, 0x1e, 0x07, 0x80, 0x00, 
  0x00, 0x3c, 0x03, 0xc0, 0x00, 
  0x00, 0x38, 0x01, 0xc0, 0x00, 
  0x00, 0x70, 0x00, 0xe0, 0x00, 
  0x00, 0x70, 0x00, 0xe0, 0x00, 
  0x7f, 0x70, 0x00, 0xef, 0xe0, 
  0x7f, 0x70, 0x00, 0xef, 0xe0, 
  0x00, 0x70, 0x00, 0xe0, 0x00, 
  0x00, 0x70, 0x00, 0xe0, 0x00, 
  0x00, 0x38, 0x01, 0xc0, 0x00, 
  0x00, 0x3c, 0x03, 0xc0, 0x00, 
  0x00, 0x1e, 0x07, 0x80, 0x00, 
  0x00, 0x0f, 0xff, 0x00, 0x00, 
  0x00, 0xe7, 0xfe, 0x70, 0x00, 
  0x01, 0xe1, 0xf8, 0x78, 0x00, 
  0x03, 0xe0, 0x00, 0x7c, 0x00, 
  0x03, 0xc0, 0x60, 0x3c, 0x00, 
  0x03, 0x80, 0x60, 0x1c, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t sun36 = {
  .header.always_zero = 0,
  .header.w = 36,
  .header.h = 36,
  .data_size = 180,
  .header.cf = LV_IMG_CF_ALPHA_1BIT,
  .data = sun36_map,
};

