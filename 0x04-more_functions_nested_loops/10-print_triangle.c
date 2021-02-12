#include "holberton.h"

/**
* print_triangle - prints a triangle
*
* @size: number of times triangle should be printed.
*
* Return: return 0.
*
*/
void print_triangle(int size)
{
	int splmt = size - 1;
	int hash = 1;
	int row;
	int col;
	int ih;

		if (size <= 0)
			_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < splmt; col++)
		{
			_putchar(' ');
		}
			for (ih = 0; ih < hash; ih++)
			{
				_putchar('#');
			}
			splmt--;
			hash++;
		_putchar('\n');
	}
}

