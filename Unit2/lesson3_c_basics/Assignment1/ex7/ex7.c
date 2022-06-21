/*
 * ex7.c
 *
 *  Created on: Jun 20, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	float a,b;

	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);


	printf("\nEnter value of b:");
	fflush(stdout);
	scanf("%f",&b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\nAfter swapping, value of a = %f",a);

	printf("\nAfter swapping, value of b = %f",b);

}
