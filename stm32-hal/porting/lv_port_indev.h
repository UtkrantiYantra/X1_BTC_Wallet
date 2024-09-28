
/**
 * @file lv_port_indev_templ.h
 *
 */

/*Copy this file as "lv_port_indev.h" and set this value to "1" to enable content*/
#if 1

#ifndef LV_PORT_INDEV_TEMPL_H
#define LV_PORT_INDEV_TEMPL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"

//#include "app_error.h"
//#include "app_util_platform.h"

/*********************
 *      DEFINES
 *********************/
#define NEXT_PIN
#define PREV_PIN
#define LEFT_PIN
#define RIGHT_PIN
#define ENTER_PIN

/**********************
 *      TYPEDEFS
 **********************/
#ifdef DEV_BUILD
typedef void (*ekp_process_queue_fptr)(lv_indev_data_t *data);
#endif

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void invert_key_pad();
void lv_port_indev_init(void);
uint32_t keypad_get_key(void);
extern lv_indev_t* indev_keypad;

#ifdef DEV_BUILD
void ekp_register_process_func(ekp_process_queue_fptr func);
#endif
/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_PORT_INDEV_TEMPL_H*/

#endif /*Disable/Enable content*/
