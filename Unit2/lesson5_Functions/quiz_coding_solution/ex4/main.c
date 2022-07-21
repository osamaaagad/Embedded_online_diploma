/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: osama
 */


#include <stdio.h>


int clearbit(int n,int b)
{
	int k;

	k=n&=~(1<<b);

	return k;


}

int main ()
{

	int num,bit;

	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d",&num);

	printf("Enter a bit position u want to clear: ");
	fflush(stdout);
	scanf("%d",&bit);

	printf("the number after clearing the bit: %d",clearbit(num,bit));


	return 0;
}
