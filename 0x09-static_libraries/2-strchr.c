#include "holberton.h"

/**
 * _strchr - looks for a needle in a haystack
 * @s: The String Haystack to look through
 * @c: the char needle to look for
 *
 * Return: Pointer to said needle
 */
char *_strchr(char *s, char c)
{
	int size = 0;
	int idx;

	/* find the size of the string */
	while (s[size] != '\0')
	{
		size++;
	}

	for (idx = 0; idx < size; idx++)
	{
		if (s[idx] == c)
		{
			return (&s[idx]);
		}
	}

	return ('\0');
}
