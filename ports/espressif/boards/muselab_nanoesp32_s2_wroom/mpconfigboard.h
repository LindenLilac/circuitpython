// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "nanoESP32-S2 w/Wroom"
#define MICROPY_HW_MCU_NAME         "ESP32S2"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO18)
