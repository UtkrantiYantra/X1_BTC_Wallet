#include "buzzer.h"
#include "board.h"
#include <stdint.h>



static volatile bool buzzer_status = 0; // A flag indicating PWM status.
bool buzzer_disabled = false;

static void buzzer_timer_handler(void* p_context);

static void buzzer_timer_start(uint32_t msec);

static void buzzer_stop();


/* @function : software_timer_init
 * @brief    : 
 */
void buzzer_timer_create(void)
{

}

void pwm_ready_callback(uint32_t pwm_id) // PWM callback function
{
    //ready_flag = true;
}

void buzzer_init()
{

}

void buzzer_start(uint32_t on_time_msec)
{
    if (buzzer_disabled) return;
    buzzer_status = 1;
    BSP_TIM2_PWM_Start(on_time_msec);
}

/**@brief Timeout handler for the repeated timer.
 * This is called every time
  timer ends.
 */
static void buzzer_timer_handler(void* p_context)
{

}

static void buzzer_timer_start(uint32_t msec)
{

}

static void buzzer_stop()
{

    buzzer_status = 2;
}
