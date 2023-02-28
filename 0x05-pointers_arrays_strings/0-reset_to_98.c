#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 -  point to int as parameter & changes the value it points to 98
 * @n: function parameter
 * Return: 0 if successful
 */

void reset_to_98(int *n)
{

	*p = &n;
	*p = 98;
	printf("Address of n is : %p\n", &n);
	printf("Address of pointer is : %p\n", p);
}
