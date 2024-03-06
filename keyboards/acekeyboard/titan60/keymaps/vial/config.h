/* Copyright 2021 Gigahawk
 * Modified 2021 by usrfriendly for vial-qmk
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

# pragma once

#define VIAL_KEYBOARD_UID {0xF5, 0x15, 0x43, 0x26, 0xD9, 0xDA, 0x54, 0x85}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 12 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }

// solenoid support
#define SOLENOID_PIN D2
#define SOLENOID_DEFAULT_DWELL 12
#define SOLENOID_MIN_DWELL 4
#define SOLENOID_MAX_DWELL 100
#define SOLENOID_DWELL_STEP_SIZE 1

// reduce firmware size
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

#define NO_ACTION_ONESHOT

#undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE