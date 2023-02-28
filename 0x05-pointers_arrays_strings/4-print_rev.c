#include "main.h"

/**
 * print_rev - function that prints string, in reverse, followed by a new line.
 * @s: function parameter, print script
 * Return: 0 if successful
 */

void print_rev(char *s)
{
	int add;
	int minus;

	while (*s != '\0')
	{
		add++;
		s++;
	}
	s--;
	for (minus = add ; minus > 0 ; minus--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
