/*
 * ex6.c
 *
 *  Created on: Jun 28, 2022
 *      Author: osama
 */


#include <stdio.h>

int main ()
{

	char text[100],c;
	int count=0,i;

	printf("Enter a string: ");
	fflush(stdout);
	gets(text);

	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&c);

	for(i=0;text[i]!=0;i++)
	{
		if(c==text[i])
		{
			count+=1;
		}
	}

	printf("\nFrequency of e = %d",count);

	return 0;


}
