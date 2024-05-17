// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019-2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_ESPRESSIF_COMMON_HAL_BLEIO_PACKETBUFFER_H
#define MICROPY_INCLUDED_ESPRESSIF_COMMON_HAL_BLEIO_PACKETBUFFER_H

#include "py/ringbuf.h"
#include "shared-bindings/_bleio/Characteristic.h"

typedef struct {
    mp_obj_base_t base;
    bleio_characteristic_obj_t *characteristic;
    // Ring buffer storing consecutive incoming values.
    ringbuf_t ringbuf;
    // Two outgoing buffers to alternate between. One will be queued for transmission by the SD and
    // the other is waiting to be queued and can be extended.
    uint32_t *outgoing[2];
    volatile uint16_t pending_size;
    // We remember the conn_handle so we can do a NOTIFY/INDICATE to a client.
    // We can find out the conn_handle on a Characteristic write or a CCCD write (but not a read).
    volatile uint16_t conn_handle;
    uint16_t max_packet_size;
    uint8_t pending_index;
    uint8_t write_type;
    bool client;
    bool packet_queued;
} bleio_packet_buffer_obj_t;

#endif // MICROPY_INCLUDED_ESPRESSIF_COMMON_HAL_BLEIO_PACKETBUFFER_H
