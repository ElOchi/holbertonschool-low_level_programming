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
	char line = 0;

	while (line < n)
	{
		_putchar('-');
		line++;
	}
	_putchar('\n');
}
