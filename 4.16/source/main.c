#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(void)
{
	int a, b;
	char sign = '*';

	printf("(A)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < a; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(B)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 9; a < b; b--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("(C)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b < a)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	printf("(D)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 9; 0 < b; b--)
		{
			if (a < b)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}