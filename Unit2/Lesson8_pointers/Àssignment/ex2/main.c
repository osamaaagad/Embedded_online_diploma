/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	char character;
	char* p;
	int x;

	for(x=0;x<26;x++){

		p=&character;
		*p=x+'A';
		printf("%c\t",*p);
		p++;
	}

	return 0;
}
