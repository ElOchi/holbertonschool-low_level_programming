#include <stdio.h>

/**
* main - Prints all single digit of base 10 from 0, followed by a new line.
* *
* Return: Always 0.
*/

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
