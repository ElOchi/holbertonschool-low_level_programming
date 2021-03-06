#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated place in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *s;

/*If Null is passed, treat it as an empty sting.*/
	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (k = 0; k < j; k++)
		s[k + i] = s2[k];
	s[i + j] = '\0';
	return (s);
}


#include "holberton.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: String
 * @s2: String
 * @n: Unsigned int number max for string s2
 * Return: Pointer to newly space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sizes1, sizes2, sum = 0;
	char *string = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (sizes1 = 0; s1[sizes1] != '\0'; sizes1++)
		;
	for (sizes2 = 0; s2[sizes2] != '\0'; sizes2++)
		;
	sum = sizes1 + sizes2 + 1;

	if (n >= sizes2)
	{
		string = malloc(sizeof(char) * sum);
	}
	else
	{
		string = malloc(sizeof(char) * (sizes1 + n) + 1);
	}

	if (string == '\0')
	{
		return ('\0');
	}
	for (sizes1 = 0; s1[sizes1]; sizes1++)
	{
		string[sizes1] = s1[sizes1];
	}
	for (sizes2 = 0; sizes2 < n && s2[sizes2] != '\0'; sizes2++)
	{
		string[sizes1] = s2[sizes2];
		sizes1++;
	}
	string[sizes1] = '\0';
	return (string);
}
