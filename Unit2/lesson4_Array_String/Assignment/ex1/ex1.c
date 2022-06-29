/*
 * ex1.c
 *
 *  Created on: Jun 28, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	float a[2][2],b[2][2],sum_of_matrixs[2][2];
	int r,c;

	printf("Enter the elements of 1st matrix :-\n");

	for (r=0;r<2;r++)
	{

		for (c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &a[r][c]);

		}
	}

	printf("\n");
	printf("Enter the elements of 2st matrix :-\n");

	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			printf("Enter b%d%d: ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f", &b[r][c]);
		}
	}

	for (r=0;r<2;r++)
	{
		for (c=0;c<2;c++)
		{
			sum_of_matrixs[r][c]=a[r][c]+b[r][c];
		}
	}


	printf("sum_of_matrixs is: \n");

	for (r=0;r<2;r++)
	{
		printf("\n");
		for (c=0;c<2;c++)
		{

			printf("%.2f\t",sum_of_matrixs[r][c]);
		}
	}

	return 0;

}
