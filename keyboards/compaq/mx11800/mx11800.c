/*
Copyright 2020 Juan Pablo Kutianski <jkutianski@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <version.h>
#include <print.h>

void led_sequence_trail(int count, int wait) {
    int i;

    for (i = 0; i < count; ++i) {
        led_set(1);
        wait_ms(wait);
        led_set(3);
        wait_ms(wait);
        led_set(7);
        wait_ms(wait);
        led_set(6);
        wait_ms(wait);
        led_set(4);
        wait_ms(wait);
        led_set(0);
        wait_ms(wait);
    }
}

void keyboard_post_init_kb(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;

    // Call the keyboard post init code.
    keyboard_post_init_user();

    // Print the Product
    uprintf("Product: %s\n", STR(PRODUCT));
#ifdef QMK_VERSION
    // Print the QMK version
    uprintf("QMK Firmware: %s\n", QMK_VERSION);
#endif

    dprint("Debug: Enabled\n");
    dprintf("Debug: Matrix: %b, Keyboard: %b, Mouse: %b\n", debug_matrix, debug_keyboard, debug_mouse);
}

void bootmagic_lite(void) {
    matrix_scan();
    wait_ms(DEBOUNCE * 2);
    matrix_scan();

    if (matrix_get_row(BOOTMAGIC_LITE_ROW) & (1 << BOOTMAGIC_LITE_COLUMN)) {
        // Init Leds
        led_init_ports();

        // Wait for start
        wait_ms(200);

        // Blink lights on bootmagic.
        led_sequence_trail(BOOTMAGIC_LEDSEQ_COUNT, BOOTMAGIC_LEDSEQ_STEP);

#if defined(VIA_ENABLE)
        via_eeprom_reset();
#else
        eeconfig_disable();
#endif

        // Jump to bootloader.
        bootloader_jump();
    }
}
