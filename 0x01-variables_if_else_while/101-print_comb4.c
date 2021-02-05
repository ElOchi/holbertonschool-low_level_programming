#include<stdio.h>
/**
* main - Prints  all possible different combinations of three digits
*
* Return: Always 0.
*/


int main(void)
{

	int firstNum;
	int secondNum;
	int thirdNum;

	for (firstNum = '0'; firstNum <= '9'; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum <= '9'; secondNum++)
		{
			for (thirdNum = secondNum + 1; thirdNum <= '9'; thirdNum++)
			{
				putchar(firstNum);
				putchar(secondNum);
				putchar(thirdNum);
					if (firstNum < '7' || secondNum < '8' || thirdNum < '9')
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}

