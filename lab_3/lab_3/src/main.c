# include<stdint.h>

/* PortB Clock*/
# define RCC_BASE_ADD 0x40023800
# define RCC_OFFSET 0x30
# define RCC_GPIO_B_ADD (*((uint32_t*)(RCC_BASE_ADD + RCC_OFFSET)))

/*PortB Registers*/
# define GBIO_B_BASE_ADD 0x40020400
# define MODE_OFFSET 0x00
# define OUTPUT_TYPE_OFFSET 0x04
# define PULL_UP_DOWN_OFFSET  0x0C
# define INPUT_DATA_OFFSET 0x10
# define OUTPUT_DATA_OFFSET 0x14
# define MODE_ADD  (*((uint32_t*)(GBIO_B_BASE_ADD + MODE_OFFSET)))
# define OUTPUT_TYPE_ADD  (*((uint32_t*)(GBIO_B_BASE_ADD + OUTPUT_TYPE_OFFSET)))
# define PULL_UP_DOWN_ADD  (*((uint32_t*)(GBIO_B_BASE_ADD + PULL_UP_DOWN_OFFSET)))
# define INPUT_DATA_ADD  (*((uint32_t*)(GBIO_B_BASE_ADD + INPUT_DATA_OFFSET)))
# define OUTPUT_DATA_ADD  (*((uint32_t*)(GBIO_B_BASE_ADD + OUTPUT_DATA_OFFSET)))

int main(void)
{
	/* Enabling PortB Clock */
	RCC_GPIO_B_ADD |= (1<<1);

	/* Setting Pin Modes and Types */
	MODE_ADD &= ~(1<<7);
	MODE_ADD |= (21<<10);
	OUTPUT_TYPE_ADD = 0x00000000;
	PULL_UP_DOWN_ADD |= (1<<6);

	/* Initializing Output */
	OUTPUT_DATA_ADD=0x00000000;
	uint32_t outp = 1;

	uint32_t inp;

	/* Loop */
    while(1){
    /* Reading Button Signal */
	inp = INPUT_DATA_ADD & (1<<3);
	if (! inp){
		/* This if is for button debouncing!!!
		We wait for nearly 10 mili-seconds and check the button signal again to ensure that the signal is stable and produced one time only. */
		for(int i=0; i<50000; i++);
		inp = INPUT_DATA_ADD & (1<<3);

		if (! inp){
			/* This if changes the value of the three output pins. */
			outp %= 8;
			OUTPUT_DATA_ADD = (outp<<5);
			outp++;
		}
	}

	while(1){
		/* This Loop ensures that the button returned to switch off state so that we can detect falling edges only. */
		for(int i=0; i<1000; i++);
		if(INPUT_DATA_ADD & (1<<3))
			break;
	}
	for(int i=0; i<10000; i++);
	}
}

