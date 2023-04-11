#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: function parameter
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_value = 1;

	if (index > 63)
		return (-1);
	bit_value <<= index;
	if ((*n & bit_value) == 0)
		*n += bit_value;
	return (1);
}
