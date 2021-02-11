#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: we will print this variable's last digit
 * Return: the last digit on n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last > 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

