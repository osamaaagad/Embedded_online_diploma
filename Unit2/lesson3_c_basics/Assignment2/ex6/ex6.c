/*
 * ex6.c
 *
 *  Created on: Jun 21, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	int vnum=1,sum=0,num;

	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);


	while(vnum<=num)
	{
		sum=sum+vnum;
		vnum++;
	}

	printf("sum=%d",sum);

	return 0;
}
