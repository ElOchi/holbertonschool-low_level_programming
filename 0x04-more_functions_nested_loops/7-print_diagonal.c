#include "holberton.h"

/**
*print_diagonal - prints a diagonal line
*
* @n: number of times char should be printed.
*
* Return: return 0.
*
*/
void print_diagonal(int n)
{
	char line = '\\';
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			if (j == i)
			{
			_putchar(line);
			}
			else
			{
			_putchar(' ');
			}
	_putchar('\n');
	}
}
