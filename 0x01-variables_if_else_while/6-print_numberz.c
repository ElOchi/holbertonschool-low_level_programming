#include <stdio.h>

/**
* main - Prints number from 0 to 9.
*
* Return: Always 0.
*/

int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar (num + '0');
		num++;
	}

	putchar ('\n');
	return (0);
}
