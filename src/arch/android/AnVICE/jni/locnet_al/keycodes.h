/*
 * keycodes.h
 *
 * Written by
 *  Locnet <android.locnet@gmail.com>
 *
 * This file is part of VICE, the Versatile Commodore Emulator.
 * See README for copyright notice.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 *  02111-1307  USA.
 *
 */

#ifndef _ANDROID_KEYCODES_H
#define _ANDROID_KEYCODES_H

/******************************************************************
 *
 * IMPORTANT NOTICE:
 *
 *   This file is part of Android's set of stable system headers
 *   exposed by the Android NDK (Native Development Kit).
 *
 *   Third-party source AND binary code relies on the definitions
 *   here to be FROZEN ON ALL UPCOMING PLATFORM RELEASES.
 *
 *   - DO NOT MODIFY ENUMS (EXCEPT IF YOU ADD NEW 32-BIT VALUES)
 *   - DO NOT MODIFY CONSTANTS OR FUNCTIONAL MACROS
 *   - DO NOT CHANGE THE SIGNATURE OF FUNCTIONS IN ANY WAY
 *   - DO NOT CHANGE THE LAYOUT OR SIZE OF STRUCTURES
 */

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Key codes.
 */
enum {
    AKEYCODE_UNKNOWN            = 0,
    AKEYCODE_SOFT_LEFT          = 1,
    AKEYCODE_SOFT_RIGHT         = 2,
    AKEYCODE_HOME               = 3,
    AKEYCODE_BACK               = 4,
    AKEYCODE_CALL               = 5,
    AKEYCODE_ENDCALL            = 6,
    AKEYCODE_0                  = 7,
    AKEYCODE_1                  = 8,
    AKEYCODE_2                  = 9,
    AKEYCODE_3                  = 10,
    AKEYCODE_4                  = 11,
    AKEYCODE_5                  = 12,
    AKEYCODE_6                  = 13,
    AKEYCODE_7                  = 14,
    AKEYCODE_8                  = 15,
    AKEYCODE_9                  = 16,
    AKEYCODE_STAR               = 17,
    AKEYCODE_POUND              = 18,
    AKEYCODE_DPAD_UP            = 19,
    AKEYCODE_DPAD_DOWN          = 20,
    AKEYCODE_DPAD_LEFT          = 21,
    AKEYCODE_DPAD_RIGHT         = 22,
    AKEYCODE_DPAD_CENTER        = 23,
    AKEYCODE_VOLUME_UP          = 24,
    AKEYCODE_VOLUME_DOWN        = 25,
    AKEYCODE_POWER              = 26,
    AKEYCODE_CAMERA             = 27,
    AKEYCODE_CLEAR              = 28,
    AKEYCODE_A                  = 29,
    AKEYCODE_B                  = 30,
    AKEYCODE_C                  = 31,
    AKEYCODE_D                  = 32,
    AKEYCODE_E                  = 33,
    AKEYCODE_F                  = 34,
    AKEYCODE_G                  = 35,
    AKEYCODE_H                  = 36,
    AKEYCODE_I                  = 37,
    AKEYCODE_J                  = 38,
    AKEYCODE_K                  = 39,
    AKEYCODE_L                  = 40,
    AKEYCODE_M                  = 41,
    AKEYCODE_N                  = 42,
    AKEYCODE_O                  = 43,
    AKEYCODE_P                  = 44,
    AKEYCODE_Q                  = 45,
    AKEYCODE_R                  = 46,
    AKEYCODE_S                  = 47,
    AKEYCODE_T                  = 48,
    AKEYCODE_U                  = 49,
    AKEYCODE_V                  = 50,
    AKEYCODE_W                  = 51,
    AKEYCODE_X                  = 52,
    AKEYCODE_Y                  = 53,
    AKEYCODE_Z                  = 54,
    AKEYCODE_COMMA              = 55,
    AKEYCODE_PERIOD             = 56,
    AKEYCODE_ALT_LEFT           = 57,
    AKEYCODE_ALT_RIGHT          = 58,
    AKEYCODE_SHIFT_LEFT         = 59,
    AKEYCODE_SHIFT_RIGHT        = 60,
    AKEYCODE_TAB                = 61,
    AKEYCODE_SPACE              = 62,
    AKEYCODE_SYM                = 63,
    AKEYCODE_EXPLORER           = 64,
    AKEYCODE_ENVELOPE           = 65,
    AKEYCODE_ENTER              = 66,
    AKEYCODE_DEL                = 67,
    AKEYCODE_GRAVE              = 68,
    AKEYCODE_MINUS              = 69,
    AKEYCODE_EQUALS             = 70,
    AKEYCODE_LEFT_BRACKET       = 71,
    AKEYCODE_RIGHT_BRACKET      = 72,
    AKEYCODE_BACKSLASH          = 73,
    AKEYCODE_SEMICOLON          = 74,
    AKEYCODE_APOSTROPHE         = 75,
    AKEYCODE_SLASH              = 76,
    AKEYCODE_AT                 = 77,
    AKEYCODE_NUM                = 78,
    AKEYCODE_HEADSETHOOK        = 79,
    AKEYCODE_FOCUS              = 80,   // *Camera* focus
    AKEYCODE_PLUS               = 81,
    AKEYCODE_MENU               = 82,
    AKEYCODE_NOTIFICATION       = 83,
    AKEYCODE_SEARCH             = 84,
    AKEYCODE_MEDIA_PLAY_PAUSE   = 85,
    AKEYCODE_MEDIA_STOP         = 86,
    AKEYCODE_MEDIA_NEXT         = 87,
    AKEYCODE_MEDIA_PREVIOUS     = 88,
    AKEYCODE_MEDIA_REWIND       = 89,
    AKEYCODE_MEDIA_FAST_FORWARD = 90,
    AKEYCODE_MUTE               = 91,
    AKEYCODE_PAGE_UP            = 92,
    AKEYCODE_PAGE_DOWN          = 93,
    AKEYCODE_PICTSYMBOLS        = 94,
    AKEYCODE_SWITCH_CHARSET     = 95,
    AKEYCODE_BUTTON_A           = 96,
    AKEYCODE_BUTTON_B           = 97,
    AKEYCODE_BUTTON_C           = 98,
    AKEYCODE_BUTTON_X           = 99,
    AKEYCODE_BUTTON_Y           = 100,
    AKEYCODE_BUTTON_Z           = 101,
    AKEYCODE_BUTTON_L1          = 102,
    AKEYCODE_BUTTON_R1          = 103,
    AKEYCODE_BUTTON_L2          = 104,
    AKEYCODE_BUTTON_R2          = 105,
    AKEYCODE_BUTTON_THUMBL      = 106,
    AKEYCODE_BUTTON_THUMBR      = 107,
    AKEYCODE_BUTTON_START       = 108,
    AKEYCODE_BUTTON_SELECT      = 109,
    AKEYCODE_BUTTON_MODE        = 110,

    // NOTE: If you add a new keycode here you must also add it to several other files.
    //       Refer to frameworks/base/core/java/android/view/KeyEvent.java for the full list.
};

#ifdef __cplusplus
}
#endif

#endif // _ANDROID_KEYCODES_H
