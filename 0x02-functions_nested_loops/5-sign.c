#include "holberton.h"
/**
 *print_sign - check for sign of number
 *
 * @n: int n
 *
 * Return: return 1 if greater than 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}


