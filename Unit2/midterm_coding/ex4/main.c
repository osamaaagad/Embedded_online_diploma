/*
 * main.c
 *
 *  Created on: Jul 20, 2022
 *      Author: osama
 */


#include <stdio.h>
#include <string.h>

void reverse(char num[],int l)
{
	int i;
	printf("Reversed digits: ");

	for (i=l-1;i>=0;i--)
	{

		printf("%c",num[i]);

	}

}

int main()
{

	char num[100];
	int length;


	printf("Enter a number: "); fflush(stdout);
	gets(num);

	length= strlen(num);

	reverse(num,length);

	return 0;

}
