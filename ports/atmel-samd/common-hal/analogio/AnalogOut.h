// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2016 Scott Shawcroft
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_ANALOGIO_ANALOGOUT_H
#define MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_ANALOGIO_ANALOGOUT_H

#include "common-hal/microcontroller/Pin.h"

#include "hal/include/hal_dac_sync.h"

#include "py/obj.h"

typedef struct {
    mp_obj_base_t base;
    const mcu_pin_obj_t *pin;
    struct dac_sync_descriptor descriptor;
    uint8_t channel;
    bool deinited;
} analogio_analogout_obj_t;

void analogout_reset(void);

#endif // MICROPY_INCLUDED_ATMEL_SAMD_COMMON_HAL_ANALOGIO_ANALOGOUT_H
