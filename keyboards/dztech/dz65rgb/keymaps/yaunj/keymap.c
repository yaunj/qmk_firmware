#include "yaunj.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_65_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_END,
        TO(_COLEMAK), KC_LGUI, KC_LALT,                       LT(_NAV,KC_SPC),           KC_RALT, MO(_ADJUST),KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_COLEMAK] = LAYOUT_65_ansi(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, _______,
        _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, _______,
        _______, C_M_A,   C_M_R,   C_M_S,   C_M_T,   KC_D,    KC_H,    C_M_N,   C_M_E,   C_M_I,   C_M_O,   KC_QUOT,          _______, _______,
        _______,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______, _______, _______,
        TO(_QWERTY), _______, _______,                        _______,                   _______, _______, _______, _______, _______, _______
    ),

    [_NAV] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, SFT_INS, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BRIU, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, KC_WBAK, KC_BRID, KC_WFWD
    ),

    [_ADJUST] = LAYOUT_65_ansi(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  _______,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, KC_PSCR, KC_SLCK, KC_PAUS, RESET,   _______,
        _______, RGB_SPI, RGB_SPD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          EEP_RST, _______,
        _______,          _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, KC_VOLU, KC_MUTE,
        _______, _______, _______,                            _______,                   _______, _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
    )
};
