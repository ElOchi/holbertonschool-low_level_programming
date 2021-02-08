#include<stdio.h>

int main(void)
{
	int a = 0, b;

	while (a < 5)
	{
		b = 0;
		while (b < 4)
		{
			printf("3 ");
			b++;
		}

		printf("\n");
		a++;
	}
	return (0);
}
