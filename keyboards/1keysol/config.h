// Copyright 2022 AH (@ah)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"
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
//#define NO_ACTION_ONESHOT

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

#define MATRIX_COL_PINS { B10 }
#define MATRIX_ROW_PINS { B9 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* user def */
#define SOLENOID_PIN B13
#define HAPTIC_ENABLE_PIN A3
#define SOLENOID_DEFAULT_DWELL 4
#define SOLENOID_MIN_DWELL 4
#define SOLENOID_MAX_DWELL 12
#define HAPTIC_OFF_IN_LOW_POWER 1
#define NO_HAPTIC_MOD
#define NO_HAPTIC_NAV
