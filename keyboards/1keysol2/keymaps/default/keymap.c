#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐
     * │ A │
     * └───┘
     */
    [0] = LAYOUT_ortho_1x1(
        KC_A
    )
};


void haptic_enable(void);

void keyboard_post_init_user(void) {
    // debug_enable=true;
    // debug_matrix=true;
    // print("string");
    haptic_enable();
    // print("waiting 5sec");
    // wait_ms(5000);
    // // setPinOutput(B13);
    // print("b13 high");
    // writePin(B13, 1);
    // wait_ms(4);
    // print("b13 low");
    // writePin(B13, 0);
}
