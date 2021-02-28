#include"holberton.h"
#include<stdlib.h>
/**
 * main - Prints its name.
 * @argc: number of arguments
 * @argv: An array of pointers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
			printf("%d\n", mul);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
