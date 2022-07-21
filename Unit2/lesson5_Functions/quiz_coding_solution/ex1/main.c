/*
 * main.c
 *
 *  Created on: Jul 8, 2022
 *      Author: osama
 */


#include <stdio.h>
#include <string.h>

int check(char string[],char name[])
{

	int output;

	output= stricmp(string,name);


	if (output==0)
	{
		printf("The string and the user name are the same");
	}
	else
	{
		printf("The string and the user name are not the same");
	}

	return 0;


}

int main()
{
	char string[100],name[100];

	printf("Enter a string: ");
	fflush(stdout);
	gets(string);

	printf("Enter the user name: ");
	fflush(stdout);
	gets(name);

	check(string,name);

	return 0;
}
