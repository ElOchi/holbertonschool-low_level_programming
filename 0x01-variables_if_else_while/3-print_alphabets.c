#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints alphabet in lowercase and uppercase, followed by a new line
*
* Return: Always 0.
*/


int main(void)
{
	char n;
	char m;

	for (n = 'a'; n <= 'z'; n++)
		{
		putchar(n);
		}
	{
		for (m = 'A'; m <= 'Z'; m++)
		{
		putchar (m);
		}

		putchar('\n');
	}
		return (0);
}


