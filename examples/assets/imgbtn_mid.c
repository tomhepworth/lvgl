#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#if LV_BUILD_EXAMPLES

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGBTN_MID
#define LV_ATTRIBUTE_IMG_IMGBTN_MID
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBTN_MID uint8_t imgbtn_mid_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Blue: 2 bit, Green: 3 bit, Red: 3 bit, Alpha 8 bit */
  0x68, 0x27, 0x68, 0x27, 0x68, 0x27, 0x68, 0x27, 0x68, 0x27,
  0x64, 0xff, 0x64, 0xff, 0x64, 0xff, 0x64, 0xff, 0x64, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff, 0xf5, 0xff,
  0xf9, 0xff, 0xf9, 0xff, 0xf9, 0xff, 0xf9, 0xff, 0xf9, 0xff,
  0x8c, 0xff, 0x8c, 0xff, 0x8c, 0xff, 0x8c, 0xff, 0x8c, 0xff,
  0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff,
  0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff,
  0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff, 0xac, 0xff,
  0x44, 0xff, 0x44, 0xff, 0x44, 0xff, 0x44, 0xff, 0x44, 0xff,
  0x44, 0xc0, 0x44, 0xc0, 0x44, 0xc0, 0x44, 0xc0, 0x44, 0xc0,
  0x00, 0x57, 0x00, 0x57, 0x00, 0x57, 0x00, 0x57, 0x00, 0x57,
  0x00, 0x58, 0x00, 0x58, 0x00, 0x58, 0x00, 0x58, 0x00, 0x58,
  0x00, 0x54, 0x00, 0x54, 0x00, 0x54, 0x00, 0x54, 0x00, 0x54,
  0x00, 0x2c, 0x00, 0x2c, 0x00, 0x2c, 0x00, 0x2c, 0x00, 0x2c,
  0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0xc0, 0x61, 0x27, 0xc0, 0x61, 0x27, 0xc0, 0x61, 0x27, 0xc0, 0x61, 0x27, 0xc0, 0x61, 0x27,
  0x40, 0x51, 0xff, 0x40, 0x51, 0xff, 0x40, 0x51, 0xff, 0x40, 0x51, 0xff, 0x40, 0x51, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff,
  0x68, 0xe5, 0xff, 0x68, 0xe5, 0xff, 0x68, 0xe5, 0xff, 0x68, 0xe5, 0xff, 0x68, 0xe5, 0xff,
  0x8a, 0xed, 0xff, 0x8a, 0xed, 0xff, 0x8a, 0xed, 0xff, 0x8a, 0xed, 0xff, 0x8a, 0xed, 0xff,
  0xa1, 0x8a, 0xff, 0xa1, 0x8a, 0xff, 0xa1, 0x8a, 0xff, 0xa1, 0x8a, 0xff, 0xa1, 0x8a, 0xff,
  0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff,
  0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff,
  0x83, 0xa3, 0xff, 0x83, 0xa3, 0xff, 0x83, 0xa3, 0xff, 0x83, 0xa3, 0xff, 0x83, 0xa3, 0xff,
  0x20, 0x41, 0xff, 0x20, 0x41, 0xff, 0x20, 0x41, 0xff, 0x20, 0x41, 0xff, 0x20, 0x41, 0xff,
  0xe0, 0x30, 0xc0, 0xe0, 0x30, 0xc0, 0xe0, 0x30, 0xc0, 0xe0, 0x30, 0xc0, 0xe0, 0x30, 0xc0,
  0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57,
  0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58,
  0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54,
  0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c,
  0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x61, 0xc0, 0x27, 0x61, 0xc0, 0x27, 0x61, 0xc0, 0x27, 0x61, 0xc0, 0x27, 0x61, 0xc0, 0x27,
  0x51, 0x40, 0xff, 0x51, 0x40, 0xff, 0x51, 0x40, 0xff, 0x51, 0x40, 0xff, 0x51, 0x40, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff, 0xf6, 0xf6, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff,
  0xe5, 0x68, 0xff, 0xe5, 0x68, 0xff, 0xe5, 0x68, 0xff, 0xe5, 0x68, 0xff, 0xe5, 0x68, 0xff,
  0xed, 0x8a, 0xff, 0xed, 0x8a, 0xff, 0xed, 0x8a, 0xff, 0xed, 0x8a, 0xff, 0xed, 0x8a, 0xff,
  0x8a, 0xa1, 0xff, 0x8a, 0xa1, 0xff, 0x8a, 0xa1, 0xff, 0x8a, 0xa1, 0xff, 0x8a, 0xa1, 0xff,
  0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff,
  0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff,
  0xa3, 0x83, 0xff, 0xa3, 0x83, 0xff, 0xa3, 0x83, 0xff, 0xa3, 0x83, 0xff, 0xa3, 0x83, 0xff,
  0x41, 0x20, 0xff, 0x41, 0x20, 0xff, 0x41, 0x20, 0xff, 0x41, 0x20, 0xff, 0x41, 0x20, 0xff,
  0x30, 0xe0, 0xc0, 0x30, 0xe0, 0xc0, 0x30, 0xe0, 0xc0, 0x30, 0xe0, 0xc0, 0x30, 0xe0, 0xc0,
  0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57, 0x00, 0x00, 0x57,
  0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58,
  0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54, 0x00, 0x00, 0x54,
  0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x2c,
  0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04,
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format:  Blue: 8 bit, Green: 8 bit, Red: 8 bit, Alpha: 8 bit*/
  0x00, 0x38, 0x5f, 0x27, 0x00, 0x38, 0x5f, 0x27, 0x00, 0x38, 0x5f, 0x27, 0x00, 0x38, 0x5f, 0x27, 0x00, 0x38, 0x5f, 0x27,
  0x00, 0x2a, 0x54, 0xff, 0x00, 0x2a, 0x54, 0xff, 0x00, 0x2a, 0x54, 0xff, 0x00, 0x2a, 0x54, 0xff, 0x00, 0x2a, 0x54, 0xff,
  0xfd, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xaf, 0xdc, 0xf4, 0xff, 0xaf, 0xdc, 0xf4, 0xff, 0xaf, 0xdc, 0xf4, 0xff, 0xaf, 0xdc, 0xf4, 0xff, 0xaf, 0xdc, 0xf4, 0xff,
  0x27, 0xa1, 0xe0, 0xff, 0x27, 0xa1, 0xe1, 0xff, 0x27, 0xa1, 0xe1, 0xff, 0x27, 0xa1, 0xe1, 0xff, 0x27, 0xa1, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff, 0x2a, 0xa2, 0xe1, 0xff,
  0x29, 0xa2, 0xe1, 0xff, 0x29, 0xa2, 0xe1, 0xff, 0x29, 0xa2, 0xe1, 0xff, 0x29, 0xa2, 0xe1, 0xff, 0x29, 0xa2, 0xe1, 0xff,
  0x41, 0xac, 0xe4, 0xff, 0x41, 0xac, 0xe4, 0xff, 0x41, 0xac, 0xe4, 0xff, 0x41, 0xac, 0xe4, 0xff, 0x41, 0xac, 0xe4, 0xff,
  0x4f, 0xb2, 0xe6, 0xff, 0x4f, 0xb2, 0xe6, 0xff, 0x4f, 0xb2, 0xe6, 0xff, 0x4f, 0xb2, 0xe6, 0xff, 0x4f, 0xb2, 0xe6, 0xff,
  0x08, 0x56, 0x88, 0xff, 0x08, 0x56, 0x88, 0xff, 0x08, 0x56, 0x88, 0xff, 0x08, 0x56, 0x88, 0xff, 0x08, 0x56, 0x88, 0xff,
  0x16, 0x68, 0x97, 0xff, 0x16, 0x68, 0x97, 0xff, 0x16, 0x68, 0x97, 0xff, 0x16, 0x68, 0x97, 0xff, 0x16, 0x68, 0x97, 0xff,
  0x18, 0x6a, 0x98, 0xff, 0x18, 0x6a, 0x98, 0xff, 0x18, 0x6a, 0x98, 0xff, 0x18, 0x6a, 0x98, 0xff, 0x18, 0x6a, 0x98, 0xff,
  0x19, 0x6f, 0x9e, 0xff, 0x1a, 0x6f, 0x9f, 0xff, 0x1a, 0x6f, 0x9e, 0xff, 0x1a, 0x6f, 0x9e, 0xff, 0x1a, 0x6f, 0x9e, 0xff,
  0x00, 0x24, 0x3e, 0xff, 0x00, 0x24, 0x3e, 0xff, 0x00, 0x24, 0x3e, 0xff, 0x00, 0x24, 0x3e, 0xff, 0x00, 0x24, 0x3e, 0xff,
  0x00, 0x1e, 0x33, 0xc0, 0x00, 0x1e, 0x33, 0xc0, 0x00, 0x1e, 0x33, 0xc0, 0x00, 0x1e, 0x33, 0xc0, 0x00, 0x1e, 0x33, 0xc0,
  0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x57,
  0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x58,
  0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x54,
  0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2c,
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04,
#endif
};

const lv_img_dsc_t imgbtn_mid = {
  .header.always_zero = 0,
  .header.w = 5,
  .header.h = 49,
  .data_size = 245 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgbtn_mid_map,
};

#endif /* LV_BUILD_EXAMPLES */
