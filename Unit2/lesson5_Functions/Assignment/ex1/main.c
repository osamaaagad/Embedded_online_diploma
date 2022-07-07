/*
 * ex1.c
 *
 *  Created on: Jul 5, 2022
 *      Author: osama
 */


#include <stdio.h>

void check_prime(int n1)
{

	int n2,count=0;


	for(n2=n1-1;n2>1;n2--)
	{

		if (n1%n2==0){
			count++;
		}

	}

	if (count==0){
		printf("%d ",n1);
	}


}

int main ()
{

	int i,j,k;

	printf("Enter two numbers(intervals): ");
	fflush(stdout); fflush(stdin);
	scanf("%d%d",&i,&j);

	printf("Prime numbers between %d and %d are: ",i,j);


	for(k=i+1;k<j;k++)
	{

		check_prime(k);



	}



	return 0;



}
