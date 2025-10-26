/*
 ============================================================================
 Name        : problem3.c
 Author      : Mohamed Mansour El sabbagh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Problem 3 */

	// Variable Declaration:
	int number;
	int first=0, second=1;

	// Taking Inputs:
	printf("Enter the number of terms:\n");
	fflush(stdout);
	scanf("%d", &number);

	// Calculations and output displaying:
	printf("The Fibonacci series of the first %d terms are: ", number);
	for(int i=0; i<number; i++){
		if(i==0){
			printf("(%d, ", first);
		}
		else if(i==1){
			printf("%d, ", second);
		}
		else if(i==number-1) {
			printf("%d).", first+second);
		}
		else{
			int sum = first+second;
			first = second;
			second = sum;
			printf("%d, ", sum);
		}
			}

	return 0;
}
