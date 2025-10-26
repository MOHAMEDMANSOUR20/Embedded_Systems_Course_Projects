/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "interrupts.h"
#include "stm32f4xx.h"
#include "GPIO.h"
	static unsigned char out_no = 0;

int main(void)
{

	/* Initializing Interrupt Line 0: */
		EXTI_Init(0,0);
		NIVC_Init(6);
		Select_line(0,0);
	/* Initializing Interrupt Line 1: */
		EXTI_Init(1,0);
		NIVC_Init(7);
		Select_line(1,0);

	/* Initializing Seven Segment Pins as Output: */
		GPIO_Init(GPIOB,0,1,1);
		GPIO_Init(GPIOB,1,1,1);
		GPIO_Init(GPIOB,2,1,1);
		GPIO_Init(GPIOB,3,1,1);
	/* Initializing Interrupt Input Pins: */
		GPIO_Init(GPIOA,0,0,0);
		GPIO_Init(GPIOA,1,0,0);



	while(1){
		/* Displaying Counter Value on the Seven Segment: */
			for (int i=0; i<4; i++){
				GPIO_WritePin(GPIOB,i,(1u & (out_no>>i)));
				}
	}
}

void EXTI0_IRQHandler(void){
	/* Disenabling the other interrupt: */
		EXTI -> IMR &= ~(1U<<1);\
	/* Incrementing Counter Value: */
		out_no = (out_no+1)%10;
	/* Enabling the other interrupt: */
		EXTI -> IMR |= (1U<<1);
}

void EXTI1_IRQHandler(void){
	/* Disenabling the other interrupt: */
		EXTI -> IMR &= ~(1U<<0);
	/* Decrementing Counter Value: */
		out_no  = ( (out_no-1) >= 0 ? out_no-1 : 9);
	/* Enabling the other interrupt: */
		EXTI -> IMR |= (1U<<0);
}
