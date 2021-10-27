#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e;
	while (2)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%f", &a);
		if (a != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf_s("%f", &b);
			if (a > 40)
			{
				c = a * b + b / 2;
				printf("Salary is: $%.2f\n", c);
			}
			else 
			{
				c = a * b;
				printf("Salary is: $%.2f\n", c);
			}
		}
		else
		{
			break;
		}
	}

	return 0;
}