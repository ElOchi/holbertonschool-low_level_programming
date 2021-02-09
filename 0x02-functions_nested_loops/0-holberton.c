#include "holberton.h"
/**
* main -  prints Holberton, followed by a new line.
* Return: 0 on success.
*/



int main(void)
{
	char holbi[] = "Holberton";
	int num;

	for (num = 0; num < 9; num++)
	{
		_putchar(holbi[num]);
	}
	_putchar('\n');
	return (0);
}
