CSRCS += $(LVGL_DIR)/src/lv_core/lv_group.c
CSRCS += $(LVGL_DIR)/src/lv_core/lv_indev.c
CSRCS += $(LVGL_DIR)/src/lv_core/lv_disp.c
CSRCS += $(LVGL_DIR)/src/lv_core/lv_obj.c
CSRCS += $(LVGL_DIR)/src/lv_core/lv_refr.c
CSRCS += $(LVGL_DIR)/src/lv_core/lv_style.c

DEPPATH += --dep-path $(LVGL_DIR)/src/lv_core
VPATH += $(LVGL_DIR)/src/lv_core

CFLAGS += "-I$(LVGL_DIR)/src/lv_core"
