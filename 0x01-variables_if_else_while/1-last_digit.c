#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints a random number and print the last digit
* and states whether it is positive, negative, or zero.
*
* Return: Always 0.
*/

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
	printf("The last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit < 6)
	printf("The last digit of %d is %d and is less than 6\n", n, lastDigit);
	else
	printf("The last digit of %d is %d and is 0\n", n, lastDigit);

	return (0);
}
