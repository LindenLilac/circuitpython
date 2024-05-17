// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

// Micropython setup

#define MICROPY_HW_BOARD_NAME       "Adafruit Metro ESP32S2"
#define MICROPY_HW_MCU_NAME         "ESP32S2"

#define MICROPY_HW_NEOPIXEL (&pin_GPIO45)

#define MICROPY_HW_LED_STATUS (&pin_GPIO42)

#define DEFAULT_I2C_BUS_SCL (&pin_GPIO34)
#define DEFAULT_I2C_BUS_SDA (&pin_GPIO33)

#define DEFAULT_SPI_BUS_SCK (&pin_GPIO36)
#define DEFAULT_SPI_BUS_MOSI (&pin_GPIO35)
#define DEFAULT_SPI_BUS_MISO (&pin_GPIO37)

#define DEFAULT_UART_BUS_RX (&pin_GPIO5)
#define DEFAULT_UART_BUS_TX (&pin_GPIO6)

#define DOUBLE_TAP_PIN (&pin_GPIO38)
