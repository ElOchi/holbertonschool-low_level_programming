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
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
}
