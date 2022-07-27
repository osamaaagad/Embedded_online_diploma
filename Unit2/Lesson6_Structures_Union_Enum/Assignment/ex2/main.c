/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: osama
 */


#include <stdio.h>

struct sdata {

	int feet;
	float inch;

};

void sum_distances(struct sdata d1, struct sdata d2)
{

	struct sdata sum;

	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;

	if(sum.inch>=12.0)
	{
		sum.inch-=12.0;
		sum.feet++;
	}

	printf("\n\nsum of distance= %d\'-%0.1f\"",sum.feet,sum.inch);



}

int main()
{

	struct sdata d1,d2;

	printf("Enter information for 1st distance: \n");

	printf("Enter feet: "); fflush(stdout);
	scanf("%d",&d1.feet);

	printf("Enter inch: "); fflush(stdout);
	scanf("%f",&d1.inch);

	printf("\nEnter information for 2st distance: \n");

	printf("Enter feet: "); fflush(stdout);
	scanf("%d",&d2.feet);

	printf("Enter inch: "); fflush(stdout);
	scanf("%f",&d2.inch);

	sum_distances(d1,d2);



	return 0;


}
