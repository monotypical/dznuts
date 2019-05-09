#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* L0: Qwerty */
	LAYOUT_directional(
	KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, _______, KC_BSPC,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
	KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
	KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RCTL, MO(1), KC_LEFT, KC_DOWN, KC_RIGHT
	),

	/* L1: Function keys, front legends on layout.svg*/
	LAYOUT_directional(
	KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______, RESET,
	_______, KC_MEDIA_PLAY_PAUSE, KC_AUDIO_MUTE, KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP, _______, _______, KC_PSCR, KC_SCROLLLOCK, KC_PAUSE, RGB_VAD, RGB_VAI, RGB_TOG, RGB_MODE_FORWARD,
	_______, _______, _______, _______, _______, _______, _______, KC_INSERT, KC_HOME, KC_PGUP, _______, LCTL(LALT(KC_T)), _______,
	_______, _______, _______, _______, _______, _______, _______, _______, KC_END, KC_PGDOWN, _______, _______, _______, _______,
	_______, KC_LOCK, _______, _______, _______, _______, _______, _______, _______, _______, _______
	),
};
