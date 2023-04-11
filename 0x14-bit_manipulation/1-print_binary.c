#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: function parameter
 * Return: 0 if successful
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin_ary = (unsigned long int)1 << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	while (bin_ary)
	{
		if (n & bin_ary)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}
		bin_ary >>= 1;
	}
	if (!start)
	{
		_putchar('0');
	}
}
