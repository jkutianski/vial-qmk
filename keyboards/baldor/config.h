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

// Add teensy core
#define CORE_TEENSY

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { A0, A1, A2, A3, A4, A5, A6, A7 }
#define MATRIX_COL_PINS \
    { D6, D7, E0, E1, C0, C1, C2, C3, C4, C5, C6, C7 }
// LED PINS are B7, D6, D7
#define UNUSED_PINS \
    { B2, B1, B0, D0, D1, D2, D3, E6, E5, E4, F0, F1, F2, F3, F4, F5, F6, F7 }

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { D5 }

#define ENCODER_RESOLUTION 4

#define VIAL_KEYBOARD_UID {0x6F, 0xC5, 0xEE, 0x60, 0x90, 0x92, 0x53, 0xA4}
#define VIAL_UNLOCK_COMBO_ROWS { 7 }
#define VIAL_UNLOCK_COMBO_COLS { 6 }

#ifdef OLED_DRIVER_ENABLE
#   define OLED_TIMEOUT 60000
#   define OLED_FONT_H "keyboards/baldor/glcdfont.c"
#endif

// Define layers count
#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 16
#endif

// Define keymap macro count
#ifndef DYNAMIC_KEYMAP_MACRO_COUNT
#    define DYNAMIC_KEYMAP_MACRO_COUNT 32
#endif

#ifdef BACKLIGHT_ENABLE
#    define BACKLIGHT_PIN B7
#    define BACKLIGHT_LEVELS 5
#endif

#ifdef RGBLIGHT_ENABLE
#   define RGB_DI_PIN E7
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

// #define USB_POLLING_INTERVAL_MS 1
