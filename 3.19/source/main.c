#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c,d,e;
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &a);
		if (a != -1)
		{
			printf("Enter interest rate:" );
			scanf_s("%f", &b);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &c);
			d = c / 365 * b * a;
			printf("The interest charge is $%.2f\n", d);

		}
		else
		{
			break;
		}
	}

	return 0;
}