/*
 * main.c
 *
 *  Created on: Jul 5, 2022
 *      Author: osama
 */


#include <stdio.h>
#include <string.h>

void reverce(int i, char sen[])
{

	printf("%c",sen[i]);
	i--;

	if(i>=0)
	{
		reverce(i,sen);
	}

}

int main()
{

	char sen[100];
	int j;

	printf("Enter a sentence: ");
	fflush(stdout);
	gets(sen);


	j=strlen(sen)-1;

	reverce(j,sen);

}
