/*
 * ex2.c
 *
 *  Created on: Jun 21, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	char character;

	printf("Enter an alphabet: ");
    fflush(stdout);
    scanf("%c",&character);

    if (character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
    {

    	printf("\n%c is a vowel",character);
    }
    else
    {
    	printf("\n%c is a consonant",character);
    }

    return 0;
}
