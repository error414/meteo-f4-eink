CSRCS += $(LVGL_DIR)/src/lv_themes/lv_theme.c
CSRCS += $(LVGL_DIR)/src/lv_themes/lv_theme_material.c
CSRCS += $(LVGL_DIR)/src/lv_themes/lv_theme_mono.c
CSRCS += $(LVGL_DIR)/src/lv_themes/lv_theme_empty.c
CSRCS += $(LVGL_DIR)/src/lv_themes/lv_theme_template.c

DEPPATH += --dep-path $(LVGL_DIR)/src/lv_themes
VPATH += $(LVGL_DIR)/src/lv_themes

CFLAGS += "-I$(LVGL_DIR)/src/lv_themes"
