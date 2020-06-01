/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            0
//#define STATUS_LOGO_BYTEWIDTH    3
#define STATUS_LOGO_WIDTH       24

const unsigned char status_logo_bmp[] PROGMEM = {
0x00, 0x81, 0x00, 0x01, 0x00, 0x80, 0x02, 0x00, 0x40, 0x06, 0x00, 0x40, 0x0A, 0x00, 0x20, 0x09,
0x80, 0x10, 0x1F, 0x60, 0x10, 0x20, 0x90, 0x10, 0x24, 0x88, 0x10, 0x2C, 0x84, 0x10, 0x20, 0x82,
0x10, 0x1F, 0x01, 0x10, 0x08, 0x00, 0x90, 0x0F, 0x00, 0x50, 0x08, 0xC0, 0x30, 0x08, 0x23, 0x88,
0x08, 0x14, 0x48, 0x04, 0x19, 0x28, 0x04, 0x0B, 0x28, 0x04, 0x08, 0x28, 0x04, 0x07, 0xC8, 0x04,
0x02, 0x08, 0x06, 0x01, 0xF0, 0x08, 0x30, 0x90, 0x09, 0xFE, 0x50, 0x09, 0xFE, 0x50, 0x04, 0x7C,
0x90, 0x03, 0x01, 0x10, 0x02, 0x00, 0x10, 0x3C, 0x00, 0x1F, 0xE2, 0x80, 0xA1, 0x23, 0x80, 0xF1
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM

#define STATUS_FAN_FRAMES        3
#define STATUS_ALT_FAN_BITMAP

#define STATUS_HIDE_XYZ
#define LCD_LEFT_MARGIN         0

#define STATUS_HEATERS_XSPACE   44
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
