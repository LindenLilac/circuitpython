// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2020 Mark Olsson <mark@markolsson.se>
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PF10) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PF09) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PF08) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PF07) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PF06) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PC07) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PC06) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PG06) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PB04) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PG07) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_PA08) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_PH06) },
    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_PI03) },
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_PI02) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_PI00) },
    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_PB15) },
    { MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_PB14) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_PI01) },
    { MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_PI01) },
    { MP_ROM_QSTR(MP_QSTR_SW), MP_ROM_PTR(&pin_PI11) },
    { MP_ROM_QSTR(MP_QSTR_TP1), MP_ROM_PTR(&pin_PH02) },
    { MP_ROM_QSTR(MP_QSTR_TP2), MP_ROM_PTR(&pin_PI08) },
    { MP_ROM_QSTR(MP_QSTR_TP3), MP_ROM_PTR(&pin_PH15) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_INT), MP_ROM_PTR(&pin_PD06) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_SDA), MP_ROM_PTR(&pin_PH08) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_SCL), MP_ROM_PTR(&pin_PH07) },
    { MP_ROM_QSTR(MP_QSTR_EXT_SDA), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_EXT_SCL), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_EXT_RST), MP_ROM_PTR(&pin_PG03) },
    { MP_ROM_QSTR(MP_QSTR_SD_D0), MP_ROM_PTR(&pin_PC08) },
    { MP_ROM_QSTR(MP_QSTR_SD_D1), MP_ROM_PTR(&pin_PC09) },
    { MP_ROM_QSTR(MP_QSTR_SD_D2), MP_ROM_PTR(&pin_PC10) },
    { MP_ROM_QSTR(MP_QSTR_SD_D3), MP_ROM_PTR(&pin_PC11) },
    { MP_ROM_QSTR(MP_QSTR_SD_CK), MP_ROM_PTR(&pin_PC12) },
    { MP_ROM_QSTR(MP_QSTR_SD_CMD), MP_ROM_PTR(&pin_PD02) },
    { MP_ROM_QSTR(MP_QSTR_SD_SW), MP_ROM_PTR(&pin_PC13) },
    { MP_ROM_QSTR(MP_QSTR_LCD_BL_CTRL), MP_ROM_PTR(&pin_PK03) },
    { MP_ROM_QSTR(MP_QSTR_LCD_INT), MP_ROM_PTR(&pin_PI13) },
    { MP_ROM_QSTR(MP_QSTR_LCD_SDA), MP_ROM_PTR(&pin_PH08) },
    { MP_ROM_QSTR(MP_QSTR_LCD_SCL), MP_ROM_PTR(&pin_PH07) },
    { MP_ROM_QSTR(MP_QSTR_OTG_FS_POWER), MP_ROM_PTR(&pin_PD05) },
    { MP_ROM_QSTR(MP_QSTR_OTG_FS_OVER_CURRENT), MP_ROM_PTR(&pin_PD04) },
    { MP_ROM_QSTR(MP_QSTR_OTG_HS_OVER_CURRENT), MP_ROM_PTR(&pin_PE03) },
    { MP_ROM_QSTR(MP_QSTR_USB_VBUS), MP_ROM_PTR(&pin_PJ12) },
    { MP_ROM_QSTR(MP_QSTR_USB_ID), MP_ROM_PTR(&pin_PA10) },
    { MP_ROM_QSTR(MP_QSTR_USB_DM), MP_ROM_PTR(&pin_PA11) },
    { MP_ROM_QSTR(MP_QSTR_USB_DP), MP_ROM_PTR(&pin_PA12) },
    { MP_ROM_QSTR(MP_QSTR_VCP_TX), MP_ROM_PTR(&pin_PA09) },
    { MP_ROM_QSTR(MP_QSTR_VCP_RX), MP_ROM_PTR(&pin_PB07) },
    { MP_ROM_QSTR(MP_QSTR_CAN_TX), MP_ROM_PTR(&pin_PB13) },
    { MP_ROM_QSTR(MP_QSTR_CAN_RX), MP_ROM_PTR(&pin_PB12) },
    { MP_ROM_QSTR(MP_QSTR_ETH_MDC), MP_ROM_PTR(&pin_PC01) },
    { MP_ROM_QSTR(MP_QSTR_ETH_MDIO), MP_ROM_PTR(&pin_PA02) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_REF_CLK), MP_ROM_PTR(&pin_PA01) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_CRS_DV), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_RXD0), MP_ROM_PTR(&pin_PC04) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_RXD1), MP_ROM_PTR(&pin_PC05) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_RXER), MP_ROM_PTR(&pin_PG02) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_TX_EN), MP_ROM_PTR(&pin_PG11) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_TXD0), MP_ROM_PTR(&pin_PG13) },
    { MP_ROM_QSTR(MP_QSTR_ETH_RMII_TXD1), MP_ROM_PTR(&pin_PG14) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_SDCKE0), MP_ROM_PTR(&pin_PC03) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_SDNE0), MP_ROM_PTR(&pin_PH03) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_SDCLK), MP_ROM_PTR(&pin_PG08) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_SDNCAS), MP_ROM_PTR(&pin_PG15) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_SDNRAS), MP_ROM_PTR(&pin_PF11) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_SDNWE), MP_ROM_PTR(&pin_PH05) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_BA0), MP_ROM_PTR(&pin_PG04) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_BA1), MP_ROM_PTR(&pin_PG05) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_NBL0), MP_ROM_PTR(&pin_PE00) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_NBL1), MP_ROM_PTR(&pin_PE01) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A0), MP_ROM_PTR(&pin_PF00) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A1), MP_ROM_PTR(&pin_PF01) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A2), MP_ROM_PTR(&pin_PF02) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A3), MP_ROM_PTR(&pin_PF03) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A4), MP_ROM_PTR(&pin_PF04) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A5), MP_ROM_PTR(&pin_PF05) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A6), MP_ROM_PTR(&pin_PF12) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A7), MP_ROM_PTR(&pin_PF13) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A8), MP_ROM_PTR(&pin_PF14) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A9), MP_ROM_PTR(&pin_PF15) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A10), MP_ROM_PTR(&pin_PG00) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_A11), MP_ROM_PTR(&pin_PG01) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D0), MP_ROM_PTR(&pin_PD14) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D1), MP_ROM_PTR(&pin_PD15) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D2), MP_ROM_PTR(&pin_PD00) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D3), MP_ROM_PTR(&pin_PD01) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D4), MP_ROM_PTR(&pin_PE07) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D5), MP_ROM_PTR(&pin_PE08) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D6), MP_ROM_PTR(&pin_PE09) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D7), MP_ROM_PTR(&pin_PE10) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D8), MP_ROM_PTR(&pin_PE11) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D9), MP_ROM_PTR(&pin_PE12) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D10), MP_ROM_PTR(&pin_PE13) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D11), MP_ROM_PTR(&pin_PE14) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D12), MP_ROM_PTR(&pin_PE15) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D13), MP_ROM_PTR(&pin_PD08) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D14), MP_ROM_PTR(&pin_PD09) },
    { MP_ROM_QSTR(MP_QSTR_SDRAM_D15), MP_ROM_PTR(&pin_PD10) },
    { MP_ROM_QSTR(MP_QSTR_I2C3_SDA), MP_ROM_PTR(&pin_PH08) },
    { MP_ROM_QSTR(MP_QSTR_I2C3_SCL), MP_ROM_PTR(&pin_PH07) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
