/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: osama
 */

#include <stdio.h>


int check_last_occuarance(int n, int l, int arr1[])
{
	int i;
	for (i=(l-1);i>=0;i--)
	{
		if(arr1[i]==n)
		{
			printf("\nThe last occurance of the number is: %d",(i+1));
			break;
		}

	}
	return 0;
}


int main ()
{

	int x,length,num;
	int arr1[100];

	printf("Enter no. of elements of an array: ");
	fflush(stdout);
	scanf("%d",&length);

	printf("\nEnter elements of arr1: \n");

	for(x=0;x<length;x++)
	{
		printf("Enter (%d) integer:  ",x+1);
		fflush(stdout);
		scanf("%d",&arr1[x]);
	}

	printf("Array: ");
	fflush(stdout);
	for(x=0;x<length;x++)
	{
		printf("%d\t",arr1[x]);
		fflush(stdout);
	}

	printf("\n\nEnter number in the array you want to check last occurance: ");
	fflush(stdout);
	scanf("%d",&num);

	check_last_occuarance(num,length,arr1);

	return 0;

}
