#include "main.h"
#include <stdio.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: function parameter
 * Return: 0 if successful
 */

void print_binary(unsigned long int n)
{
	int a;
	int b;

	for (a = sizeof(unsigned long int) * 8 - 1; a >= 0; a--)
	{
		if (n >> a & 1)
		{
			_putchar('1');
			for (b = a - 1; b >= 0; b--)
			{
				_putchar((n >> b) & 1 ? '1' : '0');
			}
			return;
		}
	}
	_putchar('0');
}
