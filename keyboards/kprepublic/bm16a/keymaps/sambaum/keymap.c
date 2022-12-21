/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define RGBLIGHT_LAYERS

// Layers
#define _BASE 0
#define _BLENDER 1
#define _BLENDER2 2
#define _FN2 3
#define _FN3 4
#define _FN4 5

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT_ortho_4x4(
    KC_PGUP,       KC_HOME,        KC_UP,          KC_END ,       \
    KC_PGDN,       KC_LEFT,        KC_DOWN,        KC_RGHT,       \
    _______,       KC_VOLU,        KC_MPLY,        KC_MPRV,       \
    MO(_FN4),      KC_VOLD,        KC_MUTE,        KC_MNXT        \
  ),

// I=Trim Left, O=Trim Right, K=Cut, G=Grab, SFT+B=Select/Zoom, SFT+S=Snaps Strips to the current frame
  [_BLENDER] = LAYOUT_ortho_4x4(
    KC_ESC,        KC_S,           KC_HOME,        KC_DEL,        \
    KC_LCTL,       KC_I,           KC_O,           KC_K,          \
    KC_LSFT,       C(KC_Y),        KC_B,           KC_G,          \
    KC_TRNS,       _______,        MO(_BLENDER2),  KC_SPC         \
  ),

// ALT+2/3/4=Speed up, CTL+ALT+P=Setting the preview range, SFT+ALT+T=Trim in all channels and remove gaps
  [_BLENDER2] = LAYOUT_ortho_4x4(
    _______,       A(KC_2),        A(KC_3),        A(KC_4),       \
    KC_A,          C(A(KC_P)),     S(C(KC_G)),     S(A(KC_T)),    \
    _______,       _______,        C(A(KC_B)),     KC_PGUP,       \
    KC_TRNS,       _______,        _______,        KC_PGDN        \
  ),

  [_FN2] = LAYOUT_ortho_4x4(
    _______,       _______,        _______,        _______,       \
    _______,       _______,        _______,        _______,       \
    _______,       _______,        _______,        _______,       \
    KC_TRNS,       _______,        _______,        _______        \
  ),

  [_FN3] = LAYOUT_ortho_4x4(
    RGB_TOG,       RGB_HUI,        RGB_SAI,        RGB_VAI,       \
    RGB_MOD,       RGB_HUD,        RGB_SAD,        RGB_VAD,       \
    _______,       _______,        _______,        _______,       \
    KC_TRNS,       _______,        BL_STEP,        _______        \
  ),

  [_FN4] = LAYOUT_ortho_4x4(
    TO(_BASE),     TO(_BLENDER),   TO(_FN2),       TO(_FN3),      \
    _______,       _______,        _______,        _______,       \
    _______,       _______,        _______,        _______,       \
    KC_TRNS,       _______,        _______,        QK_BOOT        \
  )

};

///////////////////// LED BEGIN /////////////////////

const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 4, HSV_CYAN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer0_layer,
    my_layer1_layer,
    my_layer2_layer,
    my_layer3_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

//layer_state_t default_layer_state_set_user(layer_state_t state) {
//    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
//    return state;
//}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _BLENDER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _FN2));
//    rgblight_set_layer_state(3, layer_state_cmp(state, _FN3));
    return state;
}

///////////////////// LED END /////////////////////
