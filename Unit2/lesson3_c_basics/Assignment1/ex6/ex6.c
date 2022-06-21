/*
 * ex6.c
 *
 *  Created on: Jun 20, 2022
 *      Author: osama
 */



#include <stdio.h>

int main()
{

	float a,b,temp;

	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);


	printf("\nEnter value of b:");
	fflush(stdout);
	scanf("%f",&b);

	temp =a;
	a=b;
	b=temp;

	printf("\nAfter swapping, value of a = %f",a);

	printf("\nAfter swapping, value of b = %f",b);

}
