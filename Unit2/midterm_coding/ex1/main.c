/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: osama
 */


#include <stdio.h>

void func(int num)
{

	int sum=0,i;


	while(num!=0)
	{
		i=num%10;
		sum+=i;
		num=num/10;

	}

	printf("the sum of all digits= %d",sum);
}


int main()
{

	int num;

	printf("Enter a number: "); fflush(stdout);
	scanf("%d",&num);

	func(num);

return 0;

}
