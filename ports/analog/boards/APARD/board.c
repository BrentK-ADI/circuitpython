// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "supervisor/board.h"

// DEFAULT:  Using the weak-defined supervisor/shared/board.c functions

/***** OPTIONAL BOARD-SPECIFIC FUNTIONS from supervisor/board.h *****/
// Returns true if the user initiates safe mode in a board specific way.
// Also add BOARD_USER_SAFE_MODE in mpconfigboard.h to explain the board specific
// way.
// bool board_requests_safe_mode(void);

// Initializes board related state once on start up.
// void board_init(void);

// Reset the state of off MCU components such as neopixels.
// void reset_board(void);

// Deinit the board. This should put the board in deep sleep durable, low power
// state. It should not prevent the user access method from working (such as
// disabling USB, BLE or flash) because CircuitPython may continue to run.
// void board_deinit(void);
/*******************************************************************/
