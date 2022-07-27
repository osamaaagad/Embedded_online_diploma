/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: osama
 */


#include <stdio.h>

struct sdata {

	char name[50];
	int roll;
	int marks;


};

int main()
{

	struct sdata student[10];
int i;



printf("Enter information of students: \n");

for(i=0;i<3;i++)
{
	student[i].roll=i+1;
	printf("\nfor roll number (%d)\n",student[i].roll);
	printf("\nEnter name: "); fflush(stdin); fflush(stdout);
	gets(student[i].name);
	printf("\nEnter marks: "); fflush(stdin); fflush(stdout);
	scanf("%d",&student[i].marks);

}

printf("\nDisplaying information of students: \n");

for(i=0;i<3;i++)
{
	student[i].roll=i+1;
	printf("\nfor roll number (%d)\n",student[i].roll);
	printf("name: %s\n",student[i].name);
	printf("marks: %d\n",student[i].marks);

}

return 0;
}
