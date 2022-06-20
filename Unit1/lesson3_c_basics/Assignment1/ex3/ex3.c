/*
 * ex3.c
 *
 *  Created on: Jun 19, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()

{
	int x,y,sum;

	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&x,&y);

	sum=x+y;

	printf("\nsum= %d" ,sum);

	return 0;

}
