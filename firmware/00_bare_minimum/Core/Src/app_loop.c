/*
 * app_loop.c
 *
 *  Created on: Nov 1, 2026
 *      Author: user
 */

#include "main.h"

#include "app_loop.h"

void main_loop(){

	HAL_GPIO_TogglePin(GPIOC, LED_BOARD_Pin);

	HAL_Delay(500);
}
