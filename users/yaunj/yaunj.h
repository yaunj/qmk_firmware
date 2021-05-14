#pragma once

#include QMK_KEYBOARD_H

enum yaunj_layers {
  _QWERTY,
  _COLEMAK,
  _LOWER,
  _RAISE,
  _NUMPAD,
  _NAV,
  _MOUSE,
  _ADJUST
};

enum yaunj_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  NEW_SAFE_RANGE,
};

#define LOWER LT(_LOWER, KC_BSPC)
#define RAISE LT(_RAISE, KC_ENT)
#define NUMPAD TT(_NUMPAD)

#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_INS LCTL(KC_INS)
#define SFT_INS LSFT(KC_INS)
#define SPACEFN LT(_NAV, KC_SPC)

/* home row mods qwerty */
#define Q_M_A LGUI_T(KC_A)
#define Q_M_S LALT_T(KC_S)
#define Q_M_D LSFT_T(KC_D)
#define Q_M_F LCTL_T(KC_F)

#define Q_M_J RCTL_T(KC_J)
#define Q_M_K RSFT_T(KC_K)
#define Q_M_L LALT_T(KC_L)
#define Q_M_SC RGUI_T(KC_SCLN)

/* home row mods colemak */
#define C_M_A LGUI_T(KC_A)
#define C_M_R LALT_T(KC_R)
#define C_M_S LSFT_T(KC_S)
#define C_M_T LCTL_T(KC_T)

#define C_M_N RCTL_T(KC_N)
#define C_M_E RSFT_T(KC_E)
#define C_M_I LALT_T(KC_I)
#define C_M_O RGUI_T(KC_O)
