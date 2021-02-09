#include<stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */


int main(void)
{
	long int f1 = 1;
	long int f2 = 2;
	long int fnext;
	long int sum = 2;

	fnext = f1 + f2;

	while (fnext < 4000000)
	{
		if (fnext % 2 == 0)
		{
			sum += fnext;
		}
		f1 = f2;
		f2 = fnext;
		fnext = f1 + f2;
	}

	printf("%li", sum);
	printf("\n");
	return (0);
}

