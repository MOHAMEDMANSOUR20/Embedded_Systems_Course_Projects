/*
 ============================================================================
 Name        : lab1.c
 Author      : Mohamed Mansour El Sabbagh
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
	float u, a, t;
	float v, s;

	// Taking Inputs:
	printf("Enter initial velocity, acceleration, and time elapsed respectively!!\n");
	fflush(stdout);
	scanf("%f %f %f", &u, &a, &t);

	// Calculations:
	v= u + a * t;
	s = u * t + 0.5 *a * t * t;

	// Displaying Outputs:
	printf("V = %f m/s and S = %f m\n", v, s);

	return 0;
}
