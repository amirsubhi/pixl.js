#ifndef APP_AMIIBO_H
#define APP_AMIIBO_H

#include "mini_app_defines.h"
#include "ntag_def.h"
#include "mui_scene_dispatcher.h"
#include "amiibo_view.h"
#include "mui_list_view.h"
#include "mui_text_input.h"
#include "vos.h"

#include "mui_mlib.h"
#include "m-string.h"


typedef struct {
    amiibo_view_t *p_amiibo_view;
    mui_list_view_t *p_list_view;
    mui_text_input_t *p_text_input;
    mui_view_dispatcher_t *p_view_dispatcher;
    mui_scene_dispatcher_t *p_scene_dispatcher;
    ntag_t ntag;
    vos_drive_t current_drive;
    string_t current_file;
    string_t current_folder;
} app_amiibo_t;

typedef enum { AMIIBO_VIEW_ID_LIST, AMIIBO_VIEW_ID_DETAIL, AMIIBO_VIEW_ID_INPUT } amiibo_view_id_t;

extern const mini_app_t app_amiibo_info;

#endif