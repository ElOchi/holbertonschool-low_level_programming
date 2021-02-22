
#include "holberton.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, j;

	for (index = 0; s[index]; index++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[index] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (index);
}
