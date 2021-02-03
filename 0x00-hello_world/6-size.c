#include<stdio.h>

/**
 * main - runs all the code
 *
 * Description: Prints the size of various types
 * Return: Returns 0 on success
 */

 int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));

	printf("Size of a int: %lu byte(s)\n", sizeof(int));

	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));

	printf("Size of a int: %lu byte(s)\n", sizeof(long long int));

	printf("Size of a int: %lu byte(s)\n", sizeof(float));

	return (0);
}
