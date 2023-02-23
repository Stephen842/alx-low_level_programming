#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10x
 *
 * Return: 0 as usual
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
