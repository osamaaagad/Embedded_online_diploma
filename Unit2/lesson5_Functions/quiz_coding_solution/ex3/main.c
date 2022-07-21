/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: osama
 */


#include <stdio.h>


int reverse(int arr1[],int i,int l)
{

	int j, arr2[100];

for (i=0,j=(l-1);i<l&&j>=0;i++,j--)

{
	arr2[j]=arr1[i];
}

printf("\nthe reversed array: ");

for (i=0;i<l;i++)
{
	printf("%d\t",arr2[i]);
	fflush(stdout);
}

return 0;

}




int main ()
{

	int x,length;
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

	reverse(arr1,x,length);

	return 0;

}
