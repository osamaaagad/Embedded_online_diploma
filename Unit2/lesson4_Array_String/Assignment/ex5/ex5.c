/*
 * ex5.c
 *
 *  Created on: Jun 28, 2022
 *      Author: osama
 */


#include <stdio.h>

int main ()
{

	int x,i;
	float a[10],num;

	printf("Enter no of elements: ");
	fflush(stdout);
	scanf("%d",&x);

	printf("Enter elements of the array: \n");
	fflush(stdout);

	for(i=0;i<x;i++)
	{
		scanf("%f",&a[i]);

	}

	printf("\nEnter the element to be searched: ");
	fflush(stdout);
	scanf("%f",&num);

	for(i=0;i<x;i++)
	{
		if(num==a[i])
		{

			break;
		}
	}

	printf("\nNumber found at the location= %d",i+1);

	return 0;



}
