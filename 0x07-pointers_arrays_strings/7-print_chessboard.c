#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: character in the array string
 */
void print_chessboard(char (*a)[8])
{
	int index;
	int j;

	index = 0;

	while (index < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[index][j]);
			if (j == 7)
				_putchar('\n');
		}
		index++;
	}
}
