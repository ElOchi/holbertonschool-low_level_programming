#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}
	return (dest);
}
