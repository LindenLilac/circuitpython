// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2019 Elvis Pfutzenreuter <epxx@epxx.co>
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_PS2IO_PS2_H
#define MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_PS2IO_PS2_H

#include "common-hal/microcontroller/Pin.h"

#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    uint8_t channel;
    uint8_t clock_pin;
    uint8_t data_pin;

    uint8_t state;
    uint64_t last_raw_ticks;

    uint16_t bits;
    bool parity;
    uint8_t bitcount;

    uint8_t buffer[16];
    uint8_t bufcount;
    uint8_t bufposr;
    uint8_t bufposw;

    uint16_t last_errors;

    bool waiting_cmd_response;
    uint8_t cmd_response;
} ps2io_ps2_obj_t;

void ps2_interrupt_handler(uint8_t channel);

#endif // MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_PS2IO_PS2_H
