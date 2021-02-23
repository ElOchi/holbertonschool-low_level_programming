#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index = 0, j = 0;

	while (haystack[index])
	{
		while (needle[j] && (haystack[index] == needle[0]))
		{
			if (haystack[index + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			index++;
			j = 0;
		}
		else
			return (haystack + index);
	}
	return (0);
}
