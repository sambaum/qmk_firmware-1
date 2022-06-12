SRC += sambaum.c

RGB_MATRIX_CUSTOM_USER = yes
KEY_OVERRIDE_ENABLE = yes
NKRO_ENABLE = no

ifeq ($(strip $(MCU)), atmega32u4)
  LTO_ENABLE = yes
  SPACE_CADET_ENABLE = no
  MAGIC_ENABLE = no
endif
