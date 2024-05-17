// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#ifndef MICROPY_INCLUDED_SHARED_BINDINGS_SOCKETPOOL_SOCKETPOOL_H
#define MICROPY_INCLUDED_SHARED_BINDINGS_SOCKETPOOL_SOCKETPOOL_H

#include "common-hal/socketpool/SocketPool.h"

#include "shared-bindings/socketpool/__init__.h"
#include "shared-bindings/socketpool/enum.h"
#include "shared-bindings/socketpool/Socket.h"

extern const mp_obj_type_t socketpool_socketpool_type;

void common_hal_socketpool_socketpool_construct(socketpool_socketpool_obj_t *self, mp_obj_t radio);

socketpool_socket_obj_t *common_hal_socketpool_socket(socketpool_socketpool_obj_t *self,
    socketpool_socketpool_addressfamily_t family, socketpool_socketpool_sock_t type, int proto);

mp_obj_t common_hal_socketpool_socketpool_gethostbyname(socketpool_socketpool_obj_t *self,
    const char *host);
// raises an exception instead of returning mp_const_none in the case of error
mp_obj_t common_hal_socketpool_socketpool_gethostbyname_raise(socketpool_socketpool_obj_t *self,
    const char *host);

// Non-allocating version for internal use. These sockets are not registered and, therefore, not
// closed automatically.
bool socketpool_socket(socketpool_socketpool_obj_t *self,
    socketpool_socketpool_addressfamily_t family, socketpool_socketpool_sock_t type,
    int proto, socketpool_socket_obj_t *sock);

NORETURN void common_hal_socketpool_socketpool_raise_gaierror_noname(void);

#endif // MICROPY_INCLUDED_SHARED_BINDINGS_SOCKETPOOL_SOCKETPOOL_H
