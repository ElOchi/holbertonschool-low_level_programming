#include "holberton.h"

/**
 *_abs - prints absolute value
 *
 * @n: int n
 *
 * Return: return absolute
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
