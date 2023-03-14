#include "main.h"

/**
 * _memset - insert a block of memory with a specific value
 * @s: function parameter 1
 * @b: function parameter 2
 * @n: funnction paramter 3
 * Return: 0 as always
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
