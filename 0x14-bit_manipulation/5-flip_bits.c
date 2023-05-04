#include "main.h"

/**
 * flip_bits - func that give a number of bit you would nees to swap to another
 * @n: function parameter that indicate the first number to be swapped
 * @m: function parameter that indicate the second number to be swapped
 * Return: 0 if run successfully
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int b = 0;

	while (a != 0)
	{
		b += a & 1;
		a >>= 1;
	}
	return (b);
}
