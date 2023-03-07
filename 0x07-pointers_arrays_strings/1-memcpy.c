#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: function parameter
 * @src: function parameter 2
 * @n: function parameter 3
 * Return: 0 if successful
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b ; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
