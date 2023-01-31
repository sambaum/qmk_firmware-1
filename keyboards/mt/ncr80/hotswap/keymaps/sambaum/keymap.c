#include QMK_KEYBOARD_H
#include "sambaum.h"
#include "keymap_swiss_de.h"
#include "sendstring_swiss_de.h"



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_ESC,              KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        QK_GESC,             KC_1,    KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    MA_MINS, MA_EQL,  KC_BSPC, KC_PSCR, KC_HOME, KC_PGUP,
        LT(_TABFN, KC_TAB),  LT_Q,    KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    MA_LBRC, LT_RBRC, MA_BSLS, KC_DEL,  KC_END,  KC_PGDN,
        KC_LCTL,             KC_A,    KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    MA_SCLN, MA_QUOT,          KC_ENT,
        KC_LSFT,                      KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,
        KC_LGUI,                      KC_LALT,                             LT(_SPACEFN, KC_SPC),      KC_RALT, MO(_FN),                            KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [_SPACEFN] = LAYOUT(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_INS, _______, _______,
        ALTTAB,              LCA_PAU, ALTTAB,   ALTPGUP, MA_BTN2, _______, _______, KC_HOME, KC_UP  , KC_END , _______, KC_LBRC, _______, TG(_NUM),_______, _______, _______,
        KC_RCTL,             CAPSWRD, PREVTAB,  ALTPGDN, NEXTTAB, _______, KC_PGUP, KC_LEFT, KC_DOWN, KC_RGHT, KC_SCLN, KC_QUOT,          _______,
        _______,                      _______,  _______, _______, CLIPT,   KC_SPC,  KC_PGDN, MA_BTN3, _______, _______, _______, _______,                   KC_VOLU,
        _______,                      _______,                             _______,                   _______, _______,                            _______, KC_VOLD, KC_MPLY
    ),

    [_TABFN] = LAYOUT(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TG(_TFN),            LGUI1,   LGUI2,    LGUI3,   LGUI4,   LGUI5,   LGUI6,   LGUI7,   LGUI8,   LGUI9,   KC_NUM,  XXXXXXX, XXXXXXX, _______, _______, _______, _______,
        _______,             MO(_SCR),XXXXXXX,  KC_ENT,  XXXXXXX, XXXXXXX, DIVIDE,  KC_7,    KC_8,    KC_9,    MINUS,   XXXXXXX, XXXXXXX, _______, _______, _______, _______,
        _______,             XXXXXXX, KC_SLEP,  XXXXXXX, XXXXXXX, XXXXXXX, MULPLY,  KC_4,    KC_5,    KC_6,    PLUS,    COLON,            _______,
        _______,                      XXXXXXX,  XXXXXXX, XXXXXXX, AHKTYPE, XXXXXXX, KC_SPC,  KC_1,    KC_2,    KC_3,    KC_DOT,  _______,                   _______,
        _______,                      _______,                             KC_0,                      _______, _______,                            _______, _______, _______
    ),

    [_FN] = LAYOUT(
        QK_BOOT,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        QK_BOOT,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,                      _______,  _______, _______, _______, _______, NK_TOGG, _______, _______, ATEN,    _______, ATEN,                      _______,
        GUI_TOG,                      _______,                             _______,                   _______, _______,                            _______, _______, _______
    ),

    [_QFN] = LAYOUT(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, VDNEW,    VDLEFT,  VDRGHT,  VDREM,   _______, EN_U,    KC_UP  , EN_O,    EN_P,    _______, _______, _______, _______, _______, _______,
        _______,             _______, _______,  _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______,
        _______,                      _______,  _______, CS_C,    CS_V,    _______, _______, _______, _______, _______, _______, _______,                   _______,
        _______,                      _______,                             _______,                   _______, _______,                            _______, _______, _______
    ),

    [_SPECCHAR] = LAYOUT(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        TG(_QFN),            XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______,
        _______,             XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_7), S(KC_8), S(KC_9), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,
        _______,             XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_4), S(KC_5), S(KC_6), XXXXXXX, XXXXXXX,          _______,
        _______,                      XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_1), S(KC_2), S(KC_3), XXXXXXX, _______,                   _______,
        _______,                      XXXXXXX,                             S(KC_0),                   _______, _______,                            _______, _______, _______
    ),

    [_BRACKETS] = LAYOUT(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______,
        _______,             XXXXXXX, XXXXXXX,  LSBR,    RSBR,    XXXXXXX, XXXXXXX, LSBR,    RSBR,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______,
        _______,             XXXXXXX, XXXXXXX,  LCBR,    RCBR,    XXXXXXX, XXXXXXX, LCBR,    RCBR,    XXXXXXX, XXXXXXX, XXXXXXX,          _______,
        _______,                      XXXXXXX, XXXXXXX,  LABK,    RABK,    XXXXXXX, XXXXXXX, LABK,    RABK,    XXXXXXX, XXXXXXX, _______,                   _______,
        _______,                      XXXXXXX,                             _______,                   _______, _______,                            _______, _______, _______
    ),

    [_GAMING] = LAYOUT(
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS, KC_EQL,  _______, _______, _______, _______,
        KC_TAB,              KC_Q,    _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, _______, KC_BSLS, _______, _______, _______,
        KC_CAPS,             _______, _______,  _______, _______, _______, _______, _______, _______, _______, KC_SCLN, KC_QUOT,          _______,
        _______,                      _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
        KC_LCTL,                      _______,                             KC_SPC,                    _______, _______,                            _______, _______, _______
    ),

    [_NUMPAD] = LAYOUT(
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII,
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, IIIIIII, KC_BSPC, KC_DEL,  IIIIIII, IIIIIII,
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, DIVIDE,  KC_7,    KC_8,    KC_9,    MINUS,   IIIIIII, IIIIIII, KC_BSPC, IIIIIII, IIIIIII, IIIIIII,
        IIIIIII,             IIIIIII, IIIIIII,  IIIIIII, IIIIIII, IIIIIII, MULPLY,  KC_4,    KC_5,    KC_6,    PLUS,    COLON,            KC_ENT,
        IIIIIII,                      IIIIIII,  IIIIIII, IIIIIII, IIIIIII, IIIIIII, KC_SPC,  KC_1,    KC_2,    KC_3,    KC_DOT,  IIIIIII,                   IIIIIII,
        IIIIIII,                      IIIIIII,                             KC_0,                      IIIIIII, IIIIIII,                            IIIIIII, IIIIIII, IIIIIII
    ),

};
