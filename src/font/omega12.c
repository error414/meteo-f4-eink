/*******************************************************************************
 * Size: 12 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef OMEGA12
#define OMEGA12 1
#endif

#if OMEGA12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xad, 0x20,

    /* U+0022 "\"" */
    0x90, 0x90,

    /* U+0023 "#" */
    0x25, 0x6c, 0x1, 0x20, 0x16, 0xc9, 0x0,

    /* U+0024 "$" */
    0x34, 0x2, 0x48, 0x9, 0x6, 0x80, 0x9, 0x92,
    0x0, 0xd0,

    /* U+0025 "%" */
    0x20, 0x80, 0x9, 0x8, 0x0, 0x22, 0x3, 0x0,
    0xc0, 0x42, 0x22, 0x40, 0x2, 0x8,

    /* U+0026 "&" */
    0x30, 0x2, 0x10, 0x9, 0x4, 0x0, 0x49, 0x84,
    0x0, 0xc8,

    /* U+0027 "'" */
    0xa0,

    /* U+0028 "(" */
    0x22, 0x9, 0x4, 0x80, 0x80,

    /* U+0029 ")" */
    0x80, 0x82, 0x41, 0x22, 0x0,

    /* U+002A "*" */
    0x10, 0x2, 0x48, 0x3, 0x42, 0x0, 0x1a, 0x92,
    0x0, 0x40,

    /* U+002B "+" */
    0x10, 0x20, 0x5, 0xb0, 0x2, 0x4, 0x0,

    /* U+002C "," */
    0x22, 0x80,

    /* U+002D "-" */
    0xa8,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x2, 0x0, 0x8, 0x0, 0x42, 0x0, 0x10, 0x80,
    0x2, 0x0,

    /* U+0030 "0" */
    0x34, 0x2, 0x8, 0x8, 0x30, 0x40, 0x41, 0x82,
    0x0, 0xd0,

    /* U+0031 "1" */
    0x10, 0x2, 0xc0, 0x1, 0x2, 0x0, 0x8, 0x10,
    0x2, 0xd8,

    /* U+0032 "2" */
    0x34, 0x2, 0x8, 0x0, 0x20, 0x80, 0x8, 0x20,
    0x2, 0xd8,

    /* U+0033 "3" */
    0x34, 0x2, 0x8, 0x0, 0x22, 0x80, 0x1, 0x82,
    0x0, 0xd0,

    /* U+0034 "4" */
    0x2, 0x0, 0x18, 0x1, 0x24, 0x40, 0x5b, 0x2,
    0x0, 0x8,

    /* U+0035 "5" */
    0xb6, 0x2, 0x0, 0x8, 0x16, 0x80, 0x1, 0x82,
    0x0, 0xd0,

    /* U+0036 "6" */
    0x34, 0x2, 0x8, 0x8, 0x16, 0x80, 0x41, 0x82,
    0x0, 0xd0,

    /* U+0037 "7" */
    0xb6, 0x0, 0x8, 0x0, 0x42, 0x0, 0x10, 0x20,
    0x0, 0x80,

    /* U+0038 "8" */
    0x34, 0x2, 0x8, 0x8, 0x26, 0x80, 0x41, 0x82,
    0x0, 0xd0,

    /* U+0039 "9" */
    0x34, 0x2, 0x8, 0x8, 0x26, 0xc0, 0x1, 0x82,
    0x0, 0xd0,

    /* U+003A ":" */
    0x84,

    /* U+003B ";" */
    0x20, 0x11, 0x40,

    /* U+003C "<" */
    0x4, 0x1, 0x0, 0x22, 0x0, 0x8, 0x10, 0x0,
    0x40,

    /* U+003D "=" */
    0xb6, 0x0, 0x5, 0xb0,

    /* U+003E ">" */
    0x80, 0x2, 0x0, 0x10, 0x10, 0x4, 0x20, 0x8,
    0x0,

    /* U+003F "?" */
    0x34, 0x2, 0x8, 0x0, 0x22, 0x80, 0x10, 0x0,
    0x0, 0x80,

    /* U+0040 "@" */
    0x34, 0x2, 0x8, 0x8, 0x72, 0x40, 0x49, 0x84,
    0x0, 0x80,

    /* U+0041 "A" */
    0x34, 0x2, 0x8, 0x8, 0x36, 0xc0, 0x41, 0x82,
    0x2, 0x8,

    /* U+0042 "B" */
    0xb4, 0x2, 0x8, 0x8, 0x36, 0x80, 0x41, 0x82,
    0x2, 0xd0,

    /* U+0043 "C" */
    0x34, 0x2, 0x8, 0x8, 0x10, 0x0, 0x40, 0x82,
    0x0, 0xd0,

    /* U+0044 "D" */
    0xb4, 0x2, 0x8, 0x8, 0x30, 0x40, 0x41, 0x82,
    0x2, 0xd0,

    /* U+0045 "E" */
    0xb6, 0x2, 0x0, 0x8, 0x16, 0x80, 0x40, 0x80,
    0x2, 0xd8,

    /* U+0046 "F" */
    0xb6, 0x2, 0x0, 0x8, 0x16, 0x80, 0x40, 0x80,
    0x2, 0x0,

    /* U+0047 "G" */
    0x34, 0x2, 0x8, 0x8, 0x12, 0xc0, 0x41, 0x82,
    0x0, 0xd8,

    /* U+0048 "H" */
    0x82, 0x2, 0x8, 0x8, 0x36, 0xc0, 0x41, 0x82,
    0x2, 0x8,

    /* U+0049 "I" */
    0x34, 0x0, 0x40, 0x1, 0x2, 0x0, 0x8, 0x10,
    0x2, 0xd8,

    /* U+004A "J" */
    0x36, 0x0, 0x8, 0x0, 0x20, 0x40, 0x1, 0x82,
    0x0, 0xd0,

    /* U+004B "K" */
    0x82, 0x2, 0x10, 0x9, 0x14, 0x0, 0x48, 0x84,
    0x2, 0x8,

    /* U+004C "L" */
    0x80, 0x2, 0x0, 0x8, 0x10, 0x0, 0x40, 0x80,
    0x2, 0xd8,

    /* U+004D "M" */
    0xa6, 0x2, 0x48, 0x9, 0x32, 0x40, 0x41, 0x82,
    0x2, 0x8,

    /* U+004E "N" */
    0x82, 0x2, 0x8, 0xa, 0x32, 0x40, 0x43, 0x82,
    0x2, 0x8,

    /* U+004F "O" */
    0x34, 0x2, 0x8, 0x8, 0x30, 0x40, 0x41, 0x82,
    0x0, 0xd0,

    /* U+0050 "P" */
    0xb4, 0x2, 0x8, 0x8, 0x36, 0x80, 0x40, 0x80,
    0x2, 0x0,

    /* U+0051 "Q" */
    0x34, 0x2, 0x8, 0x8, 0x30, 0x40, 0x49, 0x84,
    0x0, 0xc8,

    /* U+0052 "R" */
    0xb4, 0x2, 0x8, 0x8, 0x36, 0x80, 0x48, 0x84,
    0x2, 0x8,

    /* U+0053 "S" */
    0x34, 0x2, 0x8, 0x8, 0x6, 0x80, 0x1, 0x82,
    0x0, 0xd0,

    /* U+0054 "T" */
    0xb6, 0x0, 0x40, 0x1, 0x2, 0x0, 0x8, 0x10,
    0x0, 0x40,

    /* U+0055 "U" */
    0x82, 0x2, 0x8, 0x8, 0x30, 0x40, 0x41, 0x82,
    0x0, 0xd0,

    /* U+0056 "V" */
    0x82, 0x2, 0x8, 0x8, 0x30, 0x40, 0x41, 0x24,
    0x0, 0x40,

    /* U+0057 "W" */
    0x82, 0x2, 0x8, 0x9, 0x32, 0x40, 0x49, 0x92,
    0x0, 0x90,

    /* U+0058 "X" */
    0x82, 0x0, 0x90, 0x1, 0x2, 0x0, 0x8, 0x24,
    0x2, 0x8,

    /* U+0059 "Y" */
    0x82, 0x2, 0x8, 0x8, 0x24, 0x80, 0x8, 0x10,
    0x0, 0x40,

    /* U+005A "Z" */
    0xb6, 0x0, 0x8, 0x0, 0x42, 0x0, 0x10, 0x80,
    0x2, 0xd8,

    /* U+005B "[" */
    0x22, 0x9, 0x4, 0x80, 0x80,

    /* U+005C "\\" */
    0x80, 0x2, 0x0, 0x2, 0x2, 0x0, 0x2, 0x2,
    0x0, 0x8,

    /* U+005D "]" */
    0x80, 0x82, 0x41, 0x22, 0x0,

    /* U+005E "^" */
    0x0,

    /* U+005F "_" */
    0x0,

    /* U+0060 "`" */
    0x0,

    /* U+0061 "a" */
    0x30, 0x0, 0x4d, 0x2, 0x18, 0x40, 0x30,

    /* U+0062 "b" */
    0x80, 0x8, 0x0, 0xb2, 0x10, 0x21, 0x84, 0x3,
    0x0,

    /* U+0063 "c" */
    0x30, 0x8, 0x60, 0x2, 0x8, 0x40, 0x30,

    /* U+0064 "d" */
    0x4, 0x0, 0x40, 0x36, 0x10, 0x21, 0x84, 0x3,
    0x0,

    /* U+0065 "e" */
    0x30, 0x8, 0x61, 0x2, 0xd8, 0x0, 0x30,

    /* U+0066 "f" */
    0x28, 0x20, 0x8, 0x50, 0x10, 0x80, 0x20,

    /* U+0067 "g" */
    0x30, 0x8, 0x61, 0x0, 0xd0, 0x40, 0x30,

    /* U+0068 "h" */
    0x80, 0x8, 0x0, 0xb2, 0x10, 0x21, 0x84, 0x8,
    0x40,

    /* U+0069 "i" */
    0x20, 0x0, 0xa, 0x10, 0x4, 0x20, 0x2,

    /* U+006A "j" */
    0x4, 0x0, 0x0, 0x14, 0x10, 0x1, 0x84, 0x3,
    0x0,

    /* U+006B "k" */
    0x80, 0x8, 0x0, 0x86, 0x40, 0x28, 0x90, 0x8,
    0x40,

    /* U+006C "l" */
    0xa0, 0x8, 0x2, 0x10, 0x4, 0x20, 0x2,

    /* U+006D "m" */
    0x24, 0x2, 0x4c, 0x90, 0x12, 0x64, 0x80, 0x92,

    /* U+006E "n" */
    0x30, 0x8, 0x61, 0x2, 0x18, 0x40, 0x84,

    /* U+006F "o" */
    0x30, 0x8, 0x61, 0x2, 0x18, 0x40, 0x30,

    /* U+0070 "p" */
    0x30, 0x8, 0x61, 0x2, 0xc8, 0x0, 0x80,

    /* U+0071 "q" */
    0x30, 0x8, 0x61, 0x0, 0xd0, 0x40, 0x4,

    /* U+0072 "r" */
    0x28, 0x21, 0x0, 0x42, 0x0, 0x80,

    /* U+0073 "s" */
    0x30, 0x8, 0x48, 0x0, 0x48, 0x40, 0x30,

    /* U+0074 "t" */
    0x80, 0x2b, 0x0, 0x42, 0x0, 0x28,

    /* U+0075 "u" */
    0x84, 0x8, 0x61, 0x2, 0x18, 0x40, 0x30,

    /* U+0076 "v" */
    0x84, 0x8, 0x61, 0x2, 0x12, 0x40, 0x10,

    /* U+0077 "w" */
    0x82, 0x2, 0x4c, 0x90, 0x12, 0x64, 0x80, 0x24,

    /* U+0078 "x" */
    0x82, 0x0, 0x90, 0x80, 0x2, 0x9, 0x0, 0x82,

    /* U+0079 "y" */
    0x84, 0x8, 0x61, 0x0, 0xd0, 0x40, 0x30,

    /* U+007A "z" */
    0xb4, 0x0, 0x44, 0x0, 0x88, 0x0, 0xb4,

    /* U+007B "{" */
    0x22, 0x9, 0x4, 0x80, 0x80,

    /* U+007C "|" */
    0xad, 0xa0,

    /* U+007D "}" */
    0x80, 0x82, 0x41, 0x22, 0x0,

    /* U+007E "~" */
    0x0,

    /* U+00A0 " " */
    0x0,

    /* U+00A1 "¡" */
    0x8d, 0xa0,

    /* U+00A2 "¢" */
    0x30, 0x8, 0x60, 0x2, 0x10, 0xc,

    /* U+00A3 "£" */
    0x14, 0x0, 0x88, 0x2, 0x16, 0x80, 0x10, 0x20,
    0x2, 0xd8,

    /* U+00A4 "¤" */
    0x14, 0x0, 0x88, 0x2, 0x16, 0x80, 0x10, 0x22,
    0x0, 0x50,

    /* U+00A5 "¥" */
    0x82, 0x2, 0x8, 0x2, 0x42, 0x0, 0x1a, 0x10,
    0x0, 0x40,

    /* U+00A6 "¦" */
    0xa9, 0xa0,

    /* U+00A8 "¨" */
    0x0,

    /* U+00A9 "©" */
    0x36, 0x40, 0x40, 0x12, 0x99, 0x8, 0x2, 0x53,
    0x1, 0x0, 0x1b, 0x0,

    /* U+00AA "ª" */
    0x50, 0x42, 0xb8, 0xc6, 0x2a, 0x50,

    /* U+00AB "«" */
    0x0,

    /* U+00AC "¬" */
    0x0,

    /* U+00AD "­" */
    0xb6,

    /* U+00AE "®" */
    0x0,

    /* U+00AF "¯" */
    0x0,

    /* U+00B0 "°" */
    0x20, 0x23, 0x10, 0x10,

    /* U+00B2 "²" */
    0x0,

    /* U+00B3 "³" */
    0x0,

    /* U+00B4 "´" */
    0x0,

    /* U+00B6 "¶" */
    0x0,

    /* U+00B7 "·" */
    0x80,

    /* U+00B8 "¸" */
    0x0,

    /* U+00B9 "¹" */
    0x0,

    /* U+00BA "º" */
    0x54, 0x63, 0x18, 0xc6, 0x2a, 0x50,

    /* U+00BB "»" */
    0x0,

    /* U+00BC "¼" */
    0x0,

    /* U+00BD "½" */
    0x0,

    /* U+00BE "¾" */
    0x0,

    /* U+00BF "¿" */
    0x4, 0x0, 0x0, 0x0, 0x46, 0x0, 0x40, 0x82,
    0x0, 0xd0,

    /* U+00C0 "À" */
    0x0,

    /* U+00C1 "Á" */
    0x0,

    /* U+00C2 "Â" */
    0x0,

    /* U+00C3 "Ã" */
    0x0,

    /* U+00C4 "Ä" */
    0x0,

    /* U+00C5 "Å" */
    0x0,

    /* U+00C6 "Æ" */
    0x0,

    /* U+00C7 "Ç" */
    0x0,

    /* U+00C8 "È" */
    0x0,

    /* U+00C9 "É" */
    0x0,

    /* U+00CA "Ê" */
    0x0,

    /* U+00CB "Ë" */
    0x0,

    /* U+00CC "Ì" */
    0x0,

    /* U+00CD "Í" */
    0x0,

    /* U+00CE "Î" */
    0x0,

    /* U+00CF "Ï" */
    0x0,

    /* U+00D0 "Ð" */
    0xb4, 0x2, 0x8, 0x8, 0x34, 0x40, 0x41, 0x82,
    0x2, 0xd0,

    /* U+00D1 "Ñ" */
    0x0,

    /* U+00D2 "Ò" */
    0x0,

    /* U+00D3 "Ó" */
    0x0,

    /* U+00D4 "Ô" */
    0x0,

    /* U+00D5 "Õ" */
    0x0,

    /* U+00D6 "Ö" */
    0x0,

    /* U+00D8 "Ø" */
    0x0,

    /* U+00D9 "Ù" */
    0x0,

    /* U+00DA "Ú" */
    0x0,

    /* U+00DB "Û" */
    0x0,

    /* U+00DC "Ü" */
    0x0,

    /* U+00DD "Ý" */
    0x0,

    /* U+00DE "Þ" */
    0x80, 0x2, 0xd0, 0x8, 0x30, 0x40, 0x5a, 0x80,
    0x2, 0x0,

    /* U+00DF "ß" */
    0x30, 0x8, 0x40, 0x86, 0xc0, 0x21, 0x84, 0x9,
    0x0,

    /* U+00E0 "à" */
    0x0,

    /* U+00E1 "á" */
    0x0,

    /* U+00E2 "â" */
    0x0,

    /* U+00E3 "ã" */
    0x0,

    /* U+00E4 "ä" */
    0x0,

    /* U+00E5 "å" */
    0x0,

    /* U+00E6 "æ" */
    0x0,

    /* U+00E7 "ç" */
    0x0,

    /* U+00E8 "è" */
    0x0,

    /* U+00E9 "é" */
    0x0,

    /* U+00EA "ê" */
    0x0,

    /* U+00EB "ë" */
    0x0,

    /* U+00EC "ì" */
    0x0,

    /* U+00ED "í" */
    0x0,

    /* U+00EE "î" */
    0x0,

    /* U+00EF "ï" */
    0x0,

    /* U+00F0 "ð" */
    0x10, 0x0, 0x40, 0x36, 0x10, 0x21, 0x84, 0x3,
    0x0,

    /* U+00F1 "ñ" */
    0x0,

    /* U+00F2 "ò" */
    0x0,

    /* U+00F3 "ó" */
    0x0,

    /* U+00F4 "ô" */
    0x0,

    /* U+00F5 "õ" */
    0x0,

    /* U+00F6 "ö" */
    0x0,

    /* U+00F7 "÷" */
    0x10, 0x0, 0x5, 0xb0, 0x0, 0x4, 0x0,

    /* U+00F8 "ø" */
    0x0,

    /* U+00F9 "ù" */
    0x0,

    /* U+00FA "ú" */
    0x0,

    /* U+00FB "û" */
    0x0,

    /* U+00FC "ü" */
    0x0,

    /* U+00FE "þ" */
    0x80, 0x8, 0x0, 0xb2, 0x10, 0x21, 0xb0, 0x8,
    0x0,

    /* U+00FF "ÿ" */
    0x0,

    /* U+0131 "ı" */
    0x0,

    /* U+0141 "Ł" */
    0x80, 0x2, 0x0, 0x8, 0x14, 0x0, 0x40, 0x80,
    0x2, 0xd8,

    /* U+0142 "ł" */
    0xa0, 0x8, 0x2, 0x54, 0x4, 0x20, 0x2a,

    /* U+0152 "Œ" */
    0x0,

    /* U+0153 "œ" */
    0x0,

    /* U+0160 "Š" */
    0x0,

    /* U+0161 "š" */
    0x0,

    /* U+0178 "Ÿ" */
    0x0,

    /* U+017D "Ž" */
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 43, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 91, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 5, .adv_w = 139, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 12, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 22, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 43, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 47, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 52, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 57, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 139, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 74, .adv_w = 67, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 76, .adv_w = 91, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 77, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 188, .adv_w = 43, .box_w = 1, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 67, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 139, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 205, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 254, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 324, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 374, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 424, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 434, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 499, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 135, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 517, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 563, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 604, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 626, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 91, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 688, .adv_w = 139, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 703, .adv_w = 115, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 715, .adv_w = 139, .box_w = 1, .box_h = 11, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 67, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 63, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 43, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 726, .adv_w = 115, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 732, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 139, .box_w = 1, .box_h = 11, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 764, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 163, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 115, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 783, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 784, .adv_w = 230, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 139, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 786, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 788, .adv_w = 91, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 792, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 796, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 797, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 115, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 805, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 806, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 821, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 823, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 824, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 825, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 826, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 827, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 831, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 834, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 845, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 846, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 847, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 850, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 851, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 852, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 857, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 876, .adv_w = 4, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 6, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 13, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 880, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 882, .adv_w = 14, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 883, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 884, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 15, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 887, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 888, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 891, .adv_w = 16, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 901, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 17, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 905, .adv_w = 17, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 906, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 907, .adv_w = 139, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 914, .adv_w = 17, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 915, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 917, .adv_w = 18, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 1, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 928, .adv_w = 4, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 929, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 139, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 91, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 948, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 950, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 4, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_1[] = {
    0, 1, 2, 3, 4, 5, 6, 0,
    7, 8, 9, 10, 11, 12, 13, 14,
    15, 0, 16, 17, 18
};

static const uint16_t unicode_list_4[] = {
    0x0, 0x1, 0x33, 0x43, 0x44, 0x54, 0x55, 0x62,
    0x63, 0x7a, 0x7f
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 160, .range_length = 21, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_1, .list_length = 21, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 182, .range_length = 33, .glyph_id_start = 115,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 216, .range_length = 37, .glyph_id_start = 148,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 254, .range_length = 128, .glyph_id_start = 185,
        .unicode_list = unicode_list_4, .glyph_id_ofs_list = NULL, .list_length = 11, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 5,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t omega12 = {
#else
lv_font_t omega12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 11,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if OMEGA12*/

