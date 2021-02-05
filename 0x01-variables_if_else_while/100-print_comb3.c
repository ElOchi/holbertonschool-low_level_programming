#include<stdio.h>
/**
* main - Prints all possible combinations of two two-digit numbers
* Return: Always 0.
*/


int main(void)
{

	int firstNum;
	int secondNum;

	for (firstNum = '0'; firstNum <= '9'; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum <= '9'; secondNum++)
		{
			putchar(firstNum);
			putchar(secondNum);
				if (firstNum != '8' || secondNum != '9')
			{
					putchar(',');
				    putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

