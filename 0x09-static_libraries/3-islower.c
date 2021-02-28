#include "holberton.h"

/**
 *_islower - fucntion to check lowercase.
 *
 *Return: return 1 lowercase. 0 otherwise.
 *
 *@c: int c
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
