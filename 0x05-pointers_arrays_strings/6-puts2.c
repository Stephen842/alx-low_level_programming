#include "main.h"

/**
 * puts2 - prints every other character of a string, incrementing by 2
 * @str: function parameter
 * Return: 0 as usual
 */

void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *c = str;
	int s;

	while (*c != '\0')
	{
		c++;
		longi++;
	}
	a = longi - 1;
	for (s - 0 ; s <= a ; s++)
	{
		if (s % 2 == 0)
		{
			_putchar(str[s]);
		}
	}
	_putchar('\n');
}
