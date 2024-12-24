#!/bin/bash


############### Configuration #########################

TARGET_MCU_CONFIG_FILE="./Debug_Cfg/stm32_f401xx_debug.cfg"
SOURCES_DIR="../"
GDB_PORT=3333
TCL_PORT=6666
TELNET_PORT=4445 

OPENOCD_PATH='which openocd'
OPENOCD_SCRIPT_REL_PATH="../openocd/scripts"

#######################################################




echo "Running OpenOCD..."
echo $OPENOCD_PATH
openocd "-f" "$TARGET_MCU_CONFIG_FILE" "-s" "$SOURCES_DIR" "-s" "$OPENOCD_PATH/$OPENOCD_SCRIPT_REL_PATH" "-c" "gdb report_data_abort enable" "-c" "gdb port $GDB_PORT" "-c" "tcl port $TCL_PORT" "-c" "tcl port $TELNET_PORT"