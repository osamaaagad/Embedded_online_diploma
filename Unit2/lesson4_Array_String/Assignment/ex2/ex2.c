/*
 * ex2.c
 *
 *  Created on: Jun 28, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	float a[100],average,sum=0.0;
	int x,i;

	printf("Enter the number of data: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);

	while (x>100||x<=0)
	{
		printf("Please re-enter numbers of range(1-100)\n");
		printf("Enter the number of data: ");
		fflush(stdout); fflush(stdin);
		scanf("%d",&x);

	}

	for(i=0;i<x;i++)
	{
		printf("Enter (%d) number: ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i]);
		sum+=a[i];

	}

	average=sum/x;

	printf("Average= %.2f",average);

	return 0;


}
