#include QMK_KEYBOARD_H
#include <stdio.h>

#define ____ KC_TRANSPARENT

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Qwerty
    * ,-----------------------------------------------------------------------.
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * |-----------------------------------------------------------------------+
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * |-----------------------------------------------------------------------+
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * |-----------------------------------------------------------------------+
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * |-----------------------------------------------------------------------+
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * |-----------------------------------------------------------------------+
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * |-----------------------------------------------------------------------+
    * |     |     |     |     |     |     |     |     |     |     |     |     |
    * '-----------------------------------------------------------------------'
    */

    [0] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [1] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [2] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [3] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [4] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [5] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [6] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

    [7] = LAYOUT(
                                                                          ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
        ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),
};
// clang-format on

#ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
}

static uint16_t oled_timer;
static uint8_t show_logo = true;

static void render_QMK_logo(void) {
    static const char PROGMEM logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(logo, false);
}

void keyboard_post_init_user(void) {
    if (show_logo) {
        oled_clear();

        render_QMK_logo();

        oled_timer = timer_read();
    }
}

void oled_task_user(void) {

    if (show_logo && timer_elapsed(oled_timer) < 3000) {
        return;
    }

    if (show_logo) {
        oled_clear();
        show_logo = false;
        return;
    }

    oled_set_cursor(0,0);

    // Host RGB mode
    oled_write_P(PSTR("RGB mode:"), false);
    char mode_buff[7] = {0};
    snprintf(mode_buff, 7, " %02d    ",rgblight_get_mode());
    oled_write(mode_buff, false);

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("1"), led_state.num_lock);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("A"), led_state.caps_lock);
    oled_write_P(PSTR(" "), false);
    oled_write_P(PSTR("S"), led_state.scroll_lock);

    oled_set_cursor(0,1);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer:"), false);
    char layer_buff[9] = {0};
    snprintf(layer_buff, 9, " %02d       ",get_highest_layer(layer_state));
    oled_write(layer_buff, false);

    oled_set_cursor(0,2);

    oled_write_P(PSTR(""), false);

    oled_set_cursor(0,3);

    oled_write_P(PSTR(""), false);
}
#endif


void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(____);
        } else {
            tap_code(____);
        }
    }
}
