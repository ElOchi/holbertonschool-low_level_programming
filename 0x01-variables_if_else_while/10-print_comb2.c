#include<stdio.h>
/**
 * main - Prints the numbers from 0 to 99 separated by commas, followed by space
 *
 *
 *
 * Return: Always 0.
 */


int main(void)
{
	int nums = '0';
	int secondNum = '0';

	while (nums <= '9')
	{
		secondNum = '0';
		while (secondNum <= '9')
		{
			putchar(nums);
			putchar(secondNum);
			if (!((nums == '9') && (secondNum == '9')))
			{
				putchar(',');
				putchar(' ');
			}
			secondNum++;
		}
			nums++;
	}

	putchar('\n');
	return (0);
}
