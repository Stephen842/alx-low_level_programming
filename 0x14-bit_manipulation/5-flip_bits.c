#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: function parameter
 * @m: function parameter
 * Return: 0 if successful
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differ = n ^ m;
	unsigned int a = 0;

	while (differ != 0)
	{
		a += differ & 1;
		differ >>= 1;
	}
	return (a);
}
