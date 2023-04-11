#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: function parameter
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_value = 1UL << index;

	if (index > 63)
		return (-1);
	return ((n & bit_value) != 0);
}
