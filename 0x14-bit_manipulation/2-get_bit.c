#include "main.h"

/**
 * get_bit - func that returns the val of a bit given at an index
 * @n: function parameter indicating the number to search
 * @index: function parameter indicating the index of the number
 * Return: the value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1UL << index;

	if (index > 63)
		return (-1);
	return ((n & a) != 0);
}
