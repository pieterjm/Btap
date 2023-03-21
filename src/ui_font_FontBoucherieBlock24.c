/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: --bpp 1 --size 24 --font /home/nl077-lab-0028/Downloads/SquarLine_Studio/Test Project/assets/Boucherie Block.otf -o /home/nl077-lab-0028/Downloads/SquarLine_Studio/Test Project/assets/ui_font_FontBoucherieBlock24.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONTBOUCHERIEBLOCK24
#define UI_FONT_FONTBOUCHERIEBLOCK24 1
#endif

#if UI_FONT_FONTBOUCHERIEBLOCK24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xf6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x6,
    0x66,

    /* U+0022 "\"" */
    0xcf, 0x3c, 0xf3, 0x88,

    /* U+0023 "#" */
    0xe, 0x70, 0x73, 0x3, 0x18, 0xff, 0xf7, 0xff,
    0x86, 0x70, 0x73, 0x83, 0x98, 0x18, 0xc7, 0xff,
    0xff, 0xfe, 0x33, 0x83, 0x9c, 0x8, 0x40,

    /* U+0024 "$" */
    0x18, 0xfe, 0xff, 0xdb, 0xdb, 0xdb, 0xd9, 0xf8,
    0xf8, 0x7c, 0x1e, 0x1f, 0x9b, 0xdb, 0xdb, 0xdb,
    0xdb, 0xff, 0xff, 0x18,

    /* U+0025 "%" */
    0xfe, 0xe, 0x3f, 0xc3, 0x8c, 0x31, 0xc3, 0xc,
    0xf0, 0xc3, 0x38, 0x30, 0xdc, 0xf, 0xf7, 0x3,
    0xfb, 0x80, 0x0, 0xe0, 0x0, 0x70, 0x0, 0x3f,
    0xf8, 0xe, 0xff, 0x7, 0x30, 0xc1, 0xcc, 0x30,
    0xe3, 0xc, 0x38, 0xc3, 0x1c, 0x3f, 0xc6, 0xf,
    0xe0,

    /* U+0026 "&" */
    0x7f, 0xf, 0xe1, 0x8c, 0x31, 0x86, 0x30, 0xc2,
    0x18, 0x3, 0xe0, 0x3c, 0x6f, 0x3f, 0xcf, 0x63,
    0xcc, 0x79, 0x83, 0x30, 0x66, 0xc, 0xff, 0x9f,
    0xf0,

    /* U+0027 "'" */
    0xff, 0x80,

    /* U+0028 "(" */
    0x19, 0xcc, 0xc6, 0x73, 0x18, 0xc6, 0x31, 0x8c,
    0x71, 0x8e, 0x31, 0xc0,

    /* U+0029 ")" */
    0xc7, 0x1c, 0xe3, 0x1c, 0x63, 0x18, 0xc6, 0x31,
    0x98, 0xce, 0x67, 0x0,

    /* U+002A "*" */
    0x11, 0x27, 0xf9, 0xcf, 0xf2, 0xc6, 0xc,

    /* U+002B "+" */
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xff, 0xff, 0xf0,
    0xc0, 0x30, 0xc, 0x3, 0x0,

    /* U+002C "," */
    0xff, 0xf7, 0x6c,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x0, 0xe0, 0x18, 0x7, 0x0, 0xc0, 0x18, 0x6,
    0x0, 0xc0, 0x30, 0x6, 0x1, 0xc0, 0x30, 0xe,
    0x1, 0x80, 0x70, 0xc, 0x3, 0x80, 0x60, 0xc,
    0x0,

    /* U+0030 "0" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0031 "1" */
    0x6e, 0xee, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x6f,

    /* U+0032 "2" */
    0x7f, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0x83, 0x7,
    0xe, 0x1c, 0x18, 0x38, 0x70, 0xe0, 0xc0, 0xc1,
    0xff, 0xff,

    /* U+0033 "3" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0x8f, 0x3c,
    0x3e, 0x27, 0x3, 0x3, 0x43, 0xc3, 0xc3, 0xc3,
    0xff, 0xff,

    /* U+0034 "4" */
    0xf1, 0xec, 0x19, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x33, 0x6, 0x7f, 0xcf, 0xf9, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0,
    0x3c,

    /* U+0035 "5" */
    0x7f, 0x7f, 0x61, 0x60, 0x60, 0x60, 0x60, 0x7f,
    0x7f, 0x3, 0x3, 0x3, 0x43, 0xc3, 0xc3, 0xc3,
    0xff, 0xff,

    /* U+0036 "6" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc2, 0xc0, 0xc0,
    0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7f,

    /* U+0037 "7" */
    0xff, 0xff, 0xe0, 0xc0, 0xe0, 0x70, 0x30, 0x38,
    0x18, 0x1c, 0xe, 0x6, 0x7, 0x3, 0x81, 0x81,
    0xc0, 0xe0, 0x70, 0x78, 0x0,

    /* U+0038 "8" */
    0x7f, 0xbf, 0xd8, 0x6c, 0x36, 0x1b, 0xd, 0xce,
    0x7e, 0x3e, 0x7f, 0xf8, 0xf8, 0x3c, 0x1e, 0xf,
    0x7, 0x83, 0xff, 0xff, 0xc0,

    /* U+0039 "9" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xff, 0x3, 0x3, 0x83, 0xc3, 0xc3, 0xc3,
    0xff, 0x7f,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0x77, 0x70, 0x77, 0x77, 0x6c,

    /* U+003C "<" */
    0x1, 0x3, 0xc3, 0xc7, 0x87, 0x87, 0x3, 0x81,
    0xe0, 0x3c, 0x7, 0x81, 0xe0, 0x20,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0x40, 0x78, 0x1e, 0x3, 0xc0, 0xf0, 0x1c, 0xe,
    0xf, 0x1e, 0x3c, 0x3c, 0x8, 0x0,

    /* U+003F "?" */
    0xff, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0x3, 0x7,
    0xe, 0xe, 0x1c, 0x38, 0x30, 0x30, 0x0, 0x30,
    0x30, 0x30,

    /* U+0040 "@" */
    0xff, 0xff, 0xff, 0xfc, 0x0, 0xf0, 0x3, 0xcf,
    0x8f, 0x3f, 0x3c, 0xcc, 0xf3, 0x33, 0xcc, 0xcf,
    0xf, 0x3c, 0x7c, 0xf3, 0xb3, 0xcc, 0xcf, 0x33,
    0x3c, 0xcc, 0xf3, 0x33, 0xef, 0xff, 0xbd, 0xf0,

    /* U+0041 "A" */
    0xf, 0xc0, 0x1e, 0x0, 0x78, 0x1, 0xe0, 0xf,
    0xc0, 0x37, 0x0, 0xdc, 0x3, 0x30, 0x1c, 0xe0,
    0x63, 0x81, 0x8e, 0x6, 0x78, 0x3f, 0xe0, 0xfd,
    0xc3, 0xc3, 0xc, 0xc, 0x70, 0x3b, 0xe1, 0xe0,

    /* U+0042 "B" */
    0xff, 0x1f, 0xe6, 0x19, 0x86, 0x61, 0x98, 0x66,
    0x39, 0xbc, 0x7f, 0x9f, 0xf7, 0xd, 0x83, 0x60,
    0xd8, 0x36, 0xd, 0x83, 0x7f, 0xff, 0xf0,

    /* U+0043 "C" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc2, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0044 "D" */
    0xff, 0x9f, 0xf6, 0xd, 0x83, 0x60, 0xd8, 0x36,
    0xd, 0x83, 0x60, 0xd8, 0x36, 0xd, 0x83, 0x60,
    0xd8, 0x36, 0xd, 0x83, 0x7f, 0xff, 0xf0,

    /* U+0045 "E" */
    0xff, 0xbf, 0xd8, 0x6c, 0x36, 0x13, 0x1, 0x80,
    0xc0, 0x66, 0x3f, 0x1f, 0xe, 0x6, 0xb, 0xd,
    0x86, 0xc3, 0x7f, 0xff, 0xc0,

    /* U+0046 "F" */
    0xff, 0xbf, 0xd8, 0x6c, 0x36, 0x13, 0x1, 0x80,
    0xc0, 0x66, 0x3f, 0x1f, 0xe, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x78, 0x0,

    /* U+0047 "G" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc2, 0xc0, 0xc0,
    0xc0, 0xc3, 0xc7, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0048 "H" */
    0xf1, 0xec, 0x19, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x33, 0x6, 0x60, 0xcc, 0x39, 0x9f, 0x3f,
    0xe7, 0xec, 0xf1, 0x98, 0x33, 0x6, 0x60, 0xde,
    0x3c,

    /* U+0049 "I" */
    0xf6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x6f,

    /* U+004A "J" */
    0xf, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x46, 0xc6, 0xc6, 0xc6,
    0xfe, 0x7e,

    /* U+004B "K" */
    0xf1, 0xec, 0x39, 0x8e, 0x31, 0xc6, 0x70, 0xcc,
    0x1b, 0x83, 0x60, 0x7c, 0xf, 0xc1, 0xf8, 0x3b,
    0x86, 0x70, 0xc7, 0x18, 0xe3, 0xe, 0x61, 0xde,
    0x3c,

    /* U+004C "L" */
    0xf0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63,
    0x7f, 0xff,

    /* U+004D "M" */
    0xf0, 0xf, 0x70, 0xe, 0x78, 0x1e, 0x78, 0x1e,
    0x78, 0x1e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x36,
    0x6c, 0x76, 0x6e, 0x76, 0x6e, 0x66, 0x66, 0xe6,
    0x67, 0xe6, 0x63, 0xc6, 0x63, 0xc6, 0x63, 0xc6,
    0x63, 0xc6, 0xf3, 0xcf,

    /* U+004E "N" */
    0xf0, 0xf7, 0x6, 0x70, 0x67, 0x86, 0x78, 0x67,
    0xc6, 0x7c, 0x66, 0xe6, 0x6e, 0x66, 0x76, 0x67,
    0x66, 0x36, 0x63, 0xe6, 0x1e, 0x61, 0xe6, 0x1e,
    0x60, 0xef, 0xe,

    /* U+004F "O" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0050 "P" */
    0xff, 0x3f, 0xd8, 0x6c, 0x36, 0x1b, 0xd, 0x86,
    0xc3, 0x63, 0xb3, 0x9f, 0x8f, 0x7, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x78, 0x0,

    /* U+0051 "Q" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xff, 0x1c, 0xe,

    /* U+0052 "R" */
    0xff, 0x8f, 0xf9, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x33, 0x6, 0x63, 0xcd, 0xf1, 0xfc, 0x3f,
    0xc6, 0x38, 0xc7, 0x18, 0x63, 0xe, 0x61, 0xde,
    0x3c,

    /* U+0053 "S" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc1, 0xe0, 0xf0,
    0x38, 0x1e, 0x7, 0x3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7f,

    /* U+0054 "T" */
    0xff, 0xff, 0xf8, 0xc4, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xc, 0x7, 0x80,

    /* U+0055 "U" */
    0xf3, 0xd8, 0x66, 0x19, 0x86, 0x61, 0x98, 0x66,
    0x19, 0x86, 0x61, 0x98, 0x66, 0x19, 0x86, 0x61,
    0x98, 0x66, 0x19, 0x86, 0x7f, 0x9f, 0xc0,

    /* U+0056 "V" */
    0xf8, 0x7b, 0x83, 0x8c, 0x1c, 0x60, 0xe3, 0x86,
    0x1c, 0x30, 0x63, 0x83, 0x1c, 0x1c, 0xc0, 0xe6,
    0x3, 0x70, 0x1b, 0x80, 0xf8, 0x7, 0xc0, 0x1e,
    0x0, 0xf0, 0x7, 0x80, 0x3c, 0x0,

    /* U+0057 "W" */
    0xf8, 0xf1, 0xee, 0x1c, 0x19, 0xc3, 0x83, 0x18,
    0x78, 0xe3, 0xf, 0x1c, 0x71, 0xe3, 0x8e, 0x7c,
    0x60, 0xcd, 0xcc, 0x19, 0xb9, 0x83, 0x33, 0x70,
    0x76, 0x6e, 0xf, 0x8f, 0x80, 0xf0, 0xf0, 0x1e,
    0x1e, 0x3, 0xc3, 0xc0, 0x70, 0x70, 0xe, 0xe,
    0x1, 0xe1, 0xe0,

    /* U+0058 "X" */
    0xf1, 0xee, 0x38, 0xc7, 0x1c, 0xc3, 0xb8, 0x3e,
    0x7, 0xc0, 0x78, 0xe, 0x1, 0xc0, 0x3c, 0xf,
    0x81, 0xb8, 0x77, 0xc, 0x63, 0x8e, 0x71, 0xde,
    0x3c,

    /* U+0059 "Y" */
    0xf0, 0xf7, 0xe, 0x30, 0xe3, 0x8c, 0x39, 0xc1,
    0xd8, 0x1f, 0x80, 0xf0, 0xf, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60,
    0x6, 0x0, 0xf0,

    /* U+005A "Z" */
    0x7f, 0xdf, 0xf4, 0x18, 0x6, 0x3, 0x80, 0xc0,
    0x70, 0x18, 0xe, 0x3, 0x1, 0xc0, 0x60, 0x38,
    0xc, 0x3, 0x1, 0xc3, 0x7f, 0xff, 0xf0,

    /* U+005B "[" */
    0xf7, 0xb1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xf7, 0x80,

    /* U+005C "\\" */
    0xc0, 0x38, 0xe, 0x1, 0xc0, 0x70, 0xe, 0x3,
    0x80, 0x70, 0x1c, 0x3, 0x0, 0xe0, 0x18, 0x7,
    0x0, 0xc0, 0x38, 0x6, 0x1, 0xc0, 0x30, 0x0,

    /* U+005D "]" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0xff,

    /* U+005E "^" */
    0x7, 0x0, 0x78, 0x7, 0xe0, 0x33, 0x83, 0x8c,
    0x38, 0x31, 0x81, 0xdc, 0x7, 0x40, 0x10,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+0060 "`" */
    0x3, 0x38, 0x61, 0x80,

    /* U+0061 "a" */
    0xf, 0xc0, 0x1e, 0x0, 0x78, 0x1, 0xe0, 0xf,
    0xc0, 0x37, 0x0, 0xdc, 0x3, 0x30, 0x1c, 0xe0,
    0x63, 0x81, 0x8e, 0x6, 0x78, 0x3f, 0xe0, 0xfd,
    0xc3, 0xc3, 0xc, 0xc, 0x70, 0x3b, 0xe1, 0xe0,

    /* U+0062 "b" */
    0xff, 0x1f, 0xe6, 0x19, 0x86, 0x61, 0x98, 0x66,
    0x39, 0xbc, 0x7f, 0x9f, 0xf7, 0xd, 0x83, 0x60,
    0xd8, 0x36, 0xd, 0x83, 0x7f, 0xff, 0xf0,

    /* U+0063 "c" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc2, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0064 "d" */
    0xff, 0x9f, 0xf6, 0xd, 0x83, 0x60, 0xd8, 0x36,
    0xd, 0x83, 0x60, 0xd8, 0x36, 0xd, 0x83, 0x60,
    0xd8, 0x36, 0xd, 0x83, 0x7f, 0xff, 0xf0,

    /* U+0065 "e" */
    0xff, 0xbf, 0xd8, 0x6c, 0x36, 0x13, 0x1, 0x80,
    0xc0, 0x66, 0x3f, 0x1f, 0xe, 0x6, 0xb, 0xd,
    0x86, 0xc3, 0x7f, 0xff, 0xc0,

    /* U+0066 "f" */
    0xff, 0xbf, 0xd8, 0x6c, 0x36, 0x13, 0x1, 0x80,
    0xc0, 0x66, 0x3f, 0x1f, 0xe, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x78, 0x0,

    /* U+0067 "g" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc2, 0xc0, 0xc0,
    0xc0, 0xc3, 0xc7, 0xc7, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0068 "h" */
    0xf1, 0xec, 0x19, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x33, 0x6, 0x60, 0xcc, 0x39, 0x9f, 0x3f,
    0xe7, 0xec, 0xf1, 0x98, 0x33, 0x6, 0x60, 0xde,
    0x3c,

    /* U+0069 "i" */
    0xf6, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
    0x6f,

    /* U+006A "j" */
    0xf, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6,
    0x6, 0x6, 0x6, 0x6, 0x46, 0xc6, 0xc6, 0xc6,
    0xfe, 0x7e,

    /* U+006B "k" */
    0xf1, 0xec, 0x39, 0x8e, 0x31, 0xc6, 0x70, 0xcc,
    0x1b, 0x83, 0x60, 0x7c, 0xf, 0xc1, 0xf8, 0x3b,
    0x86, 0x70, 0xc7, 0x18, 0xe3, 0xe, 0x61, 0xde,
    0x3c,

    /* U+006C "l" */
    0xf0, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x61, 0x63, 0x63, 0x63,
    0x7f, 0xff,

    /* U+006D "m" */
    0xf0, 0xf, 0x70, 0xe, 0x78, 0x1e, 0x78, 0x1e,
    0x78, 0x1e, 0x7c, 0x3e, 0x7c, 0x3e, 0x7c, 0x36,
    0x6c, 0x76, 0x6e, 0x76, 0x6e, 0x66, 0x66, 0xe6,
    0x67, 0xe6, 0x63, 0xc6, 0x63, 0xc6, 0x63, 0xc6,
    0x63, 0xc6, 0xf3, 0xcf,

    /* U+006E "n" */
    0xf0, 0xf7, 0x6, 0x70, 0x67, 0x86, 0x78, 0x67,
    0xc6, 0x7c, 0x66, 0xe6, 0x6e, 0x66, 0x76, 0x67,
    0x66, 0x36, 0x63, 0xe6, 0x1e, 0x61, 0xe6, 0x1e,
    0x60, 0xef, 0xe,

    /* U+006F "o" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xfe,

    /* U+0070 "p" */
    0xff, 0x3f, 0xd8, 0x6c, 0x36, 0x1b, 0xd, 0x86,
    0xc3, 0x63, 0xb3, 0x9f, 0x8f, 0x7, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x78, 0x0,

    /* U+0071 "q" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0xff, 0x1c, 0xe,

    /* U+0072 "r" */
    0xff, 0x8f, 0xf9, 0x83, 0x30, 0x66, 0xc, 0xc1,
    0x98, 0x33, 0x6, 0x63, 0xcd, 0xf1, 0xfc, 0x3f,
    0xc6, 0x38, 0xc7, 0x18, 0x63, 0xe, 0x61, 0xde,
    0x3c,

    /* U+0073 "s" */
    0xfe, 0xff, 0xc3, 0xc3, 0xc3, 0xc1, 0xe0, 0xf0,
    0x38, 0x1e, 0x7, 0x3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xff, 0x7f,

    /* U+0074 "t" */
    0xff, 0xff, 0xf8, 0xc4, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xc, 0x7, 0x80,

    /* U+0075 "u" */
    0xf3, 0xd8, 0x66, 0x19, 0x86, 0x61, 0x98, 0x66,
    0x19, 0x86, 0x61, 0x98, 0x66, 0x19, 0x86, 0x61,
    0x98, 0x66, 0x19, 0x86, 0x7f, 0x9f, 0xc0,

    /* U+0076 "v" */
    0xf8, 0x7b, 0x83, 0x8c, 0x1c, 0x60, 0xe3, 0x86,
    0x1c, 0x30, 0x63, 0x83, 0x1c, 0x1c, 0xc0, 0xe6,
    0x3, 0x70, 0x1b, 0x80, 0xf8, 0x7, 0xc0, 0x1e,
    0x0, 0xf0, 0x7, 0x80, 0x3c, 0x0,

    /* U+0077 "w" */
    0xf8, 0xf1, 0xee, 0x1c, 0x19, 0xc3, 0x83, 0x18,
    0x78, 0xe3, 0xf, 0x1c, 0x71, 0xe3, 0x8e, 0x7c,
    0x60, 0xcd, 0xcc, 0x19, 0xb9, 0x83, 0x33, 0x70,
    0x76, 0x6e, 0xf, 0x8f, 0x80, 0xf0, 0xf0, 0x1e,
    0x1e, 0x3, 0xc3, 0xc0, 0x70, 0x70, 0xe, 0xe,
    0x1, 0xe1, 0xe0,

    /* U+0078 "x" */
    0xf1, 0xee, 0x38, 0xc7, 0x1c, 0xc3, 0xb8, 0x3e,
    0x7, 0xc0, 0x78, 0xe, 0x1, 0xc0, 0x3c, 0xf,
    0x81, 0xb8, 0x77, 0xc, 0x63, 0x8e, 0x71, 0xde,
    0x3c,

    /* U+0079 "y" */
    0xf0, 0xf7, 0xe, 0x30, 0xe3, 0x8c, 0x39, 0xc1,
    0xd8, 0x1f, 0x80, 0xf0, 0xf, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60,
    0x6, 0x0, 0xf0,

    /* U+007A "z" */
    0x7f, 0xdf, 0xf4, 0x18, 0x6, 0x3, 0x80, 0xc0,
    0x70, 0x18, 0xe, 0x3, 0x1, 0xc0, 0x60, 0x38,
    0xc, 0x3, 0x1, 0xc3, 0x7f, 0xff, 0xf0,

    /* U+007B "{" */
    0x3e, 0x7c, 0xc1, 0x83, 0x6, 0xc, 0x30, 0xe1,
    0x83, 0x83, 0x83, 0x6, 0xc, 0x18, 0x3e, 0x7c,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xf9, 0xf0, 0x60, 0xc1, 0x83, 0x6, 0x6, 0xe,
    0xc, 0x38, 0xe1, 0x83, 0x6, 0xc, 0xf9, 0xf0,

    /* U+007E "~" */
    0x3c, 0x13, 0xf9, 0xf8, 0xfe, 0x83, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 93, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 76, .box_w = 4, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 113, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 14, .adv_w = 222, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 37, .adv_w = 157, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 57, .adv_w = 313, .box_w = 18, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 181, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 123, .adv_w = 59, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = 13},
    {.bitmap_index = 125, .adv_w = 115, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 111, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 156, .adv_w = 179, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 169, .adv_w = 70, .box_w = 4, .box_h = 6, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 172, .adv_w = 132, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 174, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 173, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 201, .adv_w = 168, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 101, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 157, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 164, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 190, .box_w = 11, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 156, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 307, .adv_w = 161, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 159, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 173, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 161, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 72, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 389, .adv_w = 78, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 394, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 408, .adv_w = 158, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 415, .adv_w = 162, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 429, .adv_w = 151, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 245, .box_w = 14, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 222, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 185, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 168, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 552, .adv_w = 179, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 170, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 166, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 170, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 203, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 91, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 141, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 201, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 158, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 269, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 215, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 793, .adv_w = 175, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 811, .adv_w = 169, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 175, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 852, .adv_w = 189, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 877, .adv_w = 152, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 163, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 182, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 941, .adv_w = 212, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 315, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 197, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1039, .adv_w = 200, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 171, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1089, .adv_w = 81, .box_w = 5, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 165, .box_w = 10, .box_h = 19, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1125, .adv_w = 84, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1134, .adv_w = 209, .box_w = 13, .box_h = 9, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 1149, .adv_w = 257, .box_w = 15, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1153, .adv_w = 84, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 14},
    {.bitmap_index = 1157, .adv_w = 222, .box_w = 14, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1189, .adv_w = 185, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1212, .adv_w = 168, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 179, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 170, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1274, .adv_w = 166, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1295, .adv_w = 170, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 203, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1338, .adv_w = 91, .box_w = 4, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1347, .adv_w = 141, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 201, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1390, .adv_w = 158, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1408, .adv_w = 269, .box_w = 16, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 215, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1471, .adv_w = 175, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 169, .box_w = 9, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1510, .adv_w = 175, .box_w = 8, .box_h = 20, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1530, .adv_w = 189, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1555, .adv_w = 152, .box_w = 8, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1573, .adv_w = 163, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1596, .adv_w = 182, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1619, .adv_w = 212, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1649, .adv_w = 315, .box_w = 19, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1692, .adv_w = 197, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1717, .adv_w = 200, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1744, .adv_w = 171, .box_w = 10, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1767, .adv_w = 129, .box_w = 7, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1783, .adv_w = 77, .box_w = 2, .box_h = 19, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1788, .adv_w = 132, .box_w = 7, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1804, .adv_w = 215, .box_w = 13, .box_h = 4, .ofs_x = 0, .ofs_y = 7}
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


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    1, 8,
    3, 34,
    3, 43,
    3, 66,
    3, 75,
    7, 20,
    7, 21,
    7, 34,
    7, 37,
    7, 39,
    7, 43,
    7, 45,
    7, 46,
    7, 47,
    7, 49,
    7, 53,
    7, 55,
    7, 56,
    7, 57,
    7, 59,
    7, 66,
    7, 69,
    7, 73,
    7, 75,
    7, 76,
    7, 78,
    7, 79,
    7, 85,
    7, 86,
    7, 88,
    7, 89,
    7, 90,
    7, 91,
    8, 34,
    8, 43,
    8, 66,
    8, 75,
    11, 34,
    11, 43,
    11, 57,
    11, 58,
    11, 66,
    11, 75,
    14, 34,
    14, 43,
    14, 53,
    14, 55,
    14, 56,
    14, 57,
    14, 58,
    14, 59,
    14, 66,
    14, 75,
    14, 85,
    14, 87,
    14, 88,
    14, 89,
    14, 90,
    14, 91,
    15, 21,
    15, 53,
    15, 55,
    15, 56,
    15, 58,
    15, 85,
    15, 87,
    15, 88,
    15, 90,
    19, 21,
    20, 21,
    22, 18,
    23, 18,
    23, 21,
    23, 25,
    23, 26,
    24, 13,
    24, 15,
    24, 18,
    24, 27,
    24, 28,
    34, 3,
    34, 8,
    34, 11,
    34, 14,
    34, 27,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 52,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 68,
    34, 72,
    34, 82,
    34, 84,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 8,
    35, 34,
    35, 53,
    35, 55,
    35, 56,
    35, 57,
    35, 58,
    35, 66,
    35, 85,
    35, 87,
    35, 88,
    35, 89,
    35, 90,
    36, 34,
    36, 55,
    36, 58,
    36, 66,
    36, 87,
    36, 88,
    36, 89,
    36, 90,
    37, 34,
    37, 39,
    37, 55,
    37, 56,
    37, 58,
    37, 59,
    37, 66,
    37, 70,
    37, 71,
    37, 87,
    37, 88,
    37, 89,
    37, 90,
    37, 91,
    38, 87,
    39, 13,
    39, 15,
    39, 34,
    39, 43,
    39, 53,
    39, 59,
    39, 66,
    39, 75,
    39, 91,
    40, 34,
    40, 54,
    40, 55,
    40, 56,
    40, 57,
    40, 58,
    40, 66,
    40, 87,
    40, 88,
    40, 89,
    40, 90,
    40, 91,
    41, 58,
    42, 36,
    43, 66,
    43, 89,
    44, 27,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 52,
    44, 54,
    44, 58,
    44, 68,
    44, 72,
    44, 80,
    44, 82,
    44, 84,
    44, 85,
    44, 86,
    45, 3,
    45, 8,
    45, 11,
    45, 14,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 75,
    45, 85,
    45, 87,
    45, 88,
    45, 90,
    46, 28,
    46, 66,
    47, 34,
    47, 57,
    48, 34,
    48, 55,
    48, 56,
    48, 57,
    48, 58,
    49, 15,
    49, 34,
    49, 43,
    49, 53,
    49, 57,
    49, 59,
    49, 66,
    49, 75,
    49, 89,
    50, 34,
    50, 56,
    50, 58,
    50, 66,
    50, 87,
    50, 88,
    50, 89,
    50, 90,
    51, 53,
    51, 55,
    51, 56,
    51, 58,
    51, 80,
    51, 86,
    51, 87,
    51, 88,
    51, 90,
    52, 34,
    52, 55,
    52, 56,
    52, 57,
    52, 58,
    52, 87,
    52, 88,
    52, 89,
    52, 90,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 43,
    53, 59,
    53, 66,
    53, 75,
    54, 34,
    54, 66,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 34,
    55, 36,
    55, 40,
    55, 43,
    55, 48,
    55, 50,
    55, 59,
    55, 66,
    55, 68,
    55, 72,
    55, 75,
    55, 80,
    55, 82,
    55, 91,
    56, 14,
    56, 15,
    56, 28,
    56, 34,
    56, 36,
    56, 40,
    56, 43,
    56, 48,
    56, 50,
    56, 57,
    56, 59,
    56, 66,
    56, 68,
    56, 70,
    56, 72,
    56, 75,
    56, 80,
    56, 82,
    56, 91,
    57, 14,
    57, 27,
    57, 28,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 72,
    57, 80,
    57, 82,
    57, 84,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 59,
    58, 66,
    58, 68,
    58, 72,
    58, 75,
    58, 80,
    58, 82,
    59, 14,
    59, 36,
    59, 85,
    66, 3,
    66, 8,
    66, 11,
    66, 14,
    66, 27,
    66, 36,
    66, 39,
    66, 40,
    66, 44,
    66, 50,
    66, 51,
    66, 52,
    66, 53,
    66, 54,
    66, 55,
    66, 56,
    66, 58,
    66, 68,
    66, 71,
    66, 72,
    66, 76,
    66, 82,
    66, 83,
    66, 84,
    66, 85,
    66, 86,
    66, 87,
    66, 88,
    66, 89,
    66, 90,
    67, 3,
    67, 8,
    67, 34,
    67, 42,
    67, 45,
    67, 53,
    67, 54,
    67, 56,
    67, 58,
    67, 66,
    67, 85,
    67, 87,
    67, 88,
    67, 90,
    68, 34,
    68, 41,
    68, 55,
    68, 56,
    68, 58,
    68, 59,
    68, 87,
    68, 88,
    68, 90,
    68, 91,
    69, 34,
    69, 42,
    69, 45,
    69, 55,
    69, 56,
    69, 58,
    69, 59,
    69, 66,
    69, 77,
    69, 87,
    69, 88,
    69, 90,
    69, 91,
    70, 52,
    70, 56,
    70, 84,
    70, 88,
    71, 13,
    71, 15,
    71, 34,
    71, 43,
    71, 53,
    71, 59,
    71, 66,
    71, 75,
    71, 85,
    71, 91,
    72, 34,
    72, 45,
    72, 51,
    72, 53,
    72, 54,
    72, 55,
    72, 57,
    72, 58,
    72, 59,
    72, 66,
    72, 86,
    72, 87,
    72, 89,
    72, 90,
    72, 91,
    73, 53,
    75, 34,
    75, 66,
    76, 14,
    76, 27,
    76, 36,
    76, 40,
    76, 48,
    76, 50,
    76, 51,
    76, 52,
    76, 53,
    76, 54,
    76, 56,
    76, 58,
    76, 68,
    76, 72,
    76, 80,
    76, 82,
    76, 84,
    76, 86,
    76, 88,
    76, 90,
    77, 3,
    77, 8,
    77, 11,
    77, 37,
    77, 44,
    77, 53,
    77, 55,
    77, 56,
    77, 58,
    77, 85,
    77, 87,
    77, 88,
    77, 90,
    78, 28,
    78, 34,
    78, 50,
    78, 82,
    79, 34,
    79, 36,
    79, 40,
    79, 57,
    79, 59,
    79, 66,
    79, 68,
    79, 72,
    79, 89,
    79, 91,
    80, 52,
    80, 55,
    80, 56,
    80, 57,
    80, 58,
    80, 59,
    80, 66,
    80, 82,
    80, 84,
    80, 87,
    80, 88,
    80, 89,
    80, 90,
    80, 91,
    81, 13,
    81, 15,
    81, 34,
    81, 38,
    81, 43,
    81, 57,
    81, 58,
    81, 59,
    81, 66,
    81, 75,
    81, 85,
    81, 89,
    81, 90,
    81, 91,
    82, 34,
    82, 38,
    82, 51,
    82, 55,
    82, 56,
    82, 57,
    82, 58,
    82, 59,
    82, 66,
    82, 70,
    82, 83,
    82, 87,
    82, 88,
    82, 89,
    82, 90,
    82, 91,
    83, 40,
    83, 53,
    83, 54,
    83, 56,
    83, 58,
    83, 72,
    83, 85,
    83, 86,
    83, 87,
    83, 88,
    83, 90,
    84, 34,
    84, 36,
    84, 38,
    84, 47,
    84, 53,
    84, 55,
    84, 56,
    84, 57,
    84, 58,
    84, 66,
    84, 70,
    84, 87,
    84, 88,
    84, 89,
    84, 90,
    85, 13,
    85, 14,
    85, 15,
    85, 27,
    85, 28,
    85, 34,
    85, 43,
    85, 53,
    85, 59,
    85, 66,
    85, 75,
    85, 85,
    85, 91,
    86, 34,
    86, 57,
    86, 66,
    86, 89,
    87, 13,
    87, 14,
    87, 15,
    87, 27,
    87, 28,
    87, 34,
    87, 36,
    87, 40,
    87, 43,
    87, 48,
    87, 50,
    87, 52,
    87, 59,
    87, 66,
    87, 68,
    87, 72,
    87, 75,
    87, 80,
    87, 82,
    87, 84,
    87, 91,
    88, 13,
    88, 14,
    88, 15,
    88, 28,
    88, 34,
    88, 43,
    88, 48,
    88, 50,
    88, 52,
    88, 59,
    88, 66,
    88, 70,
    88, 75,
    88, 80,
    88, 82,
    88, 84,
    88, 91,
    89, 14,
    89, 27,
    89, 28,
    89, 36,
    89, 40,
    89, 48,
    89, 52,
    89, 68,
    89, 72,
    89, 80,
    89, 82,
    89, 84,
    90, 13,
    90, 14,
    90, 15,
    90, 27,
    90, 34,
    90, 36,
    90, 40,
    90, 43,
    90, 46,
    90, 48,
    90, 50,
    90, 52,
    90, 59,
    90, 66,
    90, 68,
    90, 72,
    90, 75,
    90, 78,
    90, 80,
    90, 82,
    90, 84,
    90, 91,
    91, 14
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -84, -48, -42, -51, -48, -18, -9, -15,
    -9, -15, -15, -9, -12, -15, -9, -24,
    -27, -24, -15, -12, -15, -12, -9, -12,
    -15, -12, -12, -24, -6, -21, -18, -30,
    -18, -45, -42, -45, -42, -39, -57, -12,
    -6, -36, -45, -21, -24, -21, -21, -15,
    -30, -36, -21, -18, -18, -33, -15, -18,
    -27, -24, -18, -48, -39, -42, -39, -36,
    -24, -39, -42, -39, -8, -9, -6, -9,
    -6, 8, 8, -45, -39, -9, -21, -27,
    -51, -39, -42, -24, -21, -9, -9, -8,
    -8, -9, -33, -18, -48, -39, -51, -8,
    -8, -4, -8, -32, -12, -48, -40, -56,
    -15, -8, -12, -12, -24, -12, -21, -4,
    -8, -16, -12, -16, -20, -8, -8, -8,
    -8, -4, -4, -12, -12, -8, -9, -8,
    -12, -8, -8, -4, -8, -12, -4, -12,
    -16, -8, -4, -4, -36, -33, -42, -45,
    4, -8, -32, -40, -8, -8, -8, -12,
    -8, -8, -8, -12, -4, -12, -15, -8,
    -8, -8, -12, -12, -8, -33, -9, -9,
    -9, -12, -9, -15, -15, -12, -12, -12,
    -8, -8, -8, -12, -42, -33, -51, -18,
    -24, -51, -27, -54, 8, -32, -36, -36,
    -48, -9, -8, -8, -10, -9, -15, -12,
    -12, -13, -33, -33, -44, 9, -6, -9,
    -32, -36, -8, -8, -9, -9, -8, -8,
    -8, -8, -8, -8, -12, -15, -15, -4,
    -12, -15, -15, -12, -3, -9, -9, -6,
    -6, -8, -8, -12, -8, -21, -21, -30,
    -24, -21, -30, -30, -6, -24, -32, -9,
    -8, -39, -15, -33, -21, -45, -9, -6,
    -38, -9, -6, -15, -40, -8, -8, -36,
    -8, -4, -8, -18, -33, -30, -38, -15,
    -12, -30, -6, -12, -8, -9, -40, -8,
    -8, -8, -28, -8, -8, -12, -27, -24,
    -15, -9, -9, -6, -9, -16, -8, -12,
    -8, -33, -30, -33, -27, -30, -45, -15,
    -8, -48, -6, -9, -6, -15, -40, -8,
    -12, -44, -12, -8, -21, -6, 8, -51,
    -43, -42, -24, -24, -12, -8, -9, -24,
    -3, -6, -12, -36, -21, -48, -46, -51,
    -12, -8, -9, -24, -8, -6, -12, -36,
    -15, -48, -46, -4, -51, -15, -15, -6,
    -6, -8, -9, -12, -24, -21, -6, -8,
    -12, -12, -12, -9, -9, -12, -12, -12,
    -9, -8, -8, -8, -9, -21, -3, -9,
    -18, -18, -15, -15, -8, -9, -7, -8,
    -8, -15, -4, -8, -4, -4, -42, -33,
    -39, -42, 6, -9, -39, -42, 6, -9,
    -12, -9, -9, -6, -6, -12, -18, -18,
    -12, -4, -6, -4, -6, -8, -4, -8,
    -15, -15, -30, -30, -18, -12, -9, -12,
    -9, -12, -15, -12, -12, -12, -12, -8,
    -9, -12, -4, -4, -8, -4, -33, -24,
    -42, -9, -3, -27, -38, -42, -50, -27,
    -38, -38, -38, -9, -12, -9, -9, -18,
    -6, -6, -6, -12, -10, -6, -6, -6,
    -12, 3, -12, -9, -9, -15, -6, -11,
    12, 3, -12, -9, -9, -15, -6, -42,
    -30, -33, -6, -42, -13, -6, -12, -31,
    -42, 8, -13, -4, -12, -12, -6, -3,
    -8, -12, -9, -12, -6, -12, -6, -3,
    -8, -12, -9, -12, -6, -8, -9, -9,
    -18, -18, -8, -9, -9, -13, -14, -18,
    -9, -9, -6, -6, -8, -12, -15, -9,
    -15, -4, -6, -8, -8, -9, -15, -21,
    -21, -21, -24, -24, -33, -36, 6, -9,
    -25, -24, 6, -9, -15, -6, -15, -6,
    -36, -21, -33, -18, -24, -39, -12, -12,
    -38, -12, -6, -3, -9, -43, -12, -12,
    -38, -12, -6, -3, -9, -30, -21, -30,
    -27, -42, -38, -12, -12, -8, -15, -38,
    -4, -38, -12, -12, -8, -15, -21, -24,
    -9, -9, -9, -9, -9, -9, -8, -8,
    -8, -8, -33, -24, -33, -27, -45, -15,
    -17, -45, -3, -12, -6, -9, -15, -42,
    -12, -17, -45, -3, -12, -6, -9, -15,
    -21
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 625,
    .glyph_ids_size = 0
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
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
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
const lv_font_t ui_font_FontBoucherieBlock24 = {
#else
lv_font_t ui_font_FontBoucherieBlock24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONTBOUCHERIEBLOCK24*/

