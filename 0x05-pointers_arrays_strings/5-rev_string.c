#include "holberton.h"

/**
 *rev_string - reverse strings
 *
 *@s: pointer
 *
 */
void rev_string(char *s)
{
	int len = 0, end = 0;
	char ch;

	while (s[end++])
		len++;

	for (end = len - 1; end >= len / 2; end--)
	{
		ch = s[end];
		s[end] = s[len - end - 1];
		s[len - end - 1] = ch;
	}
}
