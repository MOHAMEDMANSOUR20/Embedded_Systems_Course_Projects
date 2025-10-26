/*
 ============================================================================
 Name        : problem1.c
 Author      : Mohamed Mansour El sabbagh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Problem 1 */

// Variable Declaration:
unsigned char x, o;
int n;

// Taking Inputs:
printf("First, Specify the rotation option!!! Use only 'l' for left and 'r' for right:\n");
fflush(stdout);
scanf("%c", &o);
printf("Second, Enter the number:\n");
fflush(stdout);
scanf("%d", &x);
printf("Third, Enter the number of rotation cycles :\n");
fflush(stdout);
scanf("%d", &n);

// Calculations:
for(int i=0; i<n; i++){
	if (o =='l'){
		if(x & (1<<7)){
			x = x<<1;
			x |= 1;
		}
		else{
			x = x<<1;
		}
	}
	else if (o =='r'){
		if(x&1){
			x = x>>1;
			x |= (1<<7);
		}
		else{
			x = x>>1;
		}
	}
}

// Displaying Outputs:
printf("The resulting number is: %d", x);

	return 0;
}
