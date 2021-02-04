#include <stdio.h>
#include <stdlib.h>


/**
* main - Prints the alphabet in lowercases
*
* Return: Always 0.
*/


int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
