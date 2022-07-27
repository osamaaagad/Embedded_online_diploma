/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: osama
 */

#include <stdio.h>
#define pai 3.1415
#define area(r) (pai*(r)*(r))

int main()
{
	float radius,area;

	printf("Enter radius: "); fflush(stdout);
	scanf("%f",&radius);

	area=area(radius);

	printf("Area= %0.2f",area);

	return 0;


}
