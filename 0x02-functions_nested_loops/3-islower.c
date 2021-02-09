#include "holberton.h"

/**
* _islower - Checks for lowercase character..
*
* @c: interger c
*
* Return: Always 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
