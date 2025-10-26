/*
 ============================================================================
 Name        : try.c
 Author      : Mohamed Mansour El Sabbagh
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>

int d (int x);
int main()
{
	 char  x [10]= {10};
	 x[0]=d();
	 printf("%x\n", x);
    return 0;
}
int d (int x){
	 return x++;
}
