#include "main.h"

/**
 * puts2 - prints every other character of a string, incrementing by 2
 * @str: function parameter
 * Return: 0 as usual
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
