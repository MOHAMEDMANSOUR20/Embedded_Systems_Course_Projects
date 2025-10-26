/*
 ============================================================================
 Name        : homework.c
 Author      : Mohamed Mansour El Sabbagh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* HW assignment1: */

	// Variable Declaration:
	int exp, no;

	// Taking Inputs:
	printf("Enter the exponent and number of iterations respectively:\n");
	fflush(stdout);
	scanf("%d %d", &exp, &no);

	// Calculations:
	float result = 1, deno = 1, nemo = 1;
	for(int i=1; i<no; i++){
		deno *= i;
		nemo *= exp;
		result += (nemo/deno);
	}

	// Displaying Outputs:
	printf("e^%d = %f",exp, result);

	return 0;
}
