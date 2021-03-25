#include "holberton.h"
/**
 * print_binary - prints binary value of int
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n > 1)
		print_binary(n >> 1);
	i = (n & 1);
	_putchar(i + '0');
}
