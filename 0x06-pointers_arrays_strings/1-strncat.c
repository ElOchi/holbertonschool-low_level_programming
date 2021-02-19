#include "holberton.h"
/**
 * _strncat - concats strings
 *
 * @n: number of chars to concat
 *
 * @dest: destination string
 *
 * @src: source string
 * Return: returns destg
 */


char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j != n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
