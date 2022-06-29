/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
#pragma once

#include "kyria.h"
#ifdef KEYBOARD_splitkb_kyria_rev1_proton_c
#    include "proton_c.h"
#endif

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05,                     R06, R07, R08, R09, R10, R11, \
    L12, L13, L14, L15, L16, L17,                     R18, R19, R20, R21, R22, R23, \
    L24, L25, L26, L27, L28, L29, L30, L31, R32, R33, R34, R35, R36, R37, R38, R39, \
                   L40, L41, L42, L43, L44, R45, R46, R47, R48, R49 \
) \
{ \
    { L00, L01,   L02,   L03,   L04,   L05, KC_NO     }, \
    { L12, L13,   L14,   L15,   L16,   L17, KC_NO     }, \
    { L24, L25,   L26,   L27,   L28,   L29, KC_NO     }, \
    { L40, L41,   L42,   L43,   L44,   L30, L31,     }, \
\
    { R11, R10,   R09,   R08,   R07,   R06,   KC_NO   }, \
    { R23, R22,   R21,   R20,   R19,   R18,   KC_NO   }, \
    { R39, R38,   R37,   R36,   R35,   R34,   KC_NO   }, \
    { R49, R48,   R47,   R46,   R45,   R33,   R32     }, \
}

#define LAYOUT_stack(                               \
    L00, L01, L02, L03, L04, L05,                   \
    L12, L13, L14, L15, L16, L17,                   \
    L24, L25, L26, L27, L28, L29, L30, L31,         \
                   L40, L41, L42, L43, L44,         \
                                                    \
                  R06, R07, R08, R09, R10, R11,     \
                  R18, R19, R20, R21, R22, R23,     \
        R32, R33, R34, R35, R36, R37, R38, R39,     \
        R45, R46, R47, R48, R49                     \
)                                               \
{                                               \
    { L00, L01,   L02,   L03,   L04,   L05, KC_NO     }, \
    { L12, L13,   L14,   L15,   L16,   L17, KC_NO     }, \
    { L24, L25,   L26,   L27,   L28,   L29, KC_NO     }, \
    { L40, L41,   L42,   L43,   L44,   L30, L31,     }, \
\
    { R11, R10,   R09,   R08,   R07,   R06,   KC_NO   }, \
    { R23, R22,   R21,   R20,   R19,   R18,   KC_NO   }, \
    { R39, R38,   R37,   R36,   R35,   R34,   KC_NO   }, \
    { R49, R48,   R47,   R46,   R45,   R33,   R32     }, \
}

#define LAYOUT_split_3x6_5 LAYOUT
#define FINGERS( \
    L00, L01, L02, L03, L04, L05,                     R06, R07, R08, R09, R10, R11, \
    L12, L13, L14, L15, L16, L17,                     R18, R19, R20, R21, R22, R23, \
    L24, L25, L26, L27, L28, L29,                     R34, R35, R36, R37, R38, R39, \
) \
{ \
    { L00, L01,   L02,   L03,   L04,   L05, KC_NO     }, \
    { L12, L13,   L14,   L15,   L16,   L17, KC_NO     }, \
    { L24, L25,   L26,   L27,   L28,   L29, KC_NO     }, \
    { L40, L41,   L42,   L43,   L44,   L30, L31,     }, \
\
    { R11, R10,   R09,   R08,   R07,   R06,   KC_NO   }, \
    { R23, R22,   R21,   R20,   R19,   R18,   KC_NO   }, \
    { R39, R38,   R37,   R36,   R35,   R34,   KC_NO   }, \
    { R49, R48,   R47,   R46,   R45,   R33,   R32     }, \
}
