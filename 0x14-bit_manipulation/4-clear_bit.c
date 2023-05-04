#include "main.h"

/**
 * clear_bit - function that set the value of a bit to 0 in an index
 * @n: function parameter of pointer of the number to set
 * @index: function parameter of the number of bit to clear
 * Return: 1 if successful and -1 if otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c = ~(1UL << index);

	if (index > 63)
		return (-1);
	*n &= c;
	return (1);
}
