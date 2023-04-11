#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number,
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	if (!b)
		return (a);
	while (*b)
	{
		a <<= 1;
		if (*b == '1')
			a += 1;
		else if (*b != '0')
			return (0);
		++b;
	}
	return (a);
}
