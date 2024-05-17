// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2021 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#define MICROPY_HW_BOARD_NAME "Pimoroni Pico DV Base W"
#define MICROPY_HW_MCU_NAME "rp2040"

#define CIRCUITPY_DIGITALIO_HAVE_INVALID_PULL (1)
#define CIRCUITPY_DIGITALIO_HAVE_INVALID_DRIVE_MODE (1)

#define DEFAULT_UART_BUS_RX (&pin_GPIO1)
#define DEFAULT_UART_BUS_TX (&pin_GPIO0)

#define MICROPY_HW_LED_STATUS   (&pin_CYW0)
