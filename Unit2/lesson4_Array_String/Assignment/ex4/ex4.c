/*
 * ex4.c
 *
 *  Created on: Jun 28, 2022
 *      Author: osama
 */


#include <stdio.h>

int main ()
{

	int x,i,location;
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

	printf("\nEnter the element to be inserted: ");
	fflush(stdout);
	scanf("%f",&num);

	printf("\nEnter the location: ");
	fflush(stdout);
	scanf("%d",&location);


	x+=1;
	for(i=x-1;i>=location;i--)
	{
		a[i]=a[i-1];
	}

	a[location-1]=num;

	for(i=0;i<x;i++)
	{
		printf("%.1f\t",a[i]);
	}

	return 0;


}
