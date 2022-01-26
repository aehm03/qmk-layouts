#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _COLEMAK 1
#define _SYMB 2
#define _NAV 3
#define _ADJUST 4

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  SYMB,
  NAV,
  ADJUST,
};

// Shortcut to make keymap more readable
#define CTL_ESC CTL_T(KC_ESC)
#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)
#define KC_ONEP LGUI(KC_BSLS)
#define TG_COL TG(_COLEMAK)

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
      KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                               KC_6,     KC_7,    KC_8,    KC_9,    KC_0,  XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_ONEP,                           TG_COL,  KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,   KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CTL_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_LBRC,                           KC_RBRC, KC_H,     KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSPO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_ADEN, KC_PGDN,        KC_HOME, KC_ADPU,  KC_N,     KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX, KC_MUTE,  KC_LCTL, KC_LALT,      KC_LGUI, LT(2,KC_BSPC), LT(3,KC_DEL), LT(3,KC_ENT),LT(2,KC_SPC),KC_RALT,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
  [_COLEMAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                               KC_6,     KC_7,    KC_8,    KC_9,    KC_0,  XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,   _______,                           TG_COL,  KC_J,     KC_L,    KC_U,    KC_Y,   KC_SCLN,   KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_A,    KC_R,    KC_S,    KC_T,    KC_G,   KC_LBRC,                           KC_RBRC, KC_M,     KC_N,    KC_E,    KC_I,   KC_O,    KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,   KC_ADEN, KC_PGDN,        KC_HOME, KC_ADPU,  KC_K,     KC_H,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______,  _______, _______, ______,      KC_LGUI, LT(2,KC_BSPC), LT(3,KC_DEL), LT(3,KC_ENT),LT(2,KC_SPC),KC_RALT,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,                                              KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR,  KC_PERC, _______,                           _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,   KC_LCBR,                          KC_RCBR,  KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_TILD,  KC_GRV,  KC_BSLS, KC_PIPE, KC_EQL,  _______, _______,         _______, _______, KC_MINS, KC_UNDS, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______,       _______,     _______, _______,         _______, _______,    _______,      _______, _______, _______,  _______
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
),

  [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                                             _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX, XXXXXXX,  KC_MS_U, XXXXXXX,  KC_WH_U, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______, KC_BTN1, KC_BTN2, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

[_ADJUST] = LAYOUT(XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX, XXXXXXX, RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX) 

};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _QWERTY:
            set_led_off;
            break;
        case _COLEMAK:
            set_led_red;
            break;
        case _SYMB:
            set_led_green;
            break;
        case _NAV:
            set_led_blue;
            break;
        case _ADJUST:
            set_led_cyan;
            break;
        default:
            break;
    }
  return state;
}
