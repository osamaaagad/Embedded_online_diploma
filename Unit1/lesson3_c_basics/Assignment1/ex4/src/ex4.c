/*
 ============================================================================
 Name        : ex4.c
 Author      : Osama gad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{

	float x,y,product;

	printf("Enter Two Numbers: ");
	fflush(stdout);
	scanf("%f %f" ,&x,&y);

	product=x*y;

	printf("\nproduct= %f" ,product);

	return 0;
}

