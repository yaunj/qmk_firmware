SRC += yaunj.c

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
  SRC += extended_space_cadet.c
endif
