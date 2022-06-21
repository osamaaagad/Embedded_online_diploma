/*
 * ex1.c
 *
 *  Created on: Jun 20, 2022
 *      Author: osama
 */


#include <stdio.h>

int main ()
{

	int a;

	printf("Enter an integer you want to check: ");
	fflush(stdout);
    scanf("%d", &a);

    if(a%2!=0)
    {
    	printf("%d is odd",a);


   }

    else
    {
    	printf("%d is even",a);
    }
    return 0;
}
