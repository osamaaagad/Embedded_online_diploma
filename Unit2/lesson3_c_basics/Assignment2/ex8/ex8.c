/*
 * ex8.c
 *
 *  Created on: Jun 21, 2022
 *      Author: osama
 */


#include <stdio.h>

int main()

{
	char operator;
	float num1,num2,product;

	printf("Enter an operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&operator);

	printf("\nEnter two operands: ");
	fflush(stdout);
	scanf("%f%f",&num1,&num2);

	switch(operator)
	{
	case '+' :
	{
		product=num1+num2;
		printf("%f+%f=%f",num1,num2,product);
	}
	break;

	case '-' :
	{
		product=num1-num2;
		printf("%f-%f=%f",num1,num2,product);
	}
	break;

	case '*' :
		{
			product=num1*num2;
			printf("%f*%f=%f",num1,num2,product);
		}
		break;

	case '/' :
		{
			product=num1/num2;
			printf("%f/%f=%f",num1,num2,product);
		}
		break;



	}

	return 0;


}
