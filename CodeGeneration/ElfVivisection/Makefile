# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

MONITOR_BAUDRATE ?= 115200

# Board Configuration
BOARD ?= uno
ARCHITECTURE ?= avr

# Configure directory paths.
WORKSPACE ?= $(realpath $(dir $(firstword $(MAKEFILE_LIST)))../..)

ARDUINO_DIR ?= $(realpath ${WORKSPACE}/arduino)
ARDUINO_LIB_PATH ?= $(realpath ${ARDUINO_DIR}/hardware/arduino/avr/libraries/)
ARDMK_DIR ?= $(realpath ${WORKSPACE}/arduino_make)

# Include the Arduino-Makefile project makefile.
include $(ARDMK_DIR)/Arduino.mk
