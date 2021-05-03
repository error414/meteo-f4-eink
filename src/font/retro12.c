/*******************************************************************************
 * Size: 11 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef RETRO12
#define RETRO12 1
#endif

#if RETRO12

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xcf,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x33, 0xc, 0xcf, 0xfc, 0xcc, 0x33, 0x3f, 0xf3,
    0x30, 0xcc,

    /* U+0024 "$" */
    0x18, 0x31, 0xf6, 0xbd, 0xf, 0x85, 0x8b, 0xd6,
    0xf8, 0x60, 0xc0,

    /* U+0025 "%" */
    0x67, 0x4f, 0x30, 0xc3, 0xc, 0xf2, 0xe6,

    /* U+0026 "&" */
    0x7c, 0xc6, 0xc0, 0x70, 0xc7, 0xc6, 0xc6, 0x7c,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x36, 0xcc, 0xcc, 0x63,

    /* U+0029 ")" */
    0xc6, 0x33, 0x33, 0x6c,

    /* U+002A "*" */
    0x66, 0x1c, 0xff, 0x1c, 0x66,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30,

    /* U+002C "," */
    0x6f, 0x0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0xc, 0x30, 0xc3, 0xc, 0x30, 0x60,

    /* U+0030 "0" */
    0x7d, 0x8f, 0x3e, 0xff, 0x7c, 0xf1, 0xbe,

    /* U+0031 "1" */
    0x6e, 0x66, 0x66, 0x6f,

    /* U+0032 "2" */
    0x7d, 0x8c, 0x1b, 0xec, 0x18, 0x31, 0xff,

    /* U+0033 "3" */
    0xfe, 0x18, 0x61, 0xe0, 0x60, 0xf1, 0xbe,

    /* U+0034 "4" */
    0x1e, 0x6d, 0x9e, 0x3f, 0xe0, 0xc1, 0x83,

    /* U+0035 "5" */
    0xfd, 0x83, 0x7, 0xe0, 0x60, 0xf1, 0xbe,

    /* U+0036 "6" */
    0x7d, 0x8f, 0x7, 0xec, 0x78, 0xf1, 0xbe,

    /* U+0037 "7" */
    0xff, 0x8c, 0x30, 0xc3, 0x6, 0xc, 0x18,

    /* U+0038 "8" */
    0x7d, 0x8f, 0x1b, 0xec, 0x78, 0xf1, 0xbe,

    /* U+0039 "9" */
    0x7d, 0x8f, 0x1e, 0x37, 0xe0, 0xf1, 0xbe,

    /* U+003A ":" */
    0xf0, 0xf0,

    /* U+003B ";" */
    0x6c, 0x6, 0xf0,

    /* U+003C "<" */
    0x19, 0x99, 0x86, 0x18, 0x60,

    /* U+003D "=" */
    0xf8, 0x3e,

    /* U+003E ">" */
    0xc3, 0xc, 0x33, 0x33, 0x0,

    /* U+003F "?" */
    0x7d, 0x8c, 0x18, 0xe3, 0x0, 0xc, 0x18,

    /* U+0040 "@" */
    0x7d, 0x6, 0xed, 0x5a, 0xb7, 0xe0, 0x3e,

    /* U+0041 "A" */
    0x38, 0xdb, 0x1e, 0x3f, 0xf8, 0xf1, 0xe3,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x1f, 0xec, 0x78, 0xf1, 0xfe,

    /* U+0043 "C" */
    0x3c, 0xcf, 0x6, 0xc, 0x18, 0x19, 0x9e,

    /* U+0044 "D" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x78, 0xf3, 0x7c,

    /* U+0045 "E" */
    0xff, 0x83, 0x7, 0xcc, 0x18, 0x30, 0x7f,

    /* U+0046 "F" */
    0xff, 0x83, 0x7, 0xcc, 0x18, 0x30, 0x60,

    /* U+0047 "G" */
    0x3c, 0xcf, 0x6, 0xfc, 0x78, 0xd9, 0x9f,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1f, 0xfc, 0x78, 0xf1, 0xe3,

    /* U+0049 "I" */
    0xfc, 0xc3, 0xc, 0x30, 0xc3, 0x3f,

    /* U+004A "J" */
    0x3e, 0xc, 0x18, 0x30, 0x78, 0xf1, 0xbe,

    /* U+004B "K" */
    0xc7, 0x9b, 0x67, 0x8d, 0x99, 0xb1, 0xe3,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x3f,

    /* U+004D "M" */
    0x83, 0x8f, 0xbf, 0xfd, 0x78, 0xf1, 0xe3,

    /* U+004E "N" */
    0x87, 0x8f, 0x9f, 0xbd, 0xf9, 0xf1, 0xe1,

    /* U+004F "O" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0050 "P" */
    0xfd, 0x8f, 0x1f, 0xec, 0x18, 0x30, 0x60,

    /* U+0051 "Q" */
    0x7d, 0x8f, 0x1e, 0x3c, 0x7b, 0xf3, 0x3d,

    /* U+0052 "R" */
    0xfd, 0x8f, 0x1f, 0xec, 0x78, 0xf1, 0xe3,

    /* U+0053 "S" */
    0x7d, 0x8f, 0x3, 0xe0, 0x60, 0xf1, 0xbe,

    /* U+0054 "T" */
    0xfe, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xbe,

    /* U+0056 "V" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x6d, 0x8e, 0x8,

    /* U+0057 "W" */
    0xcb, 0xcb, 0xcb, 0xcb, 0xcb, 0xff, 0xe7, 0x42,

    /* U+0058 "X" */
    0xc7, 0x8d, 0xb1, 0xc6, 0xd8, 0xf1, 0xe3,

    /* U+0059 "Y" */
    0xc7, 0x8f, 0x1b, 0x63, 0x83, 0x6, 0xc,

    /* U+005A "Z" */
    0xfe, 0xc, 0x30, 0xc3, 0xc, 0x30, 0x7f,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcf,

    /* U+005C "\\" */
    0xc1, 0x81, 0x81, 0x81, 0x81, 0x81, 0x83,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x38, 0xdb, 0x18,

    /* U+005F "_" */
    0xf8,

    /* U+0060 "`" */
    0xc6, 0x30,

    /* U+0061 "a" */
    0x7c, 0xd, 0xfe, 0x37, 0xe0,

    /* U+0062 "b" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xfe,

    /* U+0063 "c" */
    0x7d, 0x8f, 0x6, 0x37, 0xc0,

    /* U+0064 "d" */
    0x6, 0xc, 0x1b, 0xfc, 0x78, 0xf1, 0xbf,

    /* U+0065 "e" */
    0x7d, 0x8f, 0xfe, 0x7, 0xc0,

    /* U+0066 "f" */
    0x3b, 0x19, 0xf6, 0x31, 0x8c,

    /* U+0067 "g" */
    0x7f, 0x8f, 0x1e, 0x37, 0xe0, 0xc1, 0xbe,

    /* U+0068 "h" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xe3,

    /* U+0069 "i" */
    0xf3, 0xff,

    /* U+006A "j" */
    0x18, 0xc0, 0x31, 0x8c, 0x7b, 0x70,

    /* U+006B "k" */
    0xc3, 0xc, 0x33, 0xdb, 0xcd, 0xb3,

    /* U+006C "l" */
    0xdb, 0x6d, 0xb3,

    /* U+006D "m" */
    0xfd, 0xaf, 0x5e, 0xbd, 0x60,

    /* U+006E "n" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x60,

    /* U+006F "o" */
    0x7d, 0x8f, 0x1e, 0x37, 0xc0,

    /* U+0070 "p" */
    0xfd, 0x8f, 0x1e, 0x3f, 0xd8, 0x30, 0x60,

    /* U+0071 "q" */
    0x7f, 0x8f, 0x1e, 0x37, 0xe0, 0xc1, 0x83,

    /* U+0072 "r" */
    0xdf, 0x8c, 0x30, 0xc0,

    /* U+0073 "s" */
    0x7d, 0x81, 0xf0, 0x3f, 0xc0,

    /* U+0074 "t" */
    0x63, 0x19, 0xf6, 0x31, 0x87,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x37, 0xc0,

    /* U+0076 "v" */
    0xc7, 0x8f, 0x1b, 0x63, 0x80,

    /* U+0077 "w" */
    0xd7, 0xaf, 0x5e, 0xb6, 0xc0,

    /* U+0078 "x" */
    0xc6, 0xf8, 0xe3, 0x6c, 0x60,

    /* U+0079 "y" */
    0xc7, 0x8f, 0x1e, 0x37, 0xe0, 0xc1, 0xbe,

    /* U+007A "z" */
    0xfe, 0x38, 0xe3, 0x8f, 0xe0,

    /* U+007B "{" */
    0x36, 0x6c, 0x66, 0x63,

    /* U+007C "|" */
    0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc6, 0x63, 0x66, 0x6c,

    /* U+007E "~" */
    0x62, 0xd1, 0x80,

    /* U+00A1 "¡" */
    0xf3, 0xff,

    /* U+00A2 "¢" */
    0x10, 0xfb, 0x5e, 0x8d, 0x6f, 0x84, 0x0,

    /* U+00A3 "£" */
    0x3c, 0xcd, 0x87, 0xe6, 0xc, 0x18, 0x7f,

    /* U+00A4 "¤" */
    0xb2, 0x89, 0x12, 0x2b, 0x20,

    /* U+00A5 "¥" */
    0xc7, 0x8f, 0x1b, 0x6f, 0xe3, 0x3f, 0x8c,

    /* U+00A6 "¦" */
    0xf8, 0xf8,

    /* U+00A7 "§" */
    0x7d, 0x8f, 0xe2, 0x23, 0xc0, 0xf1, 0xbe,

    /* U+00A8 "¨" */
    0xde, 0xc0,

    /* U+00A9 "©" */
    0x7f, 0x60, 0xf3, 0xfb, 0x3d, 0x9e, 0x7f, 0x6,
    0xfe,

    /* U+00AA "ª" */
    0x61, 0x79, 0xf7,

    /* U+00AB "«" */
    0x19, 0x99, 0x99, 0x99, 0x86, 0x61, 0x98, 0x66,

    /* U+00AE "®" */
    0x7b, 0xff, 0xfd, 0xfd, 0xe0,

    /* U+00B1 "±" */
    0x30, 0xcf, 0xcc, 0x30, 0xf, 0xc0,

    /* U+00B5 "µ" */
    0xc3, 0x87, 0xf, 0x7d, 0xb8, 0x30, 0x60,

    /* U+00B6 "¶" */
    0x7f, 0xf7, 0xeb, 0xd0, 0xa1, 0x42, 0x87,

    /* U+00BB "»" */
    0xcc, 0x33, 0xc, 0xc3, 0x33, 0x33, 0x33, 0x30,

    /* U+00BF "¿" */
    0x18, 0x30, 0x0, 0xc7, 0x18, 0x31, 0xbe,

    /* U+00C0 "À" */
    0x30, 0x30, 0x1, 0xc6, 0xd8, 0xf1, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+00C1 "Á" */
    0xc, 0x30, 0x1, 0xc6, 0xd8, 0xf1, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+00C2 "Â" */
    0x38, 0xd8, 0x1, 0xc6, 0xd8, 0xf1, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+00C3 "Ã" */
    0x14, 0x50, 0x1, 0xc6, 0xd8, 0xf1, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+00C4 "Ä" */
    0x6c, 0xd8, 0x1, 0xc6, 0xd8, 0xf1, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+00C5 "Å" */
    0x10, 0x50, 0x41, 0xc6, 0xd8, 0xf1, 0xff, 0xc7,
    0x8f, 0x18,

    /* U+00C6 "Æ" */
    0x3f, 0xdb, 0xc, 0xc3, 0x3e, 0xfc, 0x33, 0xc,
    0xc3, 0x3f,

    /* U+00C7 "Ç" */
    0x3c, 0xcf, 0x6, 0xc, 0x18, 0x19, 0x9e, 0xc,
    0x70,

    /* U+00C8 "È" */
    0x30, 0x18, 0x0, 0xff, 0xc0, 0xc0, 0xfc, 0xc0,
    0xc0, 0xc0, 0xff,

    /* U+00C9 "É" */
    0xc, 0x18, 0x0, 0xff, 0xc0, 0xc0, 0xfc, 0xc0,
    0xc0, 0xc0, 0xff,

    /* U+00CA "Ê" */
    0x38, 0xd8, 0x7, 0xfc, 0x18, 0x3e, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+00CB "Ë" */
    0x6c, 0xd8, 0x7, 0xfc, 0x18, 0x3e, 0x60, 0xc1,
    0x83, 0xf8,

    /* U+00CC "Ì" */
    0x60, 0xc0, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+00CD "Í" */
    0x18, 0xc0, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+00CE "Î" */
    0x39, 0xb0, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+00CF "Ï" */
    0x6d, 0xb0, 0x3f, 0x30, 0xc3, 0xc, 0x30, 0xcf,
    0xc0,

    /* U+00D0 "Ð" */
    0x7c, 0x66, 0x63, 0xfb, 0x63, 0x63, 0x62, 0x7c,

    /* U+00D1 "Ñ" */
    0x14, 0x50, 0x4, 0x3c, 0x7e, 0xff, 0xef, 0xcf,
    0x8f, 0x8,

    /* U+00D2 "Ò" */
    0x30, 0x30, 0x3, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00D3 "Ó" */
    0xc, 0x30, 0x3, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00D4 "Ô" */
    0x38, 0xd8, 0x3, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00D5 "Õ" */
    0x14, 0x50, 0x3, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00D6 "Ö" */
    0x6c, 0xd8, 0x3, 0xec, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00D7 "×" */
    0x8a, 0x88, 0xa8, 0x80,

    /* U+00D8 "Ø" */
    0x7b, 0x8b, 0x3e, 0xbd, 0x7c, 0xd1, 0xdc,

    /* U+00D9 "Ù" */
    0x30, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00DA "Ú" */
    0xc, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00DB "Û" */
    0x38, 0xd8, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00DC "Ü" */
    0x6c, 0xd8, 0x6, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xf0,

    /* U+00DD "Ý" */
    0xc, 0x30, 0x6, 0x3c, 0x78, 0xdb, 0x1c, 0x18,
    0x30, 0x60,

    /* U+00DE "Þ" */
    0xc1, 0xfb, 0x1e, 0x3c, 0x78, 0xff, 0x60,

    /* U+00DF "ß" */
    0xf9, 0x9b, 0x36, 0xcd, 0x99, 0xb5, 0xee,

    /* U+00E0 "à" */
    0x30, 0x30, 0x3, 0xe0, 0x6f, 0xf1, 0xbf,

    /* U+00E1 "á" */
    0xc, 0x30, 0x3, 0xe0, 0x6f, 0xf1, 0xbf,

    /* U+00E2 "â" */
    0x38, 0xd8, 0x3, 0xe0, 0x6f, 0xf1, 0xbf,

    /* U+00E3 "ã" */
    0x14, 0x50, 0x3, 0xe0, 0x6f, 0xf1, 0xbf,

    /* U+00E4 "ä" */
    0x6c, 0xd8, 0x3, 0xe0, 0x6f, 0xf1, 0xbf,

    /* U+00E5 "å" */
    0x10, 0x50, 0x43, 0xe0, 0x6f, 0xf1, 0xbf,

    /* U+00E6 "æ" */
    0x7d, 0xf0, 0x38, 0xdf, 0xff, 0x8e, 0x7, 0xdf,
    0x0,

    /* U+00E7 "ç" */
    0x7d, 0x8f, 0x6, 0x37, 0xc1, 0x8e, 0x0,

    /* U+00E8 "è" */
    0x30, 0x30, 0x3, 0xec, 0x7f, 0xf0, 0x3e,

    /* U+00E9 "é" */
    0xc, 0x30, 0x3, 0xec, 0x7f, 0xf0, 0x3e,

    /* U+00EA "ê" */
    0x38, 0xd8, 0x3, 0xec, 0x7f, 0xf0, 0x3e,

    /* U+00EB "ë" */
    0x6c, 0xd8, 0x3, 0xec, 0x7f, 0xf0, 0x3e,

    /* U+00EC "ì" */
    0xcc, 0x36, 0xdb,

    /* U+00ED "í" */
    0x78, 0x6d, 0xb6,

    /* U+00EE "î" */
    0x76, 0xc0, 0x63, 0x18, 0xc6,

    /* U+00EF "ï" */
    0xde, 0xc0, 0x63, 0x18, 0xc6,

    /* U+00F0 "ð" */
    0x6, 0x1f, 0x6, 0x7e, 0xc6, 0xc6, 0xc6, 0x7c,

    /* U+00F1 "ñ" */
    0x14, 0x50, 0x7, 0xec, 0x78, 0xf1, 0xe3,

    /* U+00F2 "ò" */
    0x30, 0x30, 0x3, 0xec, 0x78, 0xf1, 0xbe,

    /* U+00F3 "ó" */
    0xc, 0x30, 0x3, 0xec, 0x78, 0xf1, 0xbe,

    /* U+00F4 "ô" */
    0x38, 0xd8, 0x3, 0xec, 0x78, 0xf1, 0xbe,

    /* U+00F5 "õ" */
    0x14, 0x50, 0x3, 0xec, 0x78, 0xf1, 0xbe,

    /* U+00F6 "ö" */
    0x6c, 0xd8, 0x3, 0xec, 0x78, 0xf1, 0xbe,

    /* U+00F7 "÷" */
    0x30, 0xf, 0xc0, 0x30,

    /* U+00F8 "ø" */
    0x7f, 0x9f, 0xff, 0x3f, 0xc0,

    /* U+00F9 "ù" */
    0x30, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+00FA "ú" */
    0xc, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+00FB "û" */
    0x38, 0xd8, 0x6, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+00FC "ü" */
    0x6c, 0xd8, 0x6, 0x3c, 0x78, 0xf1, 0xbf,

    /* U+00FD "ý" */
    0xc, 0x30, 0x6, 0x3c, 0x78, 0xf1, 0xbf, 0x6,
    0xd, 0xf0,

    /* U+00FE "þ" */
    0xc1, 0x83, 0x7, 0xec, 0x78, 0xf1, 0xfe, 0xc1,
    0x83, 0x0,

    /* U+00FF "ÿ" */
    0x6c, 0xd8, 0x6, 0x3c, 0x78, 0xf1, 0xbf, 0x6,
    0xd, 0xf0,

    /* U+0178 "Ÿ" */
    0x6c, 0xd8, 0x6, 0x3c, 0x78, 0xdb, 0x1c, 0x18,
    0x30, 0x60
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 56, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 104, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 5, .adv_w = 184, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 136, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 26, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 152, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 56, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 42, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 152, .box_w = 8, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 55, .adv_w = 120, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 59, .adv_w = 56, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 88, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 62, .adv_w = 56, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 56, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 56, .box_w = 3, .box_h = 7, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 142, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 104, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 149, .adv_w = 104, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 168, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 189, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 224, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 152, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 349, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 353, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 136, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 367, .adv_w = 104, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 370, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 382, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 387, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 411, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 56, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 104, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 426, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 72, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 445, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 457, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 464, .adv_w = 120, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 473, .adv_w = 104, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 498, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 505, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 56, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 517, .adv_w = 88, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 120, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 524, .adv_w = 56, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 136, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 533, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 540, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 545, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 48, .box_w = 1, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 554, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 104, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 563, .adv_w = 168, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 88, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 575, .adv_w = 168, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 120, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 588, .adv_w = 120, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 594, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 601, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 168, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 616, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 623, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 663, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 184, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 693, .adv_w = 136, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 702, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 713, .adv_w = 136, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 734, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 753, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 120, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 780, .adv_w = 152, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 788, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 798, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 838, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 104, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 852, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 879, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 899, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 930, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 958, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 232, .box_w = 13, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 136, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 981, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 995, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 56, .box_w = 3, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1012, .adv_w = 72, .box_w = 3, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1015, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1020, .adv_w = 80, .box_w = 5, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1025, .adv_w = 152, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1033, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1040, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1061, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 120, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1079, .adv_w = 136, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1084, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1091, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 136, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1112, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1122, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1132, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1142, .adv_w = 136, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x3, 0x7, 0x8, 0xd
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 161, .range_length = 11, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 174, .range_length = 14, .glyph_id_start = 107,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 5, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 191, .range_length = 65, .glyph_id_start = 112,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 376, .range_length = 1, .glyph_id_start = 177,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
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
const lv_font_t retro12 = {
#else
lv_font_t retro12 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = 1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if RETRO12*/

