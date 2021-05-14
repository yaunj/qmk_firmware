#include "extended_space_cadet.h"

static int cadet_o_tap_state = 0;
static int cadet_c_tap_state = 0;


int cur_dance (qk_tap_dance_state_t *state) {
  if(state->pressed)
    return HOLD;
  
  if (state->count == 1)
    return SINGLE_TAP;

  if (state->count == 2)
    return DOUBLE_TAP;

  if (state->count == 3)
    return TRIPLE_TAP;

  if (state->count == 4)
    return QUAD_TAP;

   return -1;
}


void cadet_o_finished (qk_tap_dance_state_t *state, void *user_data) {
  cadet_o_tap_state = cur_dance(state);
  switch (cadet_o_tap_state) {
  case SINGLE_TAP:
    register_code16(KC_LPRN);
    break;
  case DOUBLE_TAP:  
    register_code16(KC_LCBR);
    break;
  case TRIPLE_TAP:
    register_code16(KC_LBRC);
    break;
  case QUAD_TAP:
    break;
  case HOLD:
    register_mods(MOD_BIT(KC_LSFT));
  }
}

void cadet_o_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (cadet_o_tap_state) {
  case SINGLE_TAP:
    unregister_code16(KC_LPRN);
    break;
  case DOUBLE_TAP:
    unregister_code16(KC_LCBR);
    break;
  case TRIPLE_TAP:
    unregister_code16(KC_LBRC);
    break;
  case QUAD_TAP:
    break;
  case HOLD:
    unregister_mods(MOD_BIT(KC_LSFT));
    break;
  }
  cadet_o_tap_state = 0;
}


void cadet_c_finished (qk_tap_dance_state_t *state, void *user_data) {
  cadet_c_tap_state = cur_dance(state);
  switch (cadet_c_tap_state) {
  case SINGLE_TAP:
    register_code16(KC_RPRN);
    break;
  case DOUBLE_TAP:
    register_code16(KC_RCBR);
    break;
  case TRIPLE_TAP:
    register_code16(KC_RBRC);
    break;
  case QUAD_TAP:
    break;
  case HOLD:
    register_mods(MOD_BIT(KC_RSFT));
  }
}

void cadet_c_reset (qk_tap_dance_state_t *state, void *user_data) {
  switch (cadet_c_tap_state) {
  case SINGLE_TAP:
    unregister_code16(KC_RPRN);
    break;
  case DOUBLE_TAP:
    unregister_code16(KC_RCBR);
    break;
  case TRIPLE_TAP:
    unregister_code16(KC_RBRC);
    break;
  case QUAD_TAP:
    break;
  case HOLD:
    unregister_mods(MOD_BIT(KC_RSFT));
    break;
  }
  cadet_c_tap_state = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [CADET_O] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, cadet_o_finished, cadet_o_reset),
  [CADET_C] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, cadet_c_finished, cadet_c_reset),
};
