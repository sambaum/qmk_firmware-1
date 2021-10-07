SRC += sambaum.c

RGB_MATRIX_CUSTOM_USER = yes
KEY_OVERRIDE_ENABLE = yes

ifeq ($(strip $(MCU)), atmega32u4)
  LTO_ENABLE = yes
endif
