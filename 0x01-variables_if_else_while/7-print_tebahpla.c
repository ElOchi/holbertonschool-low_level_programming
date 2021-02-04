#include<stdio.h>
/**
* main - Printsthe lowercase alphabet in reverse, followed by a new line.
*
*  Return: Always 0.
*/

int main(void)
{
	char alph = 'z';

	while (alph > 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar ('\n');
	return (0);
}
