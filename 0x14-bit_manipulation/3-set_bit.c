#include "main.h"

/**
 * set_bit - func that set the value of a bit to 1 in an index
 * @n: function parameter indicating a pointer of the number to change
 * @index: function parameter of the given index to set to 1
 * Return: 1 if run successfuly or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b = 1UL << index;

	if (index > 63)
		return (-1);
	*n |= b;
	return (1);
}
