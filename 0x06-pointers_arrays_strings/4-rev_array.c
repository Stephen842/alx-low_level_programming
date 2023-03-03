#include "main.h"

/**
 * reverse_array - a function that reverse a content of an array of intergers
 * @a: function parameter 1, array
 * @n: function parameter 2, number of elements of array
 * Return: 0 if successful
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
