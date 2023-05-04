#include "main.h"

/**
 * print_binary - func that print numbers in their binary form
 * @n: function parameter indicating the numbers to be printed
 * Return: numbers in binary form
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}	
	putchar((n & 1) ? '1' : '0');
}
