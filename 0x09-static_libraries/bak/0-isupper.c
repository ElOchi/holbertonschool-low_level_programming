#include "holberton.h"

/**
 *_isupper - check for uppercase
 *
 * @c: int c
 *
 * Return: return 1 lowercase. 0 otherwise
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
