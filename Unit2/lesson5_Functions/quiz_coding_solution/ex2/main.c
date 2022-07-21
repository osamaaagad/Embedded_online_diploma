/*
 * main.c
 *
 *  Created on: Jul 8, 2022
 *      Author: osama
 */


#include <stdio.h>


int swap(int arr1[], int arr2[],int l1,int l2)
{

	int arr3[100],x;

	for(x=0;x<100;x++)
	{

		arr3[x]=arr1[x];
		arr1[x]=arr2[x];
		arr2[x]=arr3[x];

	}


	printf("\n\nAfter swapping:\n");

		printf("Array1: ");
		fflush(stdout);
		for(x=0;x<l2;x++)
		{
			printf("%d\t",arr1[x]);
			fflush(stdout);
		}

		printf("\nArray2: ");
		fflush(stdout);
		for(x=0;x<l1;x++)
		{
			printf("%d\t",arr2[x]);
			fflush(stdout);
		}


	return 0;
}

int main ()
{

	int i,length1,length2;
	int arr1[100],arr2[100];

	printf("Enter no. of elements of arr1: ");
	fflush(stdout);
	scanf("%d",&length1);

	printf("\nEnter elements of arr1: \n");

	for(i=0;i<length1;i++)
	{
		printf("Enter (%d) integer:  ",i+1);
		fflush(stdout);
		scanf("%d",&arr1[i]);
	}


	printf("\n\nEnter no. of elements of arr2: ");
	fflush(stdout);
	scanf("%d",&length2);

	printf("\nEnter elements of arr2: \n");

	for(i=0;i<length2;i++)
	{
		printf("Enter (%d) integer:  ",i+1);
		fflush(stdout);
		scanf("%d",&arr2[i]);
	}

	printf("\nBefore swapping:\n");

	printf("Array1: ");
	fflush(stdout);
	for(i=0;i<length1;i++)
	{
		printf("%d\t",arr1[i]);
		fflush(stdout);
	}

	printf("\nArray2: ");
	fflush(stdout);
	for(i=0;i<length2;i++)
	{
		printf("%d\t",arr2[i]);
		fflush(stdout);
	}


	swap(arr1,arr2,length1,length2);

	return 0;

}
