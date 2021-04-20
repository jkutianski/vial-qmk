/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2B29
#define DEVICE_VER      0x0001
#define MANUFACTURER    Baldor
#define PRODUCT         MacroPad84
#define DESCRIPTION     Macropad keyboard

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS \
    { B12, B13, B14, B15, A8, A9, A10, A15 }
#define MATRIX_COL_PINS \
    { A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, B10, B11 }
#define UNUSED_PINS \
    { NO_PIN }

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }

#define ENCODER_RESOLUTION 4

#define VIAL_KEYBOARD_UID {0x6F, 0xC5, 0xEE, 0x60, 0x90, 0x92, 0x53, 0xA4}
#define VIAL_UNLOCK_COMBO_ROWS { 7 }
#define VIAL_UNLOCK_COMBO_COLS { 0 }

#ifdef OLED_DRIVER_ENABLE
#   define OLED_TIMEOUT 60000
#   define OLED_FONT_H "keyboards/baldor/glcdfont.c"
#endif

// #ifdef BACKLIGHT_ENABLE
// #    define BACKLIGHT_PIN B8
// #    define BACKLIGHT_LEVELS 5
// #endif

#ifdef RGBLIGHT_ENABLE
#   define RGB_DI_PIN B9
#   define RGBLED_NUM 8
#   define RGBLIGHT_ANIMATIONS
#   define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#endif
/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#define USB_POLLING_INTERVAL_MS 1
