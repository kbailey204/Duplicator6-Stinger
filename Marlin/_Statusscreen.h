/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_SCREENWIDTH 128

#define STATUS_SCREEN_HOTEND_TEXT_X(E) (40 + (E) * 20)

#define STATUS_SCREEN_BED_TEXT_X (HOTENDS > 1 ? 81 : 73)

// Can also be overridden in Configuration.h
#define FAN_ANIM_FRAMES 3
#define STATUS_SCREEN_FAN_TEXT_X (FAN_ANIM_FRAMES == 3 ? 103 : 105)
#define STATUS_SCREEN_FAN_TEXT_Y (FAN_ANIM_FRAMES > 2 ? 28 : 27)

//============================================

#if HOTENDS < 2

  #if FAN_ANIM_FRAMES <= 2

    const unsigned char status_screen0_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00000000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11100011,B11110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010011,B11100011,B11100100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B11111111,B10000100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010000,B00111110,B00000100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010000,B00111110,B00000100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B00111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B11111000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00010000,B11111111,B10000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B11111000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010011,B11100011,B11100100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B11111100,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010111,B11100011,B11110100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B11111100,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011011,B11000001,B11101100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B00000000,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };
    const unsigned char status_screen1_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00011000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B11111000,B00011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B11111000,B00001100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00001100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B01111000,B00110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B00011000,B11110100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B00011100,B11110100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010000,B00111111,B11111100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00011111,B11111111,B11111100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011111,B11111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B11111000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00010111,B10011100,B00000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B11111000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010111,B00001100,B00000100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B11111100,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010110,B00001111,B00000100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B11111100,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00011000,B00001111,B00001100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011000,B00001111,B10001100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00001111,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B00001100,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };

  #elif FAN_ANIM_FRAMES == 3

    const unsigned char status_screen0_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00000000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11100011,B11110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010011,B11100011,B11100100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B11111111,B10000100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010000,B00111110,B00000100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010000,B00111110,B00000100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B00111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B11111000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00010000,B11111111,B10000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B11111000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010011,B11100011,B11100100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B11111100,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010111,B11100011,B11110100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B11111100,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011011,B11000001,B11101100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B00000000,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };
    const unsigned char status_screen1_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00011000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B11111000,B00011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B11111000,B00001100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00001100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B01111000,B00110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B00011000,B11110100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B00011100,B11110100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010000,B00111111,B11111100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00011111,B11111111,B11111100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011111,B11111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B11111000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00010111,B10011100,B00000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B11111000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010111,B00001100,B00000100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B11111100,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010110,B00001111,B00000100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B11111100,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00011000,B00001111,B00001100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011000,B00001111,B10001100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00001111,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B00001100,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };
    const unsigned char status_screen2_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00000100,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00001111,B10011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B11001100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011010,B00001111,B10001100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B00001111,B00000100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B10001110,B00000100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010111,B11011100,B00000100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00011111,B11111110,B00000100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00000100,B00010000,B01000000,B00000000,B00010111,B11111111,B11110100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00010000,B00111111,B11111100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B11111000,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00010000,B00011101,B11110100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B11111000,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010000,B00111000,B11110100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B11111100,B00000000,B00000000,B00100000,B10000010,B00000000,B00000000,B00010000,B01111000,B01110100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B11111100,B00000000,B00000000,B00010000,B01000001,B00000000,B00000000,B00011000,B11111000,B00101100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000000,B00000000,B00001000,B00100000,B10000000,B00000000,B00011001,B11111000,B00001100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B11111000,B00011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B00010000,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00000000,B11111111,B11111111,B11000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };

   #endif

#else // HOTENDS >= 2

  #if FAN_ANIM_FRAMES <= 2

    const unsigned char status_screen0_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00000000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11100011,B11110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010011,B11100011,B11100100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B11111111,B00000000,B00001000,B00100000,B10000000,B00010000,B11111111,B10000100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B10111100,B00000001,B11100111,B10000000,B00000100,B00010000,B01000000,B00010000,B00111110,B00000100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B00111100,B00000001,B11011011,B10000000,B00000100,B00010000,B01000000,B00010000,B00111110,B00000100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001110,B10111100,B00000001,B11111011,B10000000,B00001000,B00100000,B10000000,B00010000,B00111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B10111000,B00000000,B11110111,B00000000,B00010000,B01000001,B00000000,B00010000,B11111111,B10000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B10111000,B00000000,B11101111,B00000000,B00100000,B10000010,B00000000,B00010011,B11100011,B11100100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B10111100,B00000001,B11011111,B10000000,B00100000,B10000010,B00000000,B00010111,B11100011,B11110100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B10111100,B00000001,B11000011,B10000000,B00010000,B01000001,B00000000,B00011011,B11000001,B11101100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000001,B11111111,B10000000,B00001000,B00100000,B10000000,B00011011,B11000001,B11101100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B01111110,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00111100,B00000000,B11111111,B11111111,B11000000,B00011111,B00000000,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00011000,B00000000,B11111111,B11111111,B11000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };
    const unsigned char status_screen1_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00011000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B11111000,B00011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B11111000,B00001100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00001100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B01111000,B00110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B00011000,B11110100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B11111111,B00000000,B00001000,B00100000,B10000000,B00010000,B00011100,B11110100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B10111100,B00000001,B11100111,B10000000,B00000100,B00010000,B01000000,B00010000,B00111111,B11111100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B00111100,B00000001,B11011011,B10000000,B00000100,B00010000,B01000000,B00011111,B11111111,B11111100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001110,B10111100,B00000001,B11111011,B10000000,B00001000,B00100000,B10000000,B00011111,B11111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B10111000,B00000000,B11110111,B00000000,B00010000,B01000001,B00000000,B00010111,B10011100,B00000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B10111000,B00000000,B11101111,B00000000,B00100000,B10000010,B00000000,B00010111,B00001100,B00000100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B10111100,B00000001,B11011111,B10000000,B00100000,B10000010,B00000000,B00010110,B00001111,B00000100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B10111100,B00000001,B11000011,B10000000,B00010000,B01000001,B00000000,B00011000,B00001111,B00001100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000001,B11111111,B10000000,B00001000,B00100000,B10000000,B00011000,B00001111,B10001100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B01111110,B00000000,B00000000,B00000000,B00000000,B00011100,B00001111,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00111100,B00000000,B11111111,B11111111,B11000000,B00011111,B00001100,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00011000,B00000000,B11111111,B11111111,B11000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };

  #elif FAN_ANIM_FRAMES == 3

    const unsigned char status_screen0_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00000000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011011,B11000001,B11101100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B11100011,B11110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010011,B11100011,B11100100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B11111111,B00000000,B00001000,B00100000,B10000000,B00010000,B11111111,B10000100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B10111100,B00000001,B11100111,B10000000,B00000100,B00010000,B01000000,B00010000,B00111110,B00000100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B00111100,B00000001,B11011011,B10000000,B00000100,B00010000,B01000000,B00010000,B00111110,B00000100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001110,B10111100,B00000001,B11111011,B10000000,B00001000,B00100000,B10000000,B00010000,B00111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B10111000,B00000000,B11110111,B00000000,B00010000,B01000001,B00000000,B00010000,B11111111,B10000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B10111000,B00000000,B11101111,B00000000,B00100000,B10000010,B00000000,B00010011,B11100011,B11100100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B10111100,B00000001,B11011111,B10000000,B00100000,B10000010,B00000000,B00010111,B11100011,B11110100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B10111100,B00000001,B11000011,B10000000,B00010000,B01000001,B00000000,B00011011,B11000001,B11101100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000001,B11111111,B10000000,B00001000,B00100000,B10000000,B00011011,B11000001,B11101100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B01111110,B00000000,B00000000,B00000000,B00000000,B00011100,B10000000,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00111100,B00000000,B11111111,B11111111,B11000000,B00011111,B00000000,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00011000,B00000000,B11111111,B11111111,B11000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };
    const unsigned char status_screen1_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00011000,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B11111000,B00011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B11111000,B00001100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B01111000,B00001100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B01111000,B00110100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010000,B00011000,B11110100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B11111111,B00000000,B00001000,B00100000,B10000000,B00010000,B00011100,B11110100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B10111100,B00000001,B11100111,B10000000,B00000100,B00010000,B01000000,B00010000,B00111111,B11111100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B00111100,B00000001,B11011011,B10000000,B00000100,B00010000,B01000000,B00011111,B11111111,B11111100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001110,B10111100,B00000001,B11111011,B10000000,B00001000,B00100000,B10000000,B00011111,B11111110,B00000100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B10111000,B00000000,B11110111,B00000000,B00010000,B01000001,B00000000,B00010111,B10011100,B00000100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B10111000,B00000000,B11101111,B00000000,B00100000,B10000010,B00000000,B00010111,B00001100,B00000100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B10111100,B00000001,B11011111,B10000000,B00100000,B10000010,B00000000,B00010110,B00001111,B00000100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B10111100,B00000001,B11000011,B10000000,B00010000,B01000001,B00000000,B00011000,B00001111,B00001100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000001,B11111111,B10000000,B00001000,B00100000,B10000000,B00011000,B00001111,B10001100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B01111110,B00000000,B00000000,B00000000,B00000000,B00011100,B00001111,B10011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00111100,B00000000,B11111111,B11111111,B11000000,B00011111,B00001100,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00011000,B00000000,B11111111,B11111111,B11000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };
    const unsigned char status_screen2_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000011,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011111,B00000100,B01111100,
  B00000000,B01111110,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011100,B00001111,B10011100,
  B00000000,B10110010,B00001100,B00000011,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011000,B00001111,B11001100,
  B00000111,B00011111,B00001011,B11111101,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00011010,B00001111,B10001100,
  B00011000,B00100111,B10001000,B00000001,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B00001111,B00000100,
  B00011000,B00011000,B01000111,B00001110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00010111,B10001110,B00000100,
  B00011000,B00010011,B11000010,B11110100,B00000000,B00000111,B11111000,B00000000,B11111111,B00000000,B00001000,B00100000,B10000000,B00010111,B11011100,B00000100,
  B00011000,B00001100,B01000001,B01101000,B00000000,B00001111,B10111100,B00000001,B11100111,B10000000,B00000100,B00010000,B01000000,B00011111,B11111110,B00000100,
  B00011000,B00001110,B01000000,B11010000,B00000000,B00001111,B00111100,B00000001,B11011011,B10000000,B00000100,B00010000,B01000000,B00010111,B11111111,B11110100,
  B00010111,B00000000,B11000000,B10010000,B00000000,B00001110,B10111100,B00000001,B11111011,B10000000,B00001000,B00100000,B10000000,B00010000,B00111111,B11111100,
  B00010000,B10000111,B10000001,B00001000,B00000000,B00000111,B10111000,B00000000,B11110111,B00000000,B00010000,B01000001,B00000000,B00010000,B00011101,B11110100,
  B00000000,B01000100,B00000011,B00001100,B00000000,B00000111,B10111000,B00000000,B11101111,B00000000,B00100000,B10000010,B00000000,B00010000,B00111000,B11110100,
  B00000000,B01100100,B00000110,B00000110,B00000000,B00001111,B10111100,B00000001,B11011111,B10000000,B00100000,B10000010,B00000000,B00010000,B01111000,B01110100,
  B00000000,B00110100,B00001000,B01100001,B00000000,B00001111,B10111100,B00000001,B11000011,B10000000,B00010000,B01000001,B00000000,B00011000,B11111000,B00101100,
  B00000000,B00010010,B00001011,B11111001,B00000000,B00001111,B11111100,B00000001,B11111111,B10000000,B00001000,B00100000,B10000000,B00011001,B11111000,B00001100,
  B00000000,B00001010,B00001111,B11111101,B00000000,B00000011,B11110000,B00000000,B01111110,B00000000,B00000000,B00000000,B00000000,B00011100,B11111000,B00011100,
  B00000000,B00001010,B00001000,B00000001,B00000000,B00000001,B11100000,B00000000,B00111100,B00000000,B11111111,B11111111,B11000000,B00011111,B00010000,B01111100,
  B00000000,B00000100,B00000111,B11111110,B00000000,B00000000,B11000000,B00000000,B00011000,B00000000,B11111111,B11111111,B11000000,B00011111,B11111111,B11111100,
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000 
    };


  #endif

#endif // HOTENDS >= 2