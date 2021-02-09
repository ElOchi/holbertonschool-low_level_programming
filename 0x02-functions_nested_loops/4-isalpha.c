#include "holberton.h"

/**
 *_isalpha - check for alphabetic char
 *
 * @c: int c
 *
 * Return: return 1 lowercase. 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

