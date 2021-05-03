CSRCS += $(LVGL_DIR)/src/lv_hal/lv_hal_disp.c
CSRCS += $(LVGL_DIR)/src/lv_hal/lv_hal_indev.c
CSRCS += $(LVGL_DIR)/src/lv_hal/lv_hal_tick.c

DEPPATH += --dep-path $(LVGL_DIR)/src/lv_hal
VPATH += $(LVGL_DIR)/src/lv_hal

CFLAGS += "-I$(LVGL_DIR)/src/lv_hal"
