CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_mask.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_blend.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_rect.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_label.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_line.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_img.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_arc.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_draw_triangle.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_img_decoder.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_img_cache.c
CSRCS += $(LVGL_DIR)/src/lv_draw/lv_img_buf.c

DEPPATH += --dep-path $(LVGL_DIR)/src/lv_draw
VPATH += $(LVGL_DIR)/src/lv_draw

CFLAGS += "-I$(LVGL_DIR)/src/lv_draw"
