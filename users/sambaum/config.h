
/*
 * If you press a Mod Tap key, tap another key (press and release)
 * and then release the Mod Tap key, all within the tapping term,
 * it will still register the Mod-combo
 */
#define PERMISSIVE_HOLD

// USB Suspended state
//#define RGB_DISABLE_WHEN_USB_SUSPENDED true

// Used togehter with tap dance
//#define ONESHOT_TIMEOUT 275

/*
 * what is a tap and what is a hold (200 is the default)
 * Default is set in the get_tapping_term function
 */
//#define TAPPING_TERM 275

// Enables handling for per key TAPPING_TERM settings
// Note: If defined, there is a problm with LT() and PERMISSIVE_HOLD
// TAPPING_TERM_PER_KEY for LT() must be set to >=500
// The problem is described here: https://github.com/qmk/qmk_firmware/issues/8999
#define TAPPING_TERM_PER_KEY

// Required for RSFT
#define TAPPING_FORCE_HOLD_PER_KEY

/*
 * Holding and releasing a dual-function key without pressing another key will result in nothing happening.
 * With retro tapping enabled, releasing the key without pressing another will send the original keycode even if it is outside the tapping term.
 */
#define RETRO_TAPPING_PER_KEY

/*
 * Required for ATEN macro and RDP
 * Sets the delay between register_code and unregister_code with a tap,
 * if you're having issues with it registering properly (common on VUSB boards).
 * The value is in milliseconds.
 * In the keyboard section, change the drop down to "On this Computer"
 */
// #define TAP_CODE_DELAY 30


// For boards with RGBLIGHT_ENABLE (bm16)
#define RGBLIGHT_LAYERS
#define RGBLIGHT_SLEEP

/*
 * If you press a dual-role key, press another key, and then release the dual-role key,
 * all within the tapping term, by default the dual-role key will perform its tap action.
 * If the HOLD_ON_OTHER_KEY_PRESS option is enabled, the dual-role key will perform its hold action instead.
 */
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY


// Key delay, useful for multip-hop RDP in non-fullscreen
#define KEYBOARD_MOD_PACKET_DELAY 20

// Don't enable NKRO by default
#undef FORCE_NKRO



// Save some memory
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_BREATHING
#undef ENABLE_RGB_MATRIX_BAND_SAT
#undef ENABLE_RGB_MATRIX_BAND_VAL
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
//#undef ENABLE_RGB_MATRIX_CYCLE_ALL
#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#undef ENABLE_RGB_MATRIX_DUAL_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#undef ENABLE_RGB_MATRIX_RAINDROPS
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#undef ENABLE_RGB_MATRIX_HUE_BREATHING
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM
#undef ENABLE_RGB_MATRIX_HUE_WAVE
#undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN
#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#undef ENABLE_RGB_MATRIX_SPLASH
#undef ENABLE_RGB_MATRIX_MULTISPLASH
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
