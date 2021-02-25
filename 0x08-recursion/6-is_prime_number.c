#include "holberton.h"

/**
 * is_prime_numbers - helper for is_prime_number
 * @n: the number to check
 * @m: the current divisor
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_numbers(int n, int m)
{
	if (n % m == 0)
		return (0);
	if (n < m * 2)
		return (1);

	return (is_prime_numbers(n, m + 1));
}

/**
 * is_prime_number - determine if a number is prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n < 4)
		return (n > 1);

	return (is_prime_numbers(n, 2));
}
