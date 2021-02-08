#include "holberton.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
 */


void print_alphabet(void)
{
char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
}
