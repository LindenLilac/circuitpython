// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_BROADCOM_COMMON_HAL_DIGITALIO_DIGITALINOUT_H
#define MICROPY_INCLUDED_BROADCOM_COMMON_HAL_DIGITALIO_DIGITALINOUT_H

#include "common-hal/microcontroller/Pin.h"
#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    const mcu_pin_obj_t *pin;
    bool output;
    bool open_drain;
} digitalio_digitalinout_obj_t;

#endif // MICROPY_INCLUDED_BROADCOM_COMMON_HAL_DIGITALIO_DIGITALINOUT_H
