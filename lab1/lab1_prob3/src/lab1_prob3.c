/*
 ============================================================================
 Name        : lab1_prob3.c
 Author      : Mohamed Mansour El Sabbagh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* problem 3*/

	// Variable Declaration:
	int t, h, m, s;

	// Taking Inputs:
	printf("Enter time in seconds");
	fflush(stdout);
	scanf("%d", &t);

	// Calculations:
	s = t % 60;
	t = t / 60;
	m = t % 60;
	h = t / 60;

	// Displaying Outputs:
	printf("Time is -->  %d:%d:%d", h, m, s);

	return 0;
}
