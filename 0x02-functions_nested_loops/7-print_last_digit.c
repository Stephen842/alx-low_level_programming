#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @j: functikn parameter
 * Return: 1
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (j < 0)
		i = -i;
	return (i);
}
