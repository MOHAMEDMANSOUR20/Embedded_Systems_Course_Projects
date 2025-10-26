/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/
#include "GPIO.h"
#include "Keypad.h"
#include "stm32f4xx.h"



int main(void)
{
	/* Initializing Seven Segment Pins: */
	GPIO_Init (GPIOB, 0, 1, 1);
	GPIO_Init (GPIOB, 1, 1, 1);
	GPIO_Init (GPIOB, 2, 1, 1);
	GPIO_Init (GPIOB, 3, 1, 1);

	/* Initializing Keypad Pins: */
	Keypad_init();

	/* Infinite Loop: */
	while(1) Keypad_manage();
}
