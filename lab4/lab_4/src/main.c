/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "stm32f4xx.h"
# include "GPIO.h"

int main(void)
{
	/* Declaring Variables */
	uint32_t inp ;
	unsigned char outp = 1;

	/* Setting Pin Mode */
	GPIO_Init(GPIOB,0,1,1);
	GPIO_Init(GPIOB,1,1,1);
	GPIO_Init(GPIOB,2,1,1);
	GPIO_Init(GPIOB,3,1,1);
	GPIO_Init(GPIOB,4,0,1);

	/* Loop */
	while(1){
		/* Reading Button Signal */
		inp = GPIO_ReadPin(GPIOB, 4);
		if(!inp){
			/* This 'if' is for button debouncing!!!
			We wait for nearly 10 milli-seconds and check the button signal again to ensure that the signal is stable and produced one time only. */
			for(int i=0; i<50000; i++);
			inp = GPIO_ReadPin(GPIOB, 4);
			if(!inp){
				/* This 'if' changes the value of the four output pins. */
				outp%= 10;
				for(unsigned char i=0;i<4;i++)
				GPIO_WritePin(GPIOB,i,(outp&(1<<i)));
				outp++;
			}
		}
		while(1){
			/* This Loop ensures that the button returned to switch off state so that we can detect falling edges only. */
			for(int i=0; i<1000; i++);
			inp = GPIO_ReadPin(GPIOB, 4);
			if(inp) break;
		}
		for(int i=0; i<10000; i++);


	}
}
