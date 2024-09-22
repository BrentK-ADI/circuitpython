// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2024 Brandon Hurst, Analog Devices, Inc.
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS
    //P0
    { MP_ROM_QSTR(MP_QSTR_P0_00), MP_ROM_PTR(&pin_P0_00) },
    { MP_ROM_QSTR(MP_QSTR_P0_01), MP_ROM_PTR(&pin_P0_01) },
    { MP_ROM_QSTR(MP_QSTR_P0_02), MP_ROM_PTR(&pin_P0_02) },
    { MP_ROM_QSTR(MP_QSTR_P0_03), MP_ROM_PTR(&pin_P0_03) },
    { MP_ROM_QSTR(MP_QSTR_P0_04), MP_ROM_PTR(&pin_P0_04) },
    { MP_ROM_QSTR(MP_QSTR_P0_05), MP_ROM_PTR(&pin_P0_05) },
    { MP_ROM_QSTR(MP_QSTR_P0_06), MP_ROM_PTR(&pin_P0_06) },
    { MP_ROM_QSTR(MP_QSTR_P0_07), MP_ROM_PTR(&pin_P0_07) },
    { MP_ROM_QSTR(MP_QSTR_P0_08), MP_ROM_PTR(&pin_P0_08) },
    { MP_ROM_QSTR(MP_QSTR_P0_09), MP_ROM_PTR(&pin_P0_09) },
    { MP_ROM_QSTR(MP_QSTR_P0_10), MP_ROM_PTR(&pin_P0_10) },
    { MP_ROM_QSTR(MP_QSTR_P0_11), MP_ROM_PTR(&pin_P0_11) },
    { MP_ROM_QSTR(MP_QSTR_P0_12), MP_ROM_PTR(&pin_P0_12) },
    { MP_ROM_QSTR(MP_QSTR_P0_13), MP_ROM_PTR(&pin_P0_13) },
    { MP_ROM_QSTR(MP_QSTR_P0_14), MP_ROM_PTR(&pin_P0_14) },
    { MP_ROM_QSTR(MP_QSTR_P0_15), MP_ROM_PTR(&pin_P0_15) },
    { MP_ROM_QSTR(MP_QSTR_P0_16), MP_ROM_PTR(&pin_P0_16) },
    { MP_ROM_QSTR(MP_QSTR_P0_17), MP_ROM_PTR(&pin_P0_17) },
    { MP_ROM_QSTR(MP_QSTR_P0_18), MP_ROM_PTR(&pin_P0_18) },
    { MP_ROM_QSTR(MP_QSTR_P0_19), MP_ROM_PTR(&pin_P0_19) },
    { MP_ROM_QSTR(MP_QSTR_P0_20), MP_ROM_PTR(&pin_P0_20) },
    { MP_ROM_QSTR(MP_QSTR_P0_21), MP_ROM_PTR(&pin_P0_21) },
    { MP_ROM_QSTR(MP_QSTR_P0_22), MP_ROM_PTR(&pin_P0_22) },
    { MP_ROM_QSTR(MP_QSTR_P0_23), MP_ROM_PTR(&pin_P0_23) },
    { MP_ROM_QSTR(MP_QSTR_P0_24), MP_ROM_PTR(&pin_P0_24) },
    { MP_ROM_QSTR(MP_QSTR_P0_25), MP_ROM_PTR(&pin_P0_25) },
    { MP_ROM_QSTR(MP_QSTR_P0_26), MP_ROM_PTR(&pin_P0_26) },
    { MP_ROM_QSTR(MP_QSTR_P0_27), MP_ROM_PTR(&pin_P0_27) },
    { MP_ROM_QSTR(MP_QSTR_P0_28), MP_ROM_PTR(&pin_P0_28) },
    { MP_ROM_QSTR(MP_QSTR_P0_29), MP_ROM_PTR(&pin_P0_29) },
    { MP_ROM_QSTR(MP_QSTR_P0_30), MP_ROM_PTR(&pin_P0_30) },
    { MP_ROM_QSTR(MP_QSTR_P0_31), MP_ROM_PTR(&pin_P0_31) },
    //P1
    { MP_ROM_QSTR(MP_QSTR_P1_00), MP_ROM_PTR(&pin_P1_00) },
    { MP_ROM_QSTR(MP_QSTR_P1_01), MP_ROM_PTR(&pin_P1_01) },
    { MP_ROM_QSTR(MP_QSTR_P1_02), MP_ROM_PTR(&pin_P1_02) },
    { MP_ROM_QSTR(MP_QSTR_P1_03), MP_ROM_PTR(&pin_P1_03) },
    { MP_ROM_QSTR(MP_QSTR_P1_04), MP_ROM_PTR(&pin_P1_04) },
    { MP_ROM_QSTR(MP_QSTR_P1_05), MP_ROM_PTR(&pin_P1_05) },
    { MP_ROM_QSTR(MP_QSTR_P1_06), MP_ROM_PTR(&pin_P1_06) },
    { MP_ROM_QSTR(MP_QSTR_P1_07), MP_ROM_PTR(&pin_P1_07) },
    { MP_ROM_QSTR(MP_QSTR_P1_08), MP_ROM_PTR(&pin_P1_08) },
    { MP_ROM_QSTR(MP_QSTR_P1_09), MP_ROM_PTR(&pin_P1_09) },
    { MP_ROM_QSTR(MP_QSTR_P1_10), MP_ROM_PTR(&pin_P1_10) },
    { MP_ROM_QSTR(MP_QSTR_P1_11), MP_ROM_PTR(&pin_P1_11) },
    { MP_ROM_QSTR(MP_QSTR_P1_12), MP_ROM_PTR(&pin_P1_12) },
    { MP_ROM_QSTR(MP_QSTR_P1_13), MP_ROM_PTR(&pin_P1_13) },
    { MP_ROM_QSTR(MP_QSTR_P1_14), MP_ROM_PTR(&pin_P1_14) },
    { MP_ROM_QSTR(MP_QSTR_P1_15), MP_ROM_PTR(&pin_P1_15) },
    { MP_ROM_QSTR(MP_QSTR_P1_16), MP_ROM_PTR(&pin_P1_16) },
    { MP_ROM_QSTR(MP_QSTR_P1_17), MP_ROM_PTR(&pin_P1_17) },
    { MP_ROM_QSTR(MP_QSTR_P1_18), MP_ROM_PTR(&pin_P1_18) },
    { MP_ROM_QSTR(MP_QSTR_P1_19), MP_ROM_PTR(&pin_P1_19) },
    { MP_ROM_QSTR(MP_QSTR_P1_20), MP_ROM_PTR(&pin_P1_20) },
    { MP_ROM_QSTR(MP_QSTR_P1_21), MP_ROM_PTR(&pin_P1_21) },
    { MP_ROM_QSTR(MP_QSTR_P1_22), MP_ROM_PTR(&pin_P1_22) },
    { MP_ROM_QSTR(MP_QSTR_P1_23), MP_ROM_PTR(&pin_P1_23) },
    { MP_ROM_QSTR(MP_QSTR_P1_24), MP_ROM_PTR(&pin_P1_24) },
    { MP_ROM_QSTR(MP_QSTR_P1_25), MP_ROM_PTR(&pin_P1_25) },
    { MP_ROM_QSTR(MP_QSTR_P1_26), MP_ROM_PTR(&pin_P1_26) },
    { MP_ROM_QSTR(MP_QSTR_P1_27), MP_ROM_PTR(&pin_P1_27) },
    { MP_ROM_QSTR(MP_QSTR_P1_28), MP_ROM_PTR(&pin_P1_28) },
    { MP_ROM_QSTR(MP_QSTR_P1_29), MP_ROM_PTR(&pin_P1_29) },
    { MP_ROM_QSTR(MP_QSTR_P1_30), MP_ROM_PTR(&pin_P1_30) },
    { MP_ROM_QSTR(MP_QSTR_P1_31), MP_ROM_PTR(&pin_P1_31) },
    //P2
    { MP_ROM_QSTR(MP_QSTR_P2_00), MP_ROM_PTR(&pin_P2_00) },
    { MP_ROM_QSTR(MP_QSTR_P2_01), MP_ROM_PTR(&pin_P2_01) },
    { MP_ROM_QSTR(MP_QSTR_P2_02), MP_ROM_PTR(&pin_P2_02) },
    { MP_ROM_QSTR(MP_QSTR_P2_03), MP_ROM_PTR(&pin_P2_03) },
    { MP_ROM_QSTR(MP_QSTR_P2_04), MP_ROM_PTR(&pin_P2_04) },
    { MP_ROM_QSTR(MP_QSTR_P2_05), MP_ROM_PTR(&pin_P2_05) },
    { MP_ROM_QSTR(MP_QSTR_P2_06), MP_ROM_PTR(&pin_P2_06) },
    { MP_ROM_QSTR(MP_QSTR_P2_07), MP_ROM_PTR(&pin_P2_07) },
    { MP_ROM_QSTR(MP_QSTR_P2_08), MP_ROM_PTR(&pin_P2_08) },
    { MP_ROM_QSTR(MP_QSTR_P2_09), MP_ROM_PTR(&pin_P2_09) },
    { MP_ROM_QSTR(MP_QSTR_P2_10), MP_ROM_PTR(&pin_P2_10) },
    { MP_ROM_QSTR(MP_QSTR_P2_11), MP_ROM_PTR(&pin_P2_11) },
    { MP_ROM_QSTR(MP_QSTR_P2_12), MP_ROM_PTR(&pin_P2_12) },
    { MP_ROM_QSTR(MP_QSTR_P2_13), MP_ROM_PTR(&pin_P2_13) },
    { MP_ROM_QSTR(MP_QSTR_P2_14), MP_ROM_PTR(&pin_P2_14) },
    { MP_ROM_QSTR(MP_QSTR_P2_15), MP_ROM_PTR(&pin_P2_15) },
    { MP_ROM_QSTR(MP_QSTR_P2_16), MP_ROM_PTR(&pin_P2_16) },
    { MP_ROM_QSTR(MP_QSTR_P2_17), MP_ROM_PTR(&pin_P2_17) },
    { MP_ROM_QSTR(MP_QSTR_P2_18), MP_ROM_PTR(&pin_P2_18) },
    { MP_ROM_QSTR(MP_QSTR_P2_19), MP_ROM_PTR(&pin_P2_19) },
    { MP_ROM_QSTR(MP_QSTR_P2_20), MP_ROM_PTR(&pin_P2_20) },
    { MP_ROM_QSTR(MP_QSTR_P2_21), MP_ROM_PTR(&pin_P2_21) },
    { MP_ROM_QSTR(MP_QSTR_P2_22), MP_ROM_PTR(&pin_P2_22) },
    { MP_ROM_QSTR(MP_QSTR_P2_23), MP_ROM_PTR(&pin_P2_23) },
    { MP_ROM_QSTR(MP_QSTR_P2_24), MP_ROM_PTR(&pin_P2_24) },
    { MP_ROM_QSTR(MP_QSTR_P2_25), MP_ROM_PTR(&pin_P2_25) },
    { MP_ROM_QSTR(MP_QSTR_P2_26), MP_ROM_PTR(&pin_P2_26) },
    { MP_ROM_QSTR(MP_QSTR_P2_27), MP_ROM_PTR(&pin_P2_27) },
    { MP_ROM_QSTR(MP_QSTR_P2_28), MP_ROM_PTR(&pin_P2_28) },
    { MP_ROM_QSTR(MP_QSTR_P2_29), MP_ROM_PTR(&pin_P2_29) },
    { MP_ROM_QSTR(MP_QSTR_P2_30), MP_ROM_PTR(&pin_P2_30) },
    { MP_ROM_QSTR(MP_QSTR_P2_31), MP_ROM_PTR(&pin_P2_31) },
    //P3
    { MP_ROM_QSTR(MP_QSTR_P3_00), MP_ROM_PTR(&pin_P3_00) },
    { MP_ROM_QSTR(MP_QSTR_P3_01), MP_ROM_PTR(&pin_P3_01) },
    { MP_ROM_QSTR(MP_QSTR_P3_02), MP_ROM_PTR(&pin_P3_02) },
    { MP_ROM_QSTR(MP_QSTR_P3_03), MP_ROM_PTR(&pin_P3_03) },
    { MP_ROM_QSTR(MP_QSTR_P3_04), MP_ROM_PTR(&pin_P3_04) },
    { MP_ROM_QSTR(MP_QSTR_P3_05), MP_ROM_PTR(&pin_P3_05) },
    { MP_ROM_QSTR(MP_QSTR_P3_06), MP_ROM_PTR(&pin_P3_06) },
    { MP_ROM_QSTR(MP_QSTR_P3_07), MP_ROM_PTR(&pin_P3_07) },
    { MP_ROM_QSTR(MP_QSTR_P3_08), MP_ROM_PTR(&pin_P3_08) },
    { MP_ROM_QSTR(MP_QSTR_P3_09), MP_ROM_PTR(&pin_P3_09) },
    //P4
    { MP_ROM_QSTR(MP_QSTR_P4_00), MP_ROM_PTR(&pin_P4_00) },
    { MP_ROM_QSTR(MP_QSTR_P4_01), MP_ROM_PTR(&pin_P4_01) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
