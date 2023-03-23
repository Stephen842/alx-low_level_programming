#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an interger
 * @array: function parameter
 * @size: function parameter
 * @cmp: function parameter
 * Return: 0 if successful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
