/*
 ============================================================================
 Name        : lab1_prob2.c
 Author      : Mohamed Mansour El Sabbagh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Problem 2 */

	// Variable Declaration:
	int x, y, z;
	int sum, product, min, max;
	float avg;

	// Taking Inputs:
	printf("Enter three different integers:");
	fflush(stdout);
	scanf("%d %d %d", &x, &y ,&z);

	// Calculations:
	sum = x + y + z;
	avg = sum / 3;
	product = x * y * z;
	min = (x<y)? x:y;
	min = (min<z)? min:z;
	max = (x>y)? x:y;
	max = (max>z)? max:z;

	// Displaying Outputs:
	printf("Sum is %d\n", sum);
	printf("Average is %f\n", avg);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", min);
	printf("Largest is %d\n", max);

	return 0;
}
