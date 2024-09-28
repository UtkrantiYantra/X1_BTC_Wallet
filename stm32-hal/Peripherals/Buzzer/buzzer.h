#ifndef BUZZER_H
#define BUZZER_H

#include "stdint.h"
#include <stdbool.h>

#include "board.h"

//Pins for Reader are defined here
#define BUZZER_DURATION 100

extern bool buzzer_disabled;

void buzzer_init(void);
void buzzer_start(uint32_t);

#endif
