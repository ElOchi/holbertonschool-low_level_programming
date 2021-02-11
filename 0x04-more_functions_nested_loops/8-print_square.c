#include "holberton.h"

/**
*print_square - prints a squares
*
* @size: number of times square should be printed.
*
* Return: return 0.
*
*/
void print_square(int size)
{
	int square = '#';
	int row;
	int col;

		if (size <= 0)
			_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar(square);
		}
		_putchar('\n');
	}
}
