#include QMK_KEYBOARD_H

void keyboard_post_init_kb(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;

    // Print the Product
    print("Product: " STR(PRODUCT) "\n");

    dprint("Debug: Enabled\n");

    // Call the keyboard post init code.
    keyboard_post_init_user();
}
