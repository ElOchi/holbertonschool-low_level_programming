#include"holberton.h"

/**
 * _memset - Sets some elments in memory
 * @s: memory area to set, the Array
 * @b: the value we set to the memory area
 * @n: the number of elements in the array to fill
 *
 * Return: Array with the modified elements
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}

	return (s);
}

