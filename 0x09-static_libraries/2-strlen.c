#include "holberton.h"

/**
* _strlen - returns the length of string
*
*@s: poiter
*
* * Return: length of s.
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s++))
	len++;

	return (len);
}
