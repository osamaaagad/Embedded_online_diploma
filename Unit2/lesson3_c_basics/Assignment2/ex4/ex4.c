/*
 * ex4.c
 *
 *  Created on: Jun 21, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()

{
	float num;

	printf("Enter a number:");
	fflush(stdout);
	scanf("%f",&num);

	if (num>0)
	{
		printf("%f is positive",num);
	}

	else if (num<0)
	{
		printf("%f is negative",num);
	}
	else
	{
		printf("you entered zero");
	}

	return 0;
}
