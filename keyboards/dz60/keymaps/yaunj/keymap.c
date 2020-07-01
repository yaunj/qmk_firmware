#include QMK_KEYBOARD_H

#define KC_CESC LCTL_T(KC_ESC)
#define KC_SINS LSFT(KC_INS)

enum layers {
    _QWERTY,
    _MOVE,
    _MOUSE
};

/* LAYOUT_60_ansi_split
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ BSPC  │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │ TAB │ q │ w │ e │ r │ t │ y │ u │ i │ o │ p │ [ │ ] │  \  │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │ CESC │ a │ s │ d │ f │ g │ h │ j │ k │ l │ ; │ ' │   ENT  │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │  SHIFT │ z │ x │ c │ v │ b │ n │ m │ , │ . │ / │  SHIFT   │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │CTRL│GUI │ ALT│  DEL   │ FN │   SPACE  │ ALT│MENU│CTRL│ FN │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_60_ansi_split(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,  KC_5,   KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CESC, KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_DEL,  MO(1), KC_SPC, KC_RALT, KC_MENU, KC_RCTL, TO(_MOUSE)),

    [_MOVE] = LAYOUT_60_ansi_split(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
        _______, _______, _______, KC_END,  _______, _______, _______, _______, KC_SINS, _______, KC_PGUP, _______, _______, _______,
        _______, KC_HOME, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

    [_MOUSE] = LAYOUT_60_ansi_split(
        X_____X, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        X_____X, _______, _______, _______, _______, _______, KC_BTN1, KC_BTN1, KC_BTN2, KC_BTN2, KC_WH_U, _______, _______, _______,
        X_____X, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_WH_D, _______, _______,
        X_____X, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        X_____X, _______, _______, _______, _______, _______, _______, _______, _______, TO(_QWERTY))
};
