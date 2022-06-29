/*
 * ex8.c
 *
 *  Created on: Jun 29, 2022
 *      Author: osama
 */


#include <stdio.h>
#include <string.h>

int main ()
{

	char text[100];
	int length,i;

	printf("Enter a string: ");
	fflush(stdout);
	gets(text);

	printf("Reverse string is: ");

	length=strlen(text)-1;

	for(i=length;text[i]!=0;i--)
	{

		printf("%c",text[i]);
	}

	return 0;


}
