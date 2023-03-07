#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: function parameter
 * @b: function parameter 2
 * @n: function parameter 3
 * Return: 0 if successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (; n > 0 ; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
