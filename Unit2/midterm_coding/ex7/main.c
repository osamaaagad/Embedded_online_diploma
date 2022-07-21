/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: osama
 */


#include <stdio.h>

int sum_numbers(int num, int sum)
{

	sum+=num;
	num--;


	if(num!=0){

	return sum_numbers(num,sum);
	}

	return sum;
}

int main()
{
	int k=0,i=100;

	printf("the sum of numbers between 1 to 100 = %d",sum_numbers(i,k));
	return 0;
}
