/*
 * ex3.c
 *
 *  Created on: Jun 28, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()
{

	float a[100][100],trans[100][100];
	int x,y,r,c;

	printf("Enter rows and column of matrix: ");
	fflush(stdout); fflush(stdin);
	scanf("%d%d",&x,&y);

	if(x>100||y>100)
	{
		printf("Please re-enter numbers of range(1-100)\n");
		printf("Enter rows and column of matrix: ");
		fflush(stdout); fflush(stdin);
		scanf("%d%d",&x,&y);
	}
	else if(x<=0||y<=0)
	{
		printf("Please re-enter numbers of range(1-100)");
		printf("Enter rows and column of matrix: ");
		fflush(stdout); fflush(stdin);
		scanf("%d%d",&x,&y);

	}

	printf("Enter elements of matrix:- \n");


	for(r=0;r<x;r++)
	{
		for(c=0;c<y;c++)
		{
			printf("Enter elements a%d%d: ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&a[r][c]);
		}
	}

	printf("\n");
	printf("Entered Matrix: \n");

	for(r=0;r<x;r++)
	{
		printf("\n");
		for(c=0;c<y;c++)
		{
			printf("%.2f\t",a[r][c]);

		}
	}

	for(r=0;r<x;r++)
	{
		for(c=0;c<y;c++)
		{
			trans[c][r]=a[r][c];
		}
	}

	printf("\n\n");
	printf("transpose Matrix: \n");

	for(r=0;r<y;r++)
	{
		printf("\n");
		for(c=0;c<x;c++)
		{
			printf("%.2f\t",trans[r][c]);

		}
	}

	return 0;


}
