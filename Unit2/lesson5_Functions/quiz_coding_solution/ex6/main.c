/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: osama
 */


#include <stdio.h>
#include <math.h>

int check_power(int n1,int n2)
{

double i=log(n1) / log(n2);



if (i==trunc(i))
{
	printf("(%d) is power of (%d)= %lf",n1,n2,i);
}

else
{
	printf("(%d) is not power of (%d)",n1,n2);
}

return 0;

}

int main()
{
	int num1,num2;

	printf("Enter an integer to check the power of another num: ");
	fflush(stdout);
	scanf("%d",&num1);

	printf("Enter an integer for the another num: ");
	fflush(stdout);
	scanf("%d",&num2);

	check_power(num1,num2);

	return 0;
}
