#include "holberton.h"

/**
*main - function to print fizz buzz
*
*
* Return: return 0.
*
*/

int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 != 0) && (num % 5 != 0))
		{
			printf("%d", num);
		}
		if (num % 3 == 0)
		{
			printf("Fizz");
		}
		if (num % 5 == 0)
		{
			printf("Buzz");
		}
		if (num != 100)
		{
			printf(" ");
		}
		num++;
	}
	printf("\n");
	return (0);
}

