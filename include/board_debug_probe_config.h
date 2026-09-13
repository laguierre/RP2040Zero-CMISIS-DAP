/*
 * Copyright (c) 2023 Raspberry Pi Ltd.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef BOARD_DEBUG_PROBE_H_
#define BOARD_DEBUG_PROBE_H_

#define PROBE_IO_SWDI
#define PROBE_CDC_UART
// No reset pin

// PIO config
#define PROBE_SM 0
#define PROBE_PIN_OFFSET 12
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 0)
#define PROBE_PIN_SWDI (PROBE_PIN_OFFSET + 1)
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 2)

// UART config
#define PROBE_UART_TX 4
#define PROBE_UART_RX 5
#define PROBE_UART_INTERFACE uart1
#define PROBE_UART_BAUDRATE 115200

// LED config
#define PROBE_USB_CONNECTED_LED 2
#define PROBE_DAP_CONNECTED_LED 15
#define PROBE_DAP_RUNNING_LED 10
#define PROBE_UART_RX_LED 8
#define PROBE_UART_TX_LED 7

#define PROBE_PRODUCT_STRING "RP2040-Zero CMSIS-DAP Probe"

#endif // BOARD_DEBUG_PROBE_H_
