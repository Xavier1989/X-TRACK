#include "TemplateView.h"
#include <stdarg.h>
#include <stdio.h>

void TemplateView::Create(lv_obj_t* par)
{
    lv_obj_t* label = lv_label_create(par);
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 20);
    lv_label_set_text(label, "");
    ui.labelTitle = label;

    label = lv_label_create(par);
    lv_label_set_text(label, "");
    lv_obj_center(label);
    ui.labelTick = label;
}