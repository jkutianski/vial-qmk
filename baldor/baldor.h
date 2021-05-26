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

#pragma once

#include "quantum.h"

#pragma once

#include "quantum.h"
#include "via.h"

// clang-format off
#define LAYOUT( \
                                                                    K706, \
  K000, K400, K001, K401, K002, K402, K003, K403, K004, K404, K005, K405, \
  K100, K500, K101, K501, K102, K502, K103, K503, K104, K504, K105, K505, \
  K200, K600, K201, K601, K202, K602, K203, K603, K204, K604, K205, K605, \
  K300, K700, K301, K701, K302, K702, K303, K703, K304, K704, K305, K705, \
  K106, K506, K107, K507, K108, K508, K109, K509, K110, K510, K111, K511, \
  K006, K406, K007, K407, K008, K408, K009, K409, K010, K410, K011, K411, \
  K206, K606, K207, K607, K208, K608, K209, K609, K210, K610, K211, K611  \
) { \
  { K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011  }, \
  { K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111  }, \
  { K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211  }, \
  { K300,  K301,  K302,  K303,  K304,  K305,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
  { K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411  }, \
  { K500,  K501,  K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511  }, \
  { K600,  K601,  K602,  K603,  K604,  K605,  K606,  K607,  K608,  K609,  K610,  K611  }, \
  { K700,  K701,  K702,  K703,  K704,  K705,  K706,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}
// clang-format on
