#include QMK_KEYBOARD_H
#include "sambaum.h"
#include "keymap_swiss_de.h"
#include "sendstring_swiss_de.h"



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_65_ansi(
        QK_GESC,             KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    MA_MINS, MA_EQL,  KC_BSPC, KC_DEL,
        LT(_TABFN, KC_TAB),  LT_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    MA_LBRC, LT_RBRC, MA_BSLS, KC_PSCR,
        KC_LCTL,             KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    MA_SCLN, MA_QUOT,          KC_ENT,  KC_PGUP,
        KC_LSFT,                      KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
        LCTL_T(KC_CAPS),     KC_LGUI, KC_LALT,                             LT(_SPACEFN, KC_SPC),      KC_RALT, MO(_FN), MO(_SFN),KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_SPACEFN] = LAYOUT_65_ansi(
        _______,             KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12 , _______, KC_MUTE,
        ALTTAB,              LCA_PAU, ALTTAB,   ALTPGUP, KC_BTN2, _______, _______, KC_HOME, KC_UP  , KC_END , _______, KC_LBRC, _______, TG(_NUM),KC_INS,
        KC_RCTL,             CAPSWRD, PREVTAB,  ALTPGDN, NEXTTAB, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_QUOT,          _______, KC_END,
        _______,                      _______,  _______, _______, CLIPT,   KC_SPC,  KC_PGDN, KC_BTN3, _______, _______, _______, _______, KC_VOLU, KC_HOME,
        _______,             _______, _______,                             _______,                   _______, _______, _______, _______, KC_VOLD, KC_MPLY
    ),

    [_TABFN] = LAYOUT_65_ansi(
        TG(_TFN),            LGUI1,   LGUI2,    LGUI3,   LGUI4,   LGUI5,   LGUI6,   LGUI7,   LGUI8,   LGUI9,   KC_NUM,  XXXXXXX, XXXXXXX, _______, _______,
        _______,             MO(_SCR),XXXXXXX,  KC_ENT,  XXXXXXX, XXXXXXX, DIVIDE,  KC_7,    KC_8,    KC_9,    MINUS,   XXXXXXX, XXXXXXX, TG(_TFN),_______,
        _______,             XXXXXXX, KC_SLEP,  XXXXXXX, XXXXXXX, XXXXXXX, MULPLY,  KC_4,    KC_5,    KC_6,    PLUS,    COLON,            _______, _______,
        _______,                      XXXXXXX,  XXXXXXX, XXXXXXX, AHKTYPE, XXXXXXX, KC_SPC,  KC_1,    KC_2,    KC_3,    KC_DOT,  _______, _______, _______,
        _______,             _______, _______,                             KC_0,                      _______, _______, _______, _______, _______, _______
    ),

    [_FN] = LAYOUT_65_ansi(
        QK_BOOT,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LSCR,
        _______,             RGB_TOG, RGB_MOD,  RGB_HUI, RGB_VAI, RGB_SAI, _______, _______, _______, _______, _______, _______, _______, _______, KC_LNUM,
        _______,             RGB_M_P, RGB_RMOD, RGB_HUD, RGB_VAD, RGB_SAD, _______, _______, _______, _______, _______, _______,          _______, KC_PAUS,
        _______,                      _______,  _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, _______, TG(_GAMING),
        _______,             GUI_TOG, _______,                             _______,                   _______, _______, _______, _______, _______, _______
    ),

    [_QFN] = LAYOUT_65_ansi(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, VDNEW,    VDLEFT,  VDRGHT,  VDREM,   _______, EN_U,    KC_UP  , EN_O,    EN_P,    _______, _______, _______, _______,
        _______,             _______, _______,  _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______, _______,
        _______,                      _______,  _______, CS_C,    CS_V,    _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, _______,                             _______,                   _______, _______, _______, _______, _______, _______
    ),

    [_SPECCHAR] = LAYOUT_65_ansi(
        TG(_QFN),            XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
        _______,             XXXXXXX, _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_7), S(KC_8), S(KC_9), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______,             XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_4), S(KC_5), S(KC_6), XXXXXXX, XXXXXXX,          _______, _______,
        _______,                      XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_1), S(KC_2), S(KC_3), XXXXXXX, _______, _______, _______,
        _______,             _______, XXXXXXX,                             S(KC_0),                   _______, _______, _______, _______, _______, _______
    ),

    [_BRACKETS] = LAYOUT_65_ansi(
        _______,             XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
        _______,             XXXXXXX, XXXXXXX,  LSBR,    RSBR,    XXXXXXX, XXXXXXX, LSBR,    RSBR,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______,             XXXXXXX, XXXXXXX,  LCBR,    RCBR,    XXXXXXX, XXXXXXX, LCBR,    RCBR,    XXXXXXX, XXXXXXX, XXXXXXX,          _______, _______,
        _______,                      XXXXXXX,  XXXXXXX, LABK,    RABK,    XXXXXXX, XXXXXXX, LABK,    RABK,    XXXXXXX, XXXXXXX, _______, _______, _______,
        _______,             _______, _______,                             XXXXXXX,                   _______, _______, _______, _______, _______, _______
    ),

    [_GAMING] = LAYOUT_65_ansi(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  _______, _______,
        KC_TAB,              KC_Q,    _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, _______, KC_BSLS, LT(_SFN, KC_INS),
        KC_CAPS,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, KC_SCLN, KC_QUOT,          _______, _______,
        _______,                      _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        KC_LCTL,             _______, _______,                             KC_SPC,                    _______, _______, _______, _______, _______, _______
    ),

    [_NUMPAD] = LAYOUT_65_ansi(
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, KC_BSPC, KC_DEL,
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, DIVIDE,  KC_7,    KC_8,    KC_9,    MINUS,   IIIIIII, IIIIIII, KC_BSPC, IIIIIII,
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, MULPLY,  KC_4,    KC_5,    KC_6,    PLUS,    COLON,            KC_ENT,  IIIIIII,
        IIIIIII,                      IIIIIII,  IIIIIII, IIIIIII, IIIIIII, IIIIIII, KC_SPC,  KC_1,    KC_2,    KC_3,    KC_DOT,  IIIIIII, IIIIIII, IIIIIII,
        IIIIIII,             IIIIIII, IIIIIII,                             KC_0,                      IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII
    )

};



///////////////////// LED BEGIN /////////////////////
/*
  {  0,  1,  2,      3,      4,  5,      6,      7,  8,  9, 10, 11,     12, 13, 14 },
  { 15, 16, 17,     18,     19, 20,     21,     22, 23, 24, 25, 26,     27, 28, 29 },
  { 30, 31, 32,     33,     34, 35,     36,     37, 38, 39, 40, 41, NO_LED, 42, 43 },
  { 44, 45, 46,     47,     48, 49,     50,     51, 52, 53, 54, 55, NO_LED, 56, 57 },
  { 58, 59, 60, NO_LED, NO_LED, 61, NO_LED, NO_LED, 62, 63, 64, 65, NO_LED, 66, 67 }
*/


int LED_RIGHT_SIDE[] = {6, 7, 8, 9, 10, 11, 12, 13, 14, 21, 22, 23, 24, 25, 26, 27, 28, 29, 36, 37, 38, 39, 40, 41, 42, 43, 50, 51, 52, 53, 54, 55, 56, 57, 62, 63, 64, 65, 66, 67};
int LED_RIGHT_SIDE_SIZE = *(&LED_RIGHT_SIDE + 1) - LED_RIGHT_SIDE;

int LED_LEFT_SIDE[] = {0, 1, 2, 3, 4, 5, 6, 15, 16, 17, 18, 19, 20, 21, 30, 31, 32, 33, 34, 35, 36, 44, 45, 46, 47, 48, 49, 50, 58, 59, 60};
int LED_LEFT_SIDE_SIZE = *(&LED_LEFT_SIDE + 1) - LED_LEFT_SIDE;

int LED_DIVIDER[] = {6, 21, 36, 50};
int LED_DIVIDER_SIZE = *(&LED_DIVIDER + 1) - LED_DIVIDER;

int LED_GAMING_A[] = {5, 6, 7, 8, 9, 10};
int LED_GAMING_A_SIZE = *(&LED_GAMING_A + 1) - LED_GAMING_A;

int LED_ALPHANUM[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 61};
int LED_ALPHANUM_SIZE = *(&LED_ALPHANUM + 1) - LED_ALPHANUM;

void loop_rgb_matrix_set_color(int *indices, int array_size, int r, int g, int b) {
  for (int i = 0; i < array_size; i++) {
  rgb_matrix_set_color(indices[i], r, g, b); // Set color A here
  }
}

bool rgb_matrix_indicators_user(void) {

  led_t led_state = host_keyboard_led_state();

  switch (biton32(layer_state)) {
      case _FN:
        rgb_matrix_set_color(0, RGB_RED); // reset
        rgb_matrix_set_color(63, RGB_RED); // fn
        break;
      case _QFN:
        rgb_matrix_set_color(22, RGB_CYAN);
        rgb_matrix_set_color(23, RGB_CYAN);
        rgb_matrix_set_color(24, RGB_CYAN);
        rgb_matrix_set_color(25, RGB_CYAN);
        rgb_matrix_set_color(37, RGB_CYAN);
        rgb_matrix_set_color(38, RGB_CYAN);
        rgb_matrix_set_color(39, RGB_CYAN);
        break;
      case _SPECCHAR:
        loop_rgb_matrix_set_color(LED_RIGHT_SIDE, LED_RIGHT_SIDE_SIZE, RGB_MAGENTA);
        loop_rgb_matrix_set_color(LED_DIVIDER, LED_DIVIDER_SIZE, RGB_BLUE);
        break;
      case _BRACKETS:
        loop_rgb_matrix_set_color(LED_LEFT_SIDE, LED_LEFT_SIDE_SIZE, RGB_YELLOW);
        loop_rgb_matrix_set_color(LED_DIVIDER, LED_DIVIDER_SIZE, RGB_RED);
        break;
      case _GAMING:
        loop_rgb_matrix_set_color(LED_GAMING_A, LED_GAMING_A_SIZE, RGB_MAGENTA);
        break;
      case _SPACEFN:
        // all LEDs red
        loop_rgb_matrix_set_color(LED_ALPHANUM, LED_ALPHANUM_SIZE, RGB_RED);
        break;
      case _TABFN:
      case _NUMPAD:
        loop_rgb_matrix_set_color(LED_RIGHT_SIDE, LED_RIGHT_SIDE_SIZE, RGB_CYAN);
        loop_rgb_matrix_set_color(LED_DIVIDER, LED_DIVIDER_SIZE, RGB_BLUE);
        break;
      default:
        if (led_state.caps_lock) {
            rgb_matrix_set_color_all(0, 0, 0);
            loop_rgb_matrix_set_color(LED_ALPHANUM, LED_ALPHANUM_SIZE, RGB_CYAN);
        }
        break;
    }
return true;
}
///////////////////// LED END /////////////////////
