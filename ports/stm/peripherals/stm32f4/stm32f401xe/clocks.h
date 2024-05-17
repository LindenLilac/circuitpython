// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Lucian Copeland for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "stm32f4xx_hal.h"

// Chip:                STM32F401
// Line Type:           Access Line
// Speed:               84MHz (MAX)

// Defaults:
#ifndef CPY_CLK_VSCALE
#define CPY_CLK_VSCALE (PWR_REGULATOR_VOLTAGE_SCALE2)
#endif
#ifndef CPY_CLK_PLLN
#define CPY_CLK_PLLN (336)
#endif
#ifndef CPY_CLK_PLLP
#define CPY_CLK_PLLP (RCC_PLLP_DIV4)
#endif
#ifndef CPY_CLK_PLLQ
#define CPY_CLK_PLLQ (7)
#endif
#ifndef CPY_CLK_AHBDIV
#define CPY_CLK_AHBDIV (RCC_SYSCLK_DIV1)
#endif
#ifndef CPY_CLK_APB1DIV
#define CPY_CLK_APB1DIV (RCC_HCLK_DIV2)
#endif
#ifndef CPY_CLK_APB2DIV
#define CPY_CLK_APB2DIV (RCC_HCLK_DIV1)
#endif
#ifndef CPY_CLK_FLASH_LATENCY
#define CPY_CLK_FLASH_LATENCY (FLASH_LATENCY_2)
#endif
#ifndef CPY_CLK_USB_USES_AUDIOPLL
#define CPY_CLK_USB_USES_AUDIOPLL (0)
#endif
#ifndef BOARD_HSE_SOURCE
#define BOARD_HSE_SOURCE (RCC_HSE_ON)
#endif
