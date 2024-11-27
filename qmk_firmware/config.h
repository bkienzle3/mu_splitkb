// Copyright 2024 bkienzle3 (@bkienzle3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT

// handedness
#define EE_HANDS

// mouse settings
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 15
#define MOUSEKEY_MOVE_DELTA 3
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_WHEEL_DELAY 100
#define MOUSEKEY_WHEEL_INTERVAL 50
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// homerow mods
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 90
#define TAPPING_TERM_PER_KEY
