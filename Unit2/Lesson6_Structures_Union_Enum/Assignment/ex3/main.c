/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: osama
 */


/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: osama
 */


#include <stdio.h>

struct sdata {

	float real;
	float imaginary;

};

void sum_numbers(struct sdata d1, struct sdata d2)
{

	struct sdata sum;

	sum.real=d1.real+d2.real;
	sum.imaginary=d1.imaginary+d2.imaginary;



	printf("\n\nsum= %0.1f+%0.1fi",sum.real,sum.imaginary);



}

int main()
{

	struct sdata d1,d2;

	printf("for 1st complex number: \n");

	printf("Enter real and imaginary respectively: "); fflush(stdout);
	scanf("%f %f",&d1.real ,&d1.imaginary);

	printf("\nfor 2st complex number: \n");

		printf("Enter real and imaginary respectively: "); fflush(stdout);
		scanf("%f %f",&d2.real ,&d2.imaginary);





	sum_numbers(d1,d2);



	return 0;


}
