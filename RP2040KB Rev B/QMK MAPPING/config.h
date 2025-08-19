// Copyright 2025 btanqy (@btanqy)
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
//#define NO_ACTION_ONESHOT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define RP2040_FLASH_IS25LP080
#define ENCODERS_PAD_A { GP24 }
#define ENCODERS_PAD_B { GP25 }
#define ENCODER_RESOLUTION 4
#define USB_SUSPEND_WAKEUP_DELAY 0
#define NO_SUSPEND_POWER_DOWN
#define OS_DETECTION_KEYBOARD_RESET