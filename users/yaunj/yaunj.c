#include "yaunj.h"

__attribute__((weak))
bool get_tapping_force_hold_yaunj(uint16_t keycode, keyrecord_t *record) {
  // Enable force hold on asdf jkl;  /  arst neio
  if (IS_LAYER_ON(_QWERTY)) {
      switch (keycode) {
          case Q_M_A:
          case Q_M_S:
          case Q_M_D:
          case Q_M_F:
          case Q_M_J:
          case Q_M_K:
          case Q_M_L:
          case Q_M_SC:
              return true;
      }
  } else if (IS_LAYER_ON(_COLEMAK)) {
      switch (keycode) {
          case C_M_A:
          case C_M_R:
          case C_M_S:
          case C_M_T:
          case C_M_N:
          case C_M_E:
          case C_M_I:
          case C_M_O:
              return true;
      }
  }

  return false;
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    return get_tapping_force_hold_yaunj(keycode, record);
}

#ifdef ENCODER_ENABLE
__attribute__((weak))
void encoder_update_yaunj(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else if (index == 1) {
    if (clockwise) {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_DOWN);
      #else
        tap_code(KC_PGDN);
      #endif
    } else {
      #ifdef MOUSEKEY_ENABLE
        tap_code(KC_MS_WH_UP);
      #else
        tap_code(KC_PGUP);
      #endif
    }
  }
}

void encoder_update_user(uint8_t index, bool clockwise) {
    encoder_update_yaunj(index, clockwise);
}
#endif

#ifdef AUDIO_ENABLE
__attribute__((weak))
bool music_mask_yaunj(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}

bool music_mask_user(uint16_t keycode) {
    return music_mask_yaunj(keycode);
}
#endif
