/*
 ============================================================================
 Name        : problem2.c
 Author      : Mohamed Mansour El sabbagh
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
	int no_b = 4, no_as = 1;

	// Displaying Outputs:
	for (int r =0; r<9; r++){
		for(int i = no_b; i>=0; i--){
			printf(" ");
		}
		for(int i=no_as; i>0; i--){
			printf("*");
		}
		printf("\n");
		if (r<4){
		no_b--;
		no_as+=2;
		}
		else{
			no_b++;
			no_as-=2;
		}
	}

	return 0;
}
