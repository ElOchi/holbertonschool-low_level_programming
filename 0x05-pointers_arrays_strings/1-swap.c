#include "holberton.h"

/**
 * swap_int - takes a pointer to an int as parameter
 * and updates the value
 *
 * @a: is equal to 98
 * @b: is equal to 42
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
