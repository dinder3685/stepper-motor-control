
#ifndef NEMA17_DINDER_H
#define NEMA17_DINDER_H

#include "stm32f4xx_hal.h"

void microDelay(uint16_t delay);
void step(int steps, uint8_t direction, uint16_t delay);

#endif 
