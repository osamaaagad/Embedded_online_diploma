/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: osama
 */


#include <stdio.h>
#include <string.h>

struct SStudent {

	char name[50];
	int roll;
	float marks;

};


int main()
{

	struct SStudent x;

	printf("Enter information of students: \n\n");

	printf("Enter name: "); fflush(stdout);
	gets(x.name);

	printf("Enter roll number: "); fflush(stdout);
	scanf("%d",&x.roll);

	printf("Enter marks: "); fflush(stdout);
	scanf("%f",&x.marks);

	printf("\n\nDisplaying information: \n\n");

	printf("name: %s\n",x.name);
	printf("roll: %d\n",x.roll);
	printf("marks: %0.2f\n",x.marks);

	return 0;


}
