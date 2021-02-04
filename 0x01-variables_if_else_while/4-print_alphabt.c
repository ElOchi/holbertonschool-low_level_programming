#include <stdio.h>
#include <stdlib.h>
/**
* main - Print all the letters of alphabet except q and e
*
* Return: Always 0.
*/


int main(void)
{
	char alph = 'a';

	while (alph < 'z')
	{
		if ((alph != 'e') && (alph != 'q'))
		{
			putchar(alph);
		}
			alph++;
	}
	putchar('\n');
	return (0);
}
