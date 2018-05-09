# Config

## Targets
# Do nothing.
.PHONY: null
null:
	@$(error No Default Target).

# Toolchain Includes
include .mk_inc/env.mk
include .mk_inc/host_env.mk
include .mk_inc/python.mk
include .mk_inc/arduino.mk
include .mk_inc/lint.mk

CAN_send.elf:
	make -C Arduino/CANBoard/ arduino_env
	make -C Arduino/CANBoard/CAN_send
	cp Arduino/CANBoard/CAN_send/build-uno/CAN_send.elf ./
