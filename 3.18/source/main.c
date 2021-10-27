#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	while (1)
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &a);
		if (a != -1)
		{
			b = a * 0.09 + 200;

			printf("Salary is: %.2f\n",b);

		}
		else
		{
			break;
		}
	}
	
	return 0;
}