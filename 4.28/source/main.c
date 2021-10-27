#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int job;
	float a, b, c;
	printf("enter number(manager->1;hourly worker->2;mission worker->3;pieceworker->4;end->5)\n");
	scanf_s("%d", &job);
	while (job != 5)
	{
		switch (job)
		{
		case 1:

			printf("Your salary is $1000\n");
			break;
		case 2:

			printf("input how long you work:");
			scanf_s("%f", &a);
			if (a <= 40)
			{
				printf("Your salary is $%.2f\n", a * 5);
			}
			else
			{
				a = a - 40;
				a = a * 5 * 1.5 + 40 * 5;
				printf("Your salary is $%.2f\n", a);
			}
			break;

		case 3:

			printf("input how many you sale:");
			scanf_s("%f", &b);
			b = 250 + b * 0.057;
			printf("Your salary is $%.2f\n", b);
			break;

		case 4:

			printf("input how many you make:");
			scanf_s("%f", &c);
			c = c * 0.5;
			printf("Your salary is $%.2f\n", c);
			break;


		}
		printf("enter number(manager->1;hourly worker->2;mission worker->3;pieceworker->4;end->5)\n");
		scanf_s("%d", &job);
	}
}