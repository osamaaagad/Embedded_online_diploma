/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: osama
 */


#include <stdio.h>

int main ()
{
	int* p;
	int x,i;
	int a[15];

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d",&x);

	printf("Input %d number of elements in the array : \n\n",x);
	fflush(stdin); fflush(stdout);

	for(i=0;i<x;i++)
	{
		printf("element-%d: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&a[i]);
	}


	printf("\nThe elements of array in reverse order are : \n\n");
	fflush(stdin); fflush(stdout);

	p=&a[x-1];
	i=0;

	while(x>0)
	{
		printf("element-%d: %d \n",i+1,*p);
		p--;
		x--;
		i++;
	}

	return 0;

}
