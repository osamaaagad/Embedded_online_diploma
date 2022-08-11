/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	int m;
	int* ab;

	m=29;

	printf("Address of m : %p",&m);
	printf("\nValue of m : %d",m);

	ab=&m;
	printf("\n\nNow ab is assigned with the address of m.\n");

	printf("Address of pointer ab : %p",ab);
	printf("\nContent of pointer ab : %d",*ab);

	m=34;
	printf("\n\nThe value of m assigned to 34 now. \n");

	printf("Address of pointer ab : %p",ab);
	printf("\nContent of pointer ab : %d",*ab);

	*ab=7;
	printf("\n\nThe pointer variable ab is assigned with the value 7 now.\n");
	printf("Address of m : %p",&m);
	printf("\nValue of m : %d",m);

	return 0;
}
