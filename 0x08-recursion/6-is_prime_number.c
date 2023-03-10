#include "main.h"

int actual_prime(int n, int b);

/**
 * is_prime_number - a function that checks for an integer or not
 * @n: function parameter
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - checks if a number is prime recursively
 * @n: number to check
 * @b: iterator
 *by
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0 && b > 0)
		return (0);
	return (actual_prime(n, b - 1));
}

