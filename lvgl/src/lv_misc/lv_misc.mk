CSRCS += $(LVGL_DIR)/src/lv_misc/lv_area.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_task.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_fs.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_anim.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_mem.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_ll.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_color.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_txt.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_txt_ap.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_math.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_log.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_gc.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_utils.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_async.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_printf.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_bidi.c
CSRCS += $(LVGL_DIR)/src/lv_misc/lv_debug.c

DEPPATH += --dep-path $(LVGL_DIR)/src/lv_misc
VPATH += $(LVGL_DIR)/src/lv_misc

CFLAGS += "-I$(LVGL_DIR)/src/lv_misc"
