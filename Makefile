# Config

## Targets
# Do nothing.
.PHONY: null
null:
	@$(error No Default Target).

.PHONY: env
env: env.python env.arduino

# Toolchain Includes
include .mk_inc/env.mk

CAN_send.elf:
	make -C Arduino/CANBoard/ arduino_env
	make -C Arduino/CANBoard/CAN_send
	cp Arduino/CANBoard/CAN_send/build-uno/CAN_send.elf ./
