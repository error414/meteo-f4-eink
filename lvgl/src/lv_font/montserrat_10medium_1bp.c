#include "lvgl.h"

/*******************************************************************************
 * Size: 10 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifndef MONTSERRAT_10MEDIUM_1BP
#define MONTSERRAT_10MEDIUM_1BP 1
#endif

#if MONTSERRAT_10MEDIUM_1BP

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+20 " " */
    0x0,

    /* U+21 "!" */
    0xf2,

    /* U+22 "\"" */
    0xb4,

    /* U+23 "#" */
    0x24, 0x51, 0xf9, 0x4f, 0xc9, 0x12, 0x0,

    /* U+24 "$" */
    0x23, 0xa9, 0x47, 0x14, 0xbe, 0x20,

    /* U+25 "%" */
    0xe4, 0xa4, 0xa8, 0xf6, 0x29, 0x29, 0x6,

    /* U+26 "&" */
    0x78, 0x91, 0x63, 0x88, 0xd0, 0x9e, 0x80,

    /* U+27 "'" */
    0xc0,

    /* U+28 "(" */
    0x6a, 0xaa, 0x40,

    /* U+29 ")" */
    0xa5, 0x55, 0x80,

    /* U+2A "*" */
    0x23, 0x9c,

    /* U+2B "+" */
    0x27, 0xc8, 0x40,

    /* U+2C "," */
    0xe0,

    /* U+2D "-" */
    0xc0,

    /* U+2E "." */
    0xc0,

    /* U+2F "/" */
    0x12, 0x22, 0x44, 0x48, 0x80,

    /* U+30 "0" */
    0x7b, 0x38, 0x61, 0x87, 0x37, 0x80,

    /* U+31 "1" */
    0xe4, 0x92, 0x48,

    /* U+32 "2" */
    0x70, 0x42, 0x22, 0x23, 0xe0,

    /* U+33 "3" */
    0xf8, 0x88, 0xe0, 0x87, 0xc0,

    /* U+34 "4" */
    0x10, 0x86, 0x12, 0xfc, 0x20, 0x80,

    /* U+35 "5" */
    0x7c, 0x21, 0xe0, 0x87, 0xc0,

    /* U+36 "6" */
    0x7e, 0x21, 0xe8, 0xc5, 0xc0,

    /* U+37 "7" */
    0xfe, 0x20, 0x84, 0x10, 0x82, 0x0,

    /* U+38 "8" */
    0x72, 0x28, 0x9c, 0x8e, 0x17, 0x80,

    /* U+39 "9" */
    0x74, 0x62, 0xf0, 0x8f, 0xc0,

    /* U+3A ":" */
    0xc0, 0xc0,

    /* U+3B ";" */
    0xc0, 0xe0,

    /* U+3C "<" */
    0x36, 0x18, 0x30,

    /* U+3D "=" */
    0xf0, 0xf0,

    /* U+3E ">" */
    0xc1, 0xd9, 0x0,

    /* U+3F "?" */
    0x74, 0x42, 0x22, 0x0, 0x80,

    /* U+40 "@" */
    0x1e, 0x18, 0x6d, 0xee, 0x89, 0xa2, 0x68, 0x9d,
    0xf9, 0x80, 0x3c, 0x0,

    /* U+41 "A" */
    0x10, 0x50, 0xa2, 0x27, 0xc8, 0x60, 0x80,

    /* U+42 "B" */
    0xfa, 0x18, 0x7e, 0x86, 0x1f, 0x80,

    /* U+43 "C" */
    0x3d, 0x18, 0x20, 0x81, 0x13, 0xc0,

    /* U+44 "D" */
    0xf9, 0xa, 0xc, 0x18, 0x30, 0xbe, 0x0,

    /* U+45 "E" */
    0xfc, 0x21, 0xf8, 0x43, 0xe0,

    /* U+46 "F" */
    0xfc, 0x21, 0xf8, 0x42, 0x0,

    /* U+47 "G" */
    0x39, 0x18, 0x21, 0x85, 0x13, 0x80,

    /* U+48 "H" */
    0x86, 0x18, 0x7f, 0x86, 0x18, 0x40,

    /* U+49 "I" */
    0xfe,

    /* U+4A "J" */
    0xf1, 0x11, 0x19, 0xe0,

    /* U+4B "K" */
    0x8a, 0x6b, 0x38, 0xd2, 0x28, 0x40,

    /* U+4C "L" */
    0x84, 0x21, 0x8, 0x43, 0xe0,

    /* U+4D "M" */
    0x83, 0x8f, 0x1d, 0x5a, 0xb2, 0x60, 0x80,

    /* U+4E "N" */
    0x87, 0x1a, 0x6d, 0x96, 0x38, 0x40,

    /* U+4F "O" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x0,

    /* U+50 "P" */
    0xfa, 0x18, 0x61, 0xfa, 0x8, 0x0,

    /* U+51 "Q" */
    0x38, 0x8a, 0xc, 0x18, 0x28, 0x8e, 0x7,

    /* U+52 "R" */
    0xfa, 0x18, 0x61, 0xfa, 0x28, 0x40,

    /* U+53 "S" */
    0x74, 0x20, 0xe0, 0xc5, 0xc0,

    /* U+54 "T" */
    0xf9, 0x8, 0x42, 0x10, 0x80,

    /* U+55 "U" */
    0x86, 0x18, 0x61, 0x87, 0x37, 0x80,

    /* U+56 "V" */
    0x82, 0x89, 0x11, 0x22, 0x85, 0x4, 0x0,

    /* U+57 "W" */
    0x84, 0x28, 0xc9, 0x29, 0x35, 0x22, 0x98, 0x63,
    0xc, 0x60,

    /* U+58 "X" */
    0x44, 0xd0, 0xa0, 0x82, 0x89, 0xb1, 0x0,

    /* U+59 "Y" */
    0x44, 0x88, 0xa1, 0x41, 0x2, 0x4, 0x0,

    /* U+5A "Z" */
    0xfc, 0x21, 0x8, 0x61, 0xf, 0xc0,

    /* U+5B "[" */
    0xea, 0xaa, 0xc0,

    /* U+5C "\\" */
    0x88, 0x84, 0x42, 0x22, 0x10,

    /* U+5D "]" */
    0xd5, 0x55, 0xc0,

    /* U+5E "^" */
    0x66, 0xa9,

    /* U+5F "_" */
    0xf8,

    /* U+60 "`" */
    0x40,

    /* U+61 "a" */
    0x70, 0x7f, 0x17, 0x80,

    /* U+62 "b" */
    0x82, 0xf, 0xa1, 0x86, 0x3f, 0x80,

    /* U+63 "c" */
    0x74, 0x21, 0x7, 0x0,

    /* U+64 "d" */
    0x4, 0x17, 0xe1, 0x86, 0x17, 0x40,

    /* U+65 "e" */
    0x74, 0x7f, 0x7, 0x0,

    /* U+66 "f" */
    0x74, 0xf4, 0x44, 0x40,

    /* U+67 "g" */
    0x7e, 0x18, 0x63, 0x7c, 0x17, 0x80,

    /* U+68 "h" */
    0x84, 0x3d, 0x18, 0xc6, 0x20,

    /* U+69 "i" */
    0xbe,

    /* U+6A "j" */
    0x20, 0x92, 0x49, 0xe0,

    /* U+6B "k" */
    0x84, 0x27, 0x4e, 0x4a, 0x20,

    /* U+6C "l" */
    0xfe,

    /* U+6D "m" */
    0xf7, 0x44, 0x62, 0x31, 0x18, 0x88,

    /* U+6E "n" */
    0xf4, 0x63, 0x18, 0x80,

    /* U+6F "o" */
    0x7a, 0x18, 0x61, 0x78,

    /* U+70 "p" */
    0xfa, 0x18, 0x63, 0xfa, 0x8, 0x0,

    /* U+71 "q" */
    0x7e, 0x18, 0x61, 0x7c, 0x10, 0x40,

    /* U+72 "r" */
    0xf2, 0x48,

    /* U+73 "s" */
    0x7a, 0x1c, 0x17, 0x80,

    /* U+74 "t" */
    0x4f, 0x44, 0x47,

    /* U+75 "u" */
    0x8c, 0x63, 0x17, 0x80,

    /* U+76 "v" */
    0x89, 0x25, 0xc, 0x30,

    /* U+77 "w" */
    0x88, 0xaa, 0x95, 0x4a, 0xa2, 0x20,

    /* U+78 "x" */
    0x4b, 0x88, 0xa4, 0x80,

    /* U+79 "y" */
    0x89, 0x25, 0xc, 0x30, 0x8c, 0x0,

    /* U+7A "z" */
    0xf8, 0x88, 0x8f, 0x80,

    /* U+7B "{" */
    0x69, 0x28, 0x92, 0x60,

    /* U+7C "|" */
    0xff, 0x80,

    /* U+7D "}" */
    0xc9, 0x22, 0x92, 0xc0,

    /* U+7E "~" */
    0xd5, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 43, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2, .adv_w = 63, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3, .adv_w = 112, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 16, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 110, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 30, .adv_w = 34, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 31, .adv_w = 54, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 34, .adv_w = 54, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 37, .adv_w = 64, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 39, .adv_w = 93, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 42, .adv_w = 36, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 43, .adv_w = 61, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 44, .adv_w = 36, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 56, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 50, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 59, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 107, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 96, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 103, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 97, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 36, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 104, .adv_w = 36, .box_w = 2, .box_h = 6, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 106, .adv_w = 93, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 109, .adv_w = 93, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 111, .adv_w = 93, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 114, .adv_w = 92, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 165, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 131, .adv_w = 117, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 121, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 132, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 157, .adv_w = 107, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 102, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 130, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 50, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 82, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 115, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 95, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 153, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 130, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 134, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 134, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 228, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 94, .box_w = 5, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 127, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 114, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 180, .box_w = 11, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 108, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 104, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 105, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 53, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 290, .adv_w = 56, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 295, .adv_w = 53, .box_w = 2, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 298, .adv_w = 93, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 300, .adv_w = 80, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 301, .adv_w = 96, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 302, .adv_w = 96, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 312, .adv_w = 91, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 322, .adv_w = 98, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 56, .box_w = 4, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 110, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 336, .adv_w = 109, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 341, .adv_w = 45, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 45, .box_w = 3, .box_h = 9, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 346, .adv_w = 99, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 45, .box_w = 1, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 169, .box_w = 9, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 109, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 102, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 372, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 378, .adv_w = 66, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 66, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 108, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 89, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 144, .box_w = 9, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 89, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 411, .adv_w = 83, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 56, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 419, .adv_w = 48, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 421, .adv_w = 56, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 425, .adv_w = 93, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 0, 13, 14, 15, 16, 17,
    18, 19, 12, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 25, 22, 26, 27,
    28, 29, 29, 30, 31, 32, 29, 29,
    22, 33, 34, 35, 3, 36, 30, 37,
    37, 38, 39, 40, 41, 42, 43, 0,
    44, 0, 45, 46, 47, 48, 49, 50,
    51, 45, 52, 52, 53, 48, 45, 45,
    46, 46, 54, 55, 56, 57, 51, 58,
    58, 59, 58, 60, 41, 0, 0, 9
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 12,
    18, 19, 20, 21, 21, 0, 0, 0,
    22, 23, 24, 25, 23, 25, 25, 25,
    23, 25, 25, 26, 25, 25, 25, 25,
    23, 25, 23, 25, 3, 27, 28, 29,
    29, 30, 31, 32, 33, 34, 35, 0,
    36, 0, 37, 38, 39, 39, 39, 0,
    39, 38, 40, 41, 38, 38, 42, 42,
    39, 42, 39, 42, 43, 44, 45, 46,
    46, 47, 46, 48, 0, 0, 35, 9
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 4, -4, 0, 0, 0,
    0, -9, -10, 1, 8, 4, 3, -6,
    1, 8, 0, 7, 2, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 1, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, -3,
    3, 3, 0, 0, -2, 0, -1, 2,
    0, -2, 0, -2, -1, -3, 0, 0,
    0, 0, -2, 0, 0, -2, -2, 0,
    0, -2, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, -4, 0, -19, 0, 0, -3, 0,
    3, 5, 0, 0, -3, 2, 2, 5,
    3, -3, 3, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -2, -8, 0, -6, -1, 0, 0, 0,
    0, 0, 6, 0, -5, -1, 0, 0,
    0, -3, 0, 0, -1, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, -1, 6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 2, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 3, 2, 5, -2, 0, 0, 3,
    -2, -5, -22, 1, 4, 3, 0, -2,
    0, 6, 0, 5, 0, 5, 0, -15,
    0, -2, 5, 0, 5, -2, 3, 2,
    0, 0, 0, -2, 0, 0, -3, 13,
    0, 13, 0, 5, 0, 7, 2, 3,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, -1, 0, 1, -3, -2, -3, 1,
    0, -2, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, -10, 0, 0, 0, 0,
    -1, 0, 16, -2, -2, 2, 2, -1,
    0, -2, 2, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -16, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, -6, 0, 5, 0,
    -11, -16, -11, -3, 5, 0, 0, -11,
    0, 2, -4, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 5, -20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 1,
    1, -2, -3, 0, 0, 0, -2, 0,
    0, -1, 0, 0, 0, -3, 0, -1,
    0, -4, -3, 0, -4, -5, -5, -3,
    0, -3, 0, -3, 0, 0, 0, 0,
    -1, 0, 0, 2, 0, 1, -2, 0,
    0, 0, 0, 2, -1, 0, 0, 0,
    -1, 2, 2, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, -1, 0, -2, 0, -3, 0,
    0, -1, 0, 5, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, -1, -1,
    0, -2, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    -2, -2, 0, 0, 0, 0, 0, 0,
    0, 0, -1, 0, -2, -2, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, -1, -2, 0,
    0, -5, -1, -5, 3, 0, 0, -3,
    2, 3, 4, 0, -4, 0, -2, 0,
    0, -8, 2, -1, 1, -8, 2, 0,
    0, 0, -8, 0, -8, -1, -14, -1,
    0, -8, 0, 3, 4, 0, 2, 0,
    0, 0, 0, 0, 0, -3, -2, 0,
    0, 0, 0, -2, 0, 0, 0, -2,
    0, 0, 0, 0, 0, -1, -1, 0,
    -1, -2, 0, 0, 0, 0, 0, 0,
    0, -2, -2, 0, -1, -2, -1, 0,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    0, -1, 0, -3, 2, 0, 0, -2,
    1, 2, 2, 0, 0, 0, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 1,
    0, 0, -2, 0, -2, -1, -2, 0,
    0, 0, 0, 0, 0, 0, 1, 0,
    -1, 0, 0, 0, 0, -2, -2, 0,
    0, 5, -1, 0, -5, 0, 0, 4,
    -8, -8, -7, -3, 2, 0, -1, -10,
    -3, 0, -3, 0, -3, 2, -3, -10,
    0, -4, 0, 0, 1, 0, 1, -1,
    0, 2, 0, -5, -6, 0, -8, -4,
    -3, -4, -5, -2, -4, 0, -3, -4,
    0, 0, 0, -2, 0, 0, 0, 1,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, -1,
    0, 0, -2, 0, -3, -4, -4, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 1, -1, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -1, 0, 0, 0, -3, 0, 0, 0,
    0, -8, -5, 0, 0, 0, -2, -8,
    0, 0, -2, 2, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 2, 0,
    1, -3, -3, 0, -2, -2, -2, 0,
    0, 0, 0, 0, 0, -5, 0, -2,
    0, -2, -2, 0, -4, -4, -5, -1,
    0, -3, 0, -5, 0, 0, 0, 0,
    13, 0, 0, 1, 0, 0, -2, 0,
    0, -7, 0, 0, 0, 0, 0, -15,
    -3, 5, 5, -1, -7, 0, 2, -2,
    0, -8, -1, -2, 2, -11, -2, 2,
    0, 2, -6, -2, -6, -5, -7, 0,
    0, -10, 0, 9, 0, 0, -1, 0,
    0, 0, -1, -1, -2, -4, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, -1, -2, -2, 0,
    0, -3, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 3,
    0, 2, 0, -4, 2, -1, 0, -4,
    -2, 0, -2, -2, -1, 0, -2, -3,
    0, 0, -1, 0, -1, -3, -2, 0,
    0, -2, 0, 2, -1, 0, -4, 0,
    0, 0, -3, 0, -3, 0, -3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 2, 0, -2, 0, -1, -2, -5,
    -1, -1, -1, 0, -1, -2, 0, 0,
    0, 0, 0, 0, -2, -1, -1, 0,
    0, 0, 0, 2, -1, 0, -1, 0,
    0, 0, -1, -2, -1, -1, -2, -1,
    1, 6, 0, 0, -4, 0, -1, 3,
    0, -2, -7, -2, 2, 0, 0, -8,
    -3, 2, -3, 1, 0, -1, -1, -5,
    0, -2, 1, 0, 0, -3, 0, 0,
    0, 2, 2, -3, -3, 0, -3, -2,
    -2, -2, -2, 0, -3, 1, -3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, -2, 0, 0, -2, -2, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    -1, 0, 0, 0, 0, 0, -1, 0,
    0, 0, -2, 0, -3, 0, 0, 0,
    -5, 0, 1, -4, 3, 0, -1, -8,
    0, 0, -4, -2, 0, -6, -4, -4,
    0, 0, -7, -2, -6, -6, -8, 0,
    -4, 0, 1, 11, -2, 0, -4, -2,
    0, -2, -3, -4, -3, -6, -7, -4,
    0, 0, -1, 0, 0, 0, 0, -11,
    -1, 5, 4, -4, -6, 0, 0, -5,
    0, -8, -1, -2, 3, -15, -2, 0,
    0, 0, -10, -2, -8, -2, -12, 0,
    0, -11, 0, 9, 0, 0, -1, 0,
    0, 0, 0, -1, -1, -6, -1, 0,
    0, 0, 0, 0, -5, 0, -1, 0,
    0, -4, -8, 0, 0, -1, -2, -5,
    -2, 0, -1, 0, 0, 0, 0, -7,
    -2, -5, -5, -1, -3, -4, -2, -3,
    0, -3, -1, -5, -2, 0, -2, -3,
    -2, -3, 0, 1, 0, -1, -5, 0,
    0, -3, 0, 0, 0, 0, 2, 0,
    1, -3, 7, 0, -2, -2, -2, 0,
    0, 0, 0, 0, 0, -5, 0, -2,
    0, -2, -2, 0, -4, -4, -5, -1,
    0, -3, 1, 6, 0, 0, 0, 0,
    13, 0, 0, 1, 0, 0, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -1, -3,
    0, 0, 0, 0, 0, -1, 0, 0,
    0, -2, -2, 0, 0, -3, -2, 0,
    0, -3, 0, 3, -1, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0,
    3, 1, -1, 0, -5, -3, 0, 5,
    -5, -5, -3, -3, 6, 3, 2, -14,
    -1, 3, -2, 0, -2, 2, -2, -6,
    0, -2, 2, -2, -1, -5, -1, 0,
    0, 5, 3, 0, -4, 0, -9, -2,
    5, -2, -6, 0, -2, -5, -5, -2,
    2, 0, -2, 0, -4, 0, 1, 5,
    -4, -6, -6, -4, 5, 0, 0, -12,
    -1, 2, -3, -1, -4, 0, -4, -6,
    -2, -2, -1, 0, 0, -4, -3, -2,
    0, 5, 4, -2, -9, 0, -9, -2,
    0, -6, -9, 0, -5, -3, -5, -4,
    0, 0, -2, 0, -3, -1, 0, -2,
    -3, 0, 3, -5, 2, 0, 0, -8,
    0, -2, -4, -3, -1, -5, -4, -5,
    -4, 0, -5, -2, -4, -3, -5, -2,
    0, 0, 0, 8, -3, 0, -5, -2,
    0, -2, -3, -4, -4, -4, -6, -2,
    3, 0, -2, 0, -8, -2, 1, 3,
    -5, -6, -3, -5, 5, -2, 1, -15,
    -3, 3, -4, -3, -6, 0, -5, -7,
    -2, -2, -1, -2, -3, -5, 0, 0,
    0, 5, 4, -1, -10, 0, -10, -4,
    4, -6, -11, -3, -6, -7, -8, -5,
    0, 0, 0, 0, -2, 0, 0, 2,
    -2, 3, 1, -3, 3, 0, 0, -5,
    0, 0, 0, 0, 0, 0, -1, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, 0, 1, 5, 0, 0, -2, 0,
    0, 0, 0, -1, -1, -2, 0, 0,
    0, 1, 0, 0, 0, 0, 1, 0,
    -1, 0, 6, 0, 3, 0, 0, -2,
    0, 3, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, -2, 3, 0, 5, 0,
    0, 16, 2, -3, -3, 2, 2, -1,
    0, -8, 0, 0, 8, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 6, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, -3, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, 0, -4, 0, 0, 0, 0,
    0, 2, 21, -3, -1, 5, 4, -4,
    2, 0, 0, 2, 2, -2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, -4,
    0, 0, 0, 0, -4, -1, 0, 0,
    0, -4, 0, -2, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, 0, 0,
    0, -2, 0, -4, 0, 0, 0, -3,
    2, -2, 0, 0, -4, -2, -4, 0,
    0, -4, 0, -2, 0, -8, 0, -2,
    0, 0, -13, -3, -6, -2, -6, 0,
    0, -11, 0, -4, -1, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -3, -1,
    0, 0, 0, 0, -4, 0, -4, 2,
    -2, 3, 0, -1, -4, -1, -3, -3,
    0, -2, -1, -1, 1, -4, 0, 0,
    0, 0, -14, -1, -2, 0, -4, 0,
    -1, -8, -1, 0, 0, -1, -1, 0,
    0, 0, 0, 1, 0, -1, -3, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, 0, 0, 0, 0,
    0, -4, 0, -1, 0, 0, 0, -3,
    2, 0, 0, 0, -4, -2, -3, 0,
    0, -4, 0, -2, 0, -8, 0, 0,
    0, 0, -16, 0, -3, -6, -8, 0,
    0, -11, 0, -1, -2, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, -1,
    0, 0, 0, 3, -2, 0, 5, 8,
    -2, -2, -5, 2, 8, 3, 4, -4,
    2, 7, 2, 5, 4, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 8, -3, -2, 0, -1, 13,
    7, 13, 0, 0, 0, 2, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, -13, -2, -1, -7, -8, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, -13, -2, -1, -7, -8, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    -4, 2, 0, -2, 1, 3, 2, -5,
    0, 0, -1, 2, 0, 1, 0, 0,
    0, 0, -4, 0, -1, -1, -3, 0,
    -1, -6, 0, 10, -2, 0, -4, -1,
    0, -1, -3, 0, -2, -4, -3, -2,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, -13, -2, -1, -7, -8, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -5, -2, -1, 5,
    -1, -2, -6, 0, -1, 0, -1, -4,
    0, 4, 0, 1, 0, 1, -4, -6,
    -2, 0, -6, -3, -4, -7, -6, 0,
    -3, -3, -2, -2, -1, -1, -2, -1,
    0, -1, 0, 2, 0, 2, -1, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -2, -2, 0,
    0, -4, 0, -1, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -2, -2, 0,
    0, 0, 0, 0, -1, 0, 0, -3,
    -2, 2, 0, -3, -3, -1, 0, -5,
    -1, -4, -1, -2, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 5, 0, 0, -3, 0,
    0, 0, 0, -2, 0, -2, 0, 0,
    0, 0, -1, 0, -4, 0, 0, 7,
    -2, -5, -5, 1, 2, 2, 0, -4,
    1, 2, 1, 5, 1, 5, -1, -4,
    0, 0, -6, 0, 0, -5, -4, 0,
    0, -3, 0, -2, -3, 0, -2, 0,
    -2, 0, -1, 2, 0, -1, -5, -2,
    0, 0, -1, 0, -3, 0, 0, 2,
    -4, 0, 2, -2, 1, 0, 0, -5,
    0, -1, 0, 0, -2, 2, -1, 0,
    0, 0, -7, -2, -4, 0, -5, 0,
    0, -8, 0, 6, -2, 0, -3, 0,
    1, 0, -2, 0, -2, -5, 0, -2,
    0, 0, 0, 0, -1, 0, 0, 2,
    -2, 0, 0, 0, -2, -1, 0, -2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 4, 0, 0, -1, 0,
    0, 0, 0, 0, 0, -2, -2, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 60,
    .right_class_cnt     = 48,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t montserrat_10medium_1bp = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 10,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if MONTSERRAT_10MEDIUM_1BP*/
