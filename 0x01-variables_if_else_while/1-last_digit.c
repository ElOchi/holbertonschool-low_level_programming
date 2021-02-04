#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Prints a random number and print the last digit and states whether it is positive, negative, or zero.
*
* Return: Always 0.
*/

int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	
	if (lastDigit > 5)
		printf("The lasd digit of %d and is greater than 5", n);


	return(0);
}
