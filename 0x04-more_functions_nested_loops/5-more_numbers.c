#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0
 */



void more_numbers(void)
{
	int num;
	int num2;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			if (num2 > 9)
				_putchar(num2 / 10 + '0');
				_putchar(num2 % 10 + '0');
		}
	_putchar('\n');
	}
}
