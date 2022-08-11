/*
 * main.c
 *
 *  Created on: Aug 10, 2022
 *      Author: osama
 */


//a pointer to an array which contents are pointer to structure.

#include <stdio.h>

struct employee {

	char name[100];
	int id;
};

int main()
{

	static struct employee a={"Osama",1001}, b={"Alex",1002} , c={"Gad",1003};

	struct employee *arr[3]={&a,&b,&c};

	struct employee *((*p)[3])=&arr ;

	printf("Employee Name: %s",(*(*p+1))->name);
	printf("\nEmployee id: %d",(*(*p+1))->id);

	return 0;

}
