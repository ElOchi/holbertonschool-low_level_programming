#include "holberton.h"

/**
*print_line - prints a line
*
* @n: number of times char should be printed.
*
* Return: return 0.
*
*/


void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('-');
		line++;
	}
	_putchar('\n');
}
