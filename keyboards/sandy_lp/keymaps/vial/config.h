/*
Copyright 2024 Takeshi Nishio

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Vial */
#define VIAL_KEYBOARD_UID {0x82, 0xB5, 0xEC, 0x8C, 0x6C, 0x2D, 0xB6, 0x5F}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

/* RGB Lighting */
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LAYERS_RETAIN_VAL

/* Dynamic Keymap */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8 // default:4

/* Audio */
#define AUDIO_PIN GP18
#define AUDIO_PWM_DRIVER PWMD1
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define AUDIO_INIT_DELAY
#define AUDIO_CLICKY
#define MUSIC_MAP
#define AUDIO_VOICES
#define AUDIO_ENABLE_TONE_MULTIPLEXING
#define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10

/* Tap-Hold */
// #define HOLD_ON_OTHER_KEY_PRESS
// comment-out "HOLD_ON_OTHER_KEY_PRESS_PER_KEY" for VIAL
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY
