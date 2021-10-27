#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a1, a2, a3;
	printf("side1  side2  hypotenuse\n");
	for (a3 = 1; a3 <= 500; a3++)
	{
		for (a1 = 1; a1 < a3; a1++)
		{
			for (a2 = 1; a2 < a3; a2++)
			{
				if (a3*a3 == a1 * a1 + a2 * a2)
				{
					printf("%d	%d	%d\n", a1, a2, a3);
				}
			}
		}
	}
}