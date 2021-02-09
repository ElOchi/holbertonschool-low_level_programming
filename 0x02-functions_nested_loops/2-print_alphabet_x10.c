#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int alph_10;
	char bet;

	for (alph_10 = 0; alph_10 <= 10; alph_10++)
	{
		for (bet = 'a'; bet <= 'z'; bet++)
		{
			_putchar(bet);
		}
			_putchar('\n');
	}
}

