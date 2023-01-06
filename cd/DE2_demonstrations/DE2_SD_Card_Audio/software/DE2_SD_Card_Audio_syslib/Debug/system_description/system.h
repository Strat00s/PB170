/* system.h
 *
 * Machine generated for a CPU named "cpu_0" as defined in:
 * d:\SVN\DE2\DE2\test\SOPC_Q11_1\de2_sdcard_audio\software\DE2_SD_Card_Audio_syslib\..\..\system_0.ptf
 *
 * Generated: 2012-05-08 14:13:39.578
 *
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/*

DO NOT MODIFY THIS FILE

   Changing this file will have subtle consequences
   which will almost certainly lead to a nonfunctioning
   system. If you do modify this file, be aware that your
   changes will be overwritten and lost when this file
   is generated again.

DO NOT MODIFY THIS FILE

*/

/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

/*
 * system configuration
 *
 */

#define ALT_SYSTEM_NAME "system_0"
#define ALT_CPU_NAME "cpu_0"
#define ALT_CPU_ARCHITECTURE "altera_nios2"
#define ALT_DEVICE_FAMILY "CYCLONEII"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN_BASE 0x01b02130
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_PRESENT
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT_BASE 0x01b02130
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_PRESENT
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDERR_BASE 0x01b02130
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_PRESENT
#define ALT_CPU_FREQ 100000000
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT

/*
 * processor configuration
 *
 */

#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_BIG_ENDIAN 0
#define NIOS2_INTERRUPT_CONTROLLER_ID 0

#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_LINE_SIZE 4
#define NIOS2_DCACHE_LINE_SIZE_LOG2 2
#define NIOS2_FLUSHDA_SUPPORTED

#define NIOS2_EXCEPTION_ADDR 0x00800020
#define NIOS2_RESET_ADDR 0x01400000
#define NIOS2_BREAK_ADDR 0x01b01020

#define NIOS2_HAS_DEBUG_STUB

#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0

/*
 * A define for each class of peripheral
 *
 */

#define __ALTERA_AVALON_TRI_STATE_BRIDGE
#define __ALTERA_AVALON_CFI_FLASH
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_EPCS_FLASH_CONTROLLER
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_UART
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_LCD_16207
#define __ALTERA_AVALON_PIO
#define __ISP1362_IF
#define __BINARY_VGA_CONTROLLER
#define __DM9000A
#define __SRAM_16BIT_512K
#define __SEG7_LUT_8
#define __AUDIO_IF

/*
 * tri_state_bridge_0 configuration
 *
 */

#define TRI_STATE_BRIDGE_0_NAME "/dev/tri_state_bridge_0"
#define TRI_STATE_BRIDGE_0_TYPE "altera_avalon_tri_state_bridge"
#define ALT_MODULE_CLASS_tri_state_bridge_0 altera_avalon_tri_state_bridge

/*
 * cfi_flash_0 configuration
 *
 */

#define CFI_FLASH_0_NAME "/dev/cfi_flash_0"
#define CFI_FLASH_0_TYPE "altera_avalon_cfi_flash"
#define CFI_FLASH_0_BASE 0x01400000
#define CFI_FLASH_0_SPAN 4194304
#define CFI_FLASH_0_SETUP_VALUE 40
#define CFI_FLASH_0_WAIT_VALUE 160
#define CFI_FLASH_0_HOLD_VALUE 40
#define CFI_FLASH_0_TIMING_UNITS "ns"
#define CFI_FLASH_0_UNIT_MULTIPLIER 1
#define CFI_FLASH_0_SIZE 4194304
#define ALT_MODULE_CLASS_cfi_flash_0 altera_avalon_cfi_flash

/*
 * sdram_0 configuration
 *
 */

#define SDRAM_0_NAME "/dev/sdram_0"
#define SDRAM_0_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_0_BASE 0x00800000
#define SDRAM_0_SPAN 8388608
#define SDRAM_0_REGISTER_DATA_IN 1
#define SDRAM_0_SIM_MODEL_BASE 1
#define SDRAM_0_SDRAM_DATA_WIDTH 16
#define SDRAM_0_SDRAM_ADDR_WIDTH 12
#define SDRAM_0_SDRAM_ROW_WIDTH 12
#define SDRAM_0_SDRAM_COL_WIDTH 8
#define SDRAM_0_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_0_SDRAM_NUM_BANKS 4
#define SDRAM_0_REFRESH_PERIOD 15.625
#define SDRAM_0_POWERUP_DELAY 100.0
#define SDRAM_0_CAS_LATENCY 3
#define SDRAM_0_T_RFC 70.0
#define SDRAM_0_T_RP 20.0
#define SDRAM_0_T_MRD 3
#define SDRAM_0_T_RCD 20.0
#define SDRAM_0_T_AC 5.5
#define SDRAM_0_T_WR 14.0
#define SDRAM_0_INIT_REFRESH_COMMANDS 2
#define SDRAM_0_INIT_NOP_DELAY 0.0
#define SDRAM_0_SHARED_DATA 0
#define SDRAM_0_SDRAM_BANK_WIDTH 2
#define SDRAM_0_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_0_STARVATION_INDICATOR 0
#define SDRAM_0_IS_INITIALIZED 1
#define ALT_MODULE_CLASS_sdram_0 altera_avalon_new_sdram_controller

/*
 * epcs_controller configuration
 *
 */

#define EPCS_CONTROLLER_NAME "/dev/epcs_controller"
#define EPCS_CONTROLLER_TYPE "altera_avalon_epcs_flash_controller"
#define EPCS_CONTROLLER_BASE 0x01b01800
#define EPCS_CONTROLLER_SPAN 2048
#define EPCS_CONTROLLER_IRQ 0
#define EPCS_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define EPCS_CONTROLLER_DATABITS 8
#define EPCS_CONTROLLER_TARGETCLOCK 20
#define EPCS_CONTROLLER_CLOCKUNITS "MHz"
#define EPCS_CONTROLLER_CLOCKMULT 1000000
#define EPCS_CONTROLLER_NUMSLAVES 1
#define EPCS_CONTROLLER_ISMASTER 1
#define EPCS_CONTROLLER_CLOCKPOLARITY 0
#define EPCS_CONTROLLER_CLOCKPHASE 0
#define EPCS_CONTROLLER_LSBFIRST 0
#define EPCS_CONTROLLER_EXTRADELAY 0
#define EPCS_CONTROLLER_TARGETSSDELAY 100
#define EPCS_CONTROLLER_DELAYUNITS "us"
#define EPCS_CONTROLLER_DELAYMULT "1e-006"
#define EPCS_CONTROLLER_PREFIX "epcs_"
#define EPCS_CONTROLLER_REGISTER_OFFSET 0x200
#define EPCS_CONTROLLER_IGNORE_LEGACY_CHECK 1
#define EPCS_CONTROLLER_USE_ASMI_ATOM 1
#define EPCS_CONTROLLER_CLOCKUNIT "kHz"
#define EPCS_CONTROLLER_DELAYUNIT "us"
#define EPCS_CONTROLLER_DISABLEAVALONFLOWCONTROL 0
#define EPCS_CONTROLLER_INSERT_SYNC 0
#define EPCS_CONTROLLER_SYNC_REG_DEPTH 2
#define ALT_MODULE_CLASS_epcs_controller altera_avalon_epcs_flash_controller

/*
 * jtag_uart_0 configuration
 *
 */

#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_BASE 0x01b02130
#define JTAG_UART_0_SPAN 8
#define JTAG_UART_0_IRQ 1
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_READ_CHAR_STREAM ""
#define JTAG_UART_0_SHOWASCII 1
#define JTAG_UART_0_RELATIVEPATH 1
#define JTAG_UART_0_READ_LE 0
#define JTAG_UART_0_WRITE_LE 0
#define JTAG_UART_0_ALTERA_SHOW_UNRELEASED_JTAG_UART_FEATURES 1
#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart

/*
 * uart_0 configuration
 *
 */

#define UART_0_NAME "/dev/uart_0"
#define UART_0_TYPE "altera_avalon_uart"
#define UART_0_BASE 0x01b02000
#define UART_0_SPAN 32
#define UART_0_IRQ 2
#define UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_0_BAUD 115200
#define UART_0_DATA_BITS 8
#define UART_0_FIXED_BAUD 1
#define UART_0_PARITY 'N'
#define UART_0_STOP_BITS 1
#define UART_0_SYNC_REG_DEPTH 2
#define UART_0_USE_CTS_RTS 0
#define UART_0_USE_EOP_REGISTER 0
#define UART_0_SIM_TRUE_BAUD 0
#define UART_0_SIM_CHAR_STREAM ""
#define UART_0_RELATIVEPATH 1
#define UART_0_FREQ 100000000
#define ALT_MODULE_CLASS_uart_0 altera_avalon_uart

/*
 * timer_0 configuration
 *
 */

#define TIMER_0_NAME "/dev/timer_0"
#define TIMER_0_TYPE "altera_avalon_timer"
#define TIMER_0_BASE 0x01b02020
#define TIMER_0_SPAN 32
#define TIMER_0_IRQ 3
#define TIMER_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_0_ALWAYS_RUN 0
#define TIMER_0_FIXED_PERIOD 0
#define TIMER_0_SNAPSHOT 1
#define TIMER_0_PERIOD 1
#define TIMER_0_PERIOD_UNITS "ms"
#define TIMER_0_RESET_OUTPUT 0
#define TIMER_0_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_0_LOAD_VALUE 99999
#define TIMER_0_COUNTER_SIZE 32
#define TIMER_0_MULT 0.0010
#define TIMER_0_TICKS_PER_SEC 1000
#define TIMER_0_FREQ 100000000
#define ALT_MODULE_CLASS_timer_0 altera_avalon_timer

/*
 * timer_1 configuration
 *
 */

#define TIMER_1_NAME "/dev/timer_1"
#define TIMER_1_TYPE "altera_avalon_timer"
#define TIMER_1_BASE 0x01b02040
#define TIMER_1_SPAN 32
#define TIMER_1_IRQ 4
#define TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_ALWAYS_RUN 0
#define TIMER_1_FIXED_PERIOD 0
#define TIMER_1_SNAPSHOT 1
#define TIMER_1_PERIOD 1
#define TIMER_1_PERIOD_UNITS "ms"
#define TIMER_1_RESET_OUTPUT 0
#define TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_LOAD_VALUE 99999
#define TIMER_1_COUNTER_SIZE 32
#define TIMER_1_MULT 0.0010
#define TIMER_1_TICKS_PER_SEC 1000
#define TIMER_1_FREQ 100000000
#define ALT_MODULE_CLASS_timer_1 altera_avalon_timer

/*
 * lcd configuration
 *
 */

#define LCD_NAME "/dev/lcd"
#define LCD_TYPE "altera_avalon_lcd_16207"
#define LCD_BASE 0x01b02080
#define LCD_SPAN 16
#define ALT_MODULE_CLASS_lcd altera_avalon_lcd_16207

/*
 * ledr configuration
 *
 */

#define LEDR_NAME "/dev/ledr"
#define LEDR_TYPE "altera_avalon_pio"
#define LEDR_BASE 0x01b02090
#define LEDR_SPAN 16
#define LEDR_DO_TEST_BENCH_WIRING 0
#define LEDR_DRIVEN_SIM_VALUE 0
#define LEDR_HAS_TRI 0
#define LEDR_HAS_OUT 1
#define LEDR_HAS_IN 0
#define LEDR_CAPTURE 0
#define LEDR_DATA_WIDTH 18
#define LEDR_RESET_VALUE 0
#define LEDR_EDGE_TYPE "NONE"
#define LEDR_IRQ_TYPE "NONE"
#define LEDR_BIT_CLEARING_EDGE_REGISTER 0
#define LEDR_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDR_FREQ 100000000
#define ALT_MODULE_CLASS_ledr altera_avalon_pio

/*
 * ledg configuration
 *
 */

#define LEDG_NAME "/dev/ledg"
#define LEDG_TYPE "altera_avalon_pio"
#define LEDG_BASE 0x01b020a0
#define LEDG_SPAN 16
#define LEDG_DO_TEST_BENCH_WIRING 0
#define LEDG_DRIVEN_SIM_VALUE 0
#define LEDG_HAS_TRI 0
#define LEDG_HAS_OUT 1
#define LEDG_HAS_IN 0
#define LEDG_CAPTURE 0
#define LEDG_DATA_WIDTH 9
#define LEDG_RESET_VALUE 0
#define LEDG_EDGE_TYPE "NONE"
#define LEDG_IRQ_TYPE "NONE"
#define LEDG_BIT_CLEARING_EDGE_REGISTER 0
#define LEDG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDG_FREQ 100000000
#define ALT_MODULE_CLASS_ledg altera_avalon_pio

/*
 * button_pio configuration
 *
 */

#define BUTTON_PIO_NAME "/dev/button_pio"
#define BUTTON_PIO_TYPE "altera_avalon_pio"
#define BUTTON_PIO_BASE 0x01b020b0
#define BUTTON_PIO_SPAN 16
#define BUTTON_PIO_IRQ 5
#define BUTTON_PIO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BUTTON_PIO_DO_TEST_BENCH_WIRING 0
#define BUTTON_PIO_DRIVEN_SIM_VALUE 0
#define BUTTON_PIO_HAS_TRI 0
#define BUTTON_PIO_HAS_OUT 0
#define BUTTON_PIO_HAS_IN 1
#define BUTTON_PIO_CAPTURE 1
#define BUTTON_PIO_DATA_WIDTH 4
#define BUTTON_PIO_RESET_VALUE 0
#define BUTTON_PIO_EDGE_TYPE "FALLING"
#define BUTTON_PIO_IRQ_TYPE "EDGE"
#define BUTTON_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON_PIO_FREQ 100000000
#define ALT_MODULE_CLASS_button_pio altera_avalon_pio

/*
 * switch_pio configuration
 *
 */

#define SWITCH_PIO_NAME "/dev/switch_pio"
#define SWITCH_PIO_TYPE "altera_avalon_pio"
#define SWITCH_PIO_BASE 0x01b020c0
#define SWITCH_PIO_SPAN 16
#define SWITCH_PIO_DO_TEST_BENCH_WIRING 0
#define SWITCH_PIO_DRIVEN_SIM_VALUE 0
#define SWITCH_PIO_HAS_TRI 0
#define SWITCH_PIO_HAS_OUT 0
#define SWITCH_PIO_HAS_IN 1
#define SWITCH_PIO_CAPTURE 0
#define SWITCH_PIO_DATA_WIDTH 18
#define SWITCH_PIO_RESET_VALUE 0
#define SWITCH_PIO_EDGE_TYPE "NONE"
#define SWITCH_PIO_IRQ_TYPE "NONE"
#define SWITCH_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCH_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCH_PIO_FREQ 100000000
#define ALT_MODULE_CLASS_switch_pio altera_avalon_pio

/*
 * SD_DAT configuration
 *
 */

#define SD_DAT_NAME "/dev/SD_DAT"
#define SD_DAT_TYPE "altera_avalon_pio"
#define SD_DAT_BASE 0x01b020d0
#define SD_DAT_SPAN 16
#define SD_DAT_DO_TEST_BENCH_WIRING 0
#define SD_DAT_DRIVEN_SIM_VALUE 0
#define SD_DAT_HAS_TRI 1
#define SD_DAT_HAS_OUT 0
#define SD_DAT_HAS_IN 0
#define SD_DAT_CAPTURE 0
#define SD_DAT_DATA_WIDTH 4
#define SD_DAT_RESET_VALUE 0
#define SD_DAT_EDGE_TYPE "NONE"
#define SD_DAT_IRQ_TYPE "NONE"
#define SD_DAT_BIT_CLEARING_EDGE_REGISTER 0
#define SD_DAT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_DAT_FREQ 100000000
#define ALT_MODULE_CLASS_SD_DAT altera_avalon_pio

/*
 * SD_CMD configuration
 *
 */

#define SD_CMD_NAME "/dev/SD_CMD"
#define SD_CMD_TYPE "altera_avalon_pio"
#define SD_CMD_BASE 0x01b020e0
#define SD_CMD_SPAN 16
#define SD_CMD_DO_TEST_BENCH_WIRING 0
#define SD_CMD_DRIVEN_SIM_VALUE 0
#define SD_CMD_HAS_TRI 1
#define SD_CMD_HAS_OUT 0
#define SD_CMD_HAS_IN 0
#define SD_CMD_CAPTURE 0
#define SD_CMD_DATA_WIDTH 1
#define SD_CMD_RESET_VALUE 0
#define SD_CMD_EDGE_TYPE "NONE"
#define SD_CMD_IRQ_TYPE "NONE"
#define SD_CMD_BIT_CLEARING_EDGE_REGISTER 0
#define SD_CMD_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_CMD_FREQ 100000000
#define ALT_MODULE_CLASS_SD_CMD altera_avalon_pio

/*
 * SD_CLK configuration
 *
 */

#define SD_CLK_NAME "/dev/SD_CLK"
#define SD_CLK_TYPE "altera_avalon_pio"
#define SD_CLK_BASE 0x01b020f0
#define SD_CLK_SPAN 16
#define SD_CLK_DO_TEST_BENCH_WIRING 0
#define SD_CLK_DRIVEN_SIM_VALUE 0
#define SD_CLK_HAS_TRI 0
#define SD_CLK_HAS_OUT 1
#define SD_CLK_HAS_IN 0
#define SD_CLK_CAPTURE 0
#define SD_CLK_DATA_WIDTH 1
#define SD_CLK_RESET_VALUE 0
#define SD_CLK_EDGE_TYPE "NONE"
#define SD_CLK_IRQ_TYPE "NONE"
#define SD_CLK_BIT_CLEARING_EDGE_REGISTER 0
#define SD_CLK_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_CLK_FREQ 100000000
#define ALT_MODULE_CLASS_SD_CLK altera_avalon_pio

/*
 * ISP1362/hc configuration
 *
 */

#define ISP1362_HC_NAME "/dev/ISP1362"
#define ISP1362_HC_TYPE "ISP1362_IF"
#define ISP1362_HC_BASE 0x01b02138
#define ISP1362_HC_SPAN 8
#define ISP1362_HC_IRQ 6
#define ISP1362_HC_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_ISP1362 ISP1362_IF

/*
 * ISP1362/dc configuration
 *
 */

#define ISP1362_DC_NAME "/dev/ISP1362"
#define ISP1362_DC_TYPE "ISP1362_IF"
#define ISP1362_DC_BASE 0x01b02140
#define ISP1362_DC_SPAN 8
#define ISP1362_DC_IRQ 7
#define ISP1362_DC_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_ISP1362 ISP1362_IF

/*
 * VGA_0 configuration
 *
 */

#define VGA_0_NAME "/dev/VGA_0"
#define VGA_0_TYPE "binary_vga_controller"
#define VGA_0_BASE 0x01800000
#define VGA_0_SPAN 2097152
#define ALT_MODULE_CLASS_VGA_0 binary_vga_controller

/*
 * DM9000A configuration
 *
 */

#define DM9000A_NAME "/dev/DM9000A"
#define DM9000A_TYPE "dm9000a"
#define DM9000A_BASE 0x01b02148
#define DM9000A_SPAN 8
#define DM9000A_IRQ 8
#define DM9000A_IRQ_INTERRUPT_CONTROLLER_ID 0
#define ALT_MODULE_CLASS_DM9000A dm9000a

/*
 * sram_0 configuration
 *
 */

#define SRAM_0_NAME "/dev/sram_0"
#define SRAM_0_TYPE "sram_16bit_512k"
#define SRAM_0_BASE 0x01a80000
#define SRAM_0_SPAN 524288
#define ALT_MODULE_CLASS_sram_0 sram_16bit_512k

/*
 * seg7 configuration
 *
 */

#define SEG7_NAME "/dev/seg7"
#define SEG7_TYPE "seg7_lut_8"
#define SEG7_BASE 0x01b02150
#define SEG7_SPAN 4
#define ALT_MODULE_CLASS_seg7 seg7_lut_8

/*
 * sd_wp_n configuration
 *
 */

#define SD_WP_N_NAME "/dev/sd_wp_n"
#define SD_WP_N_TYPE "altera_avalon_pio"
#define SD_WP_N_BASE 0x01b02100
#define SD_WP_N_SPAN 16
#define SD_WP_N_DO_TEST_BENCH_WIRING 0
#define SD_WP_N_DRIVEN_SIM_VALUE 0
#define SD_WP_N_HAS_TRI 0
#define SD_WP_N_HAS_OUT 1
#define SD_WP_N_HAS_IN 1
#define SD_WP_N_CAPTURE 0
#define SD_WP_N_DATA_WIDTH 1
#define SD_WP_N_RESET_VALUE 0
#define SD_WP_N_EDGE_TYPE "NONE"
#define SD_WP_N_IRQ_TYPE "NONE"
#define SD_WP_N_BIT_CLEARING_EDGE_REGISTER 0
#define SD_WP_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SD_WP_N_FREQ 100000000
#define ALT_MODULE_CLASS_sd_wp_n altera_avalon_pio

/*
 * i2c_scl configuration
 *
 */

#define I2C_SCL_NAME "/dev/i2c_scl"
#define I2C_SCL_TYPE "altera_avalon_pio"
#define I2C_SCL_BASE 0x01b02110
#define I2C_SCL_SPAN 16
#define I2C_SCL_DO_TEST_BENCH_WIRING 0
#define I2C_SCL_DRIVEN_SIM_VALUE 0
#define I2C_SCL_HAS_TRI 0
#define I2C_SCL_HAS_OUT 1
#define I2C_SCL_HAS_IN 0
#define I2C_SCL_CAPTURE 0
#define I2C_SCL_DATA_WIDTH 1
#define I2C_SCL_RESET_VALUE 0
#define I2C_SCL_EDGE_TYPE "NONE"
#define I2C_SCL_IRQ_TYPE "NONE"
#define I2C_SCL_BIT_CLEARING_EDGE_REGISTER 0
#define I2C_SCL_BIT_MODIFYING_OUTPUT_REGISTER 0
#define I2C_SCL_FREQ 100000000
#define ALT_MODULE_CLASS_i2c_scl altera_avalon_pio

/*
 * i2c_sda configuration
 *
 */

#define I2C_SDA_NAME "/dev/i2c_sda"
#define I2C_SDA_TYPE "altera_avalon_pio"
#define I2C_SDA_BASE 0x01b02120
#define I2C_SDA_SPAN 16
#define I2C_SDA_DO_TEST_BENCH_WIRING 0
#define I2C_SDA_DRIVEN_SIM_VALUE 0
#define I2C_SDA_HAS_TRI 1
#define I2C_SDA_HAS_OUT 0
#define I2C_SDA_HAS_IN 0
#define I2C_SDA_CAPTURE 0
#define I2C_SDA_DATA_WIDTH 1
#define I2C_SDA_RESET_VALUE 0
#define I2C_SDA_EDGE_TYPE "NONE"
#define I2C_SDA_IRQ_TYPE "NONE"
#define I2C_SDA_BIT_CLEARING_EDGE_REGISTER 0
#define I2C_SDA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define I2C_SDA_FREQ 100000000
#define ALT_MODULE_CLASS_i2c_sda altera_avalon_pio

/*
 * audio configuration
 *
 */

#define AUDIO_NAME "/dev/audio"
#define AUDIO_TYPE "AUDIO_IF"
#define AUDIO_BASE 0x01b02060
#define AUDIO_SPAN 32
#define ALT_MODULE_CLASS_audio AUDIO_IF

/*
 * system library configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_0
#define ALT_TIMESTAMP_CLK none

/*
 * Devices associated with code sections.
 *
 */

#define ALT_TEXT_DEVICE       SDRAM_0
#define ALT_RODATA_DEVICE     SDRAM_0
#define ALT_RWDATA_DEVICE     SDRAM_0
#define ALT_EXCEPTIONS_DEVICE SDRAM_0
#define ALT_RESET_DEVICE      CFI_FLASH_0


#endif /* __SYSTEM_H_ */
