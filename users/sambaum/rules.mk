RGB_MATRIX_CUSTOM_USER = yes
SRC += sambaum.c

ifeq ($(strip $(MCU)), atmega32u4)
  LTO_ENABLE = yes
endif

KEY_OVERRIDE_ENABLE = yes
