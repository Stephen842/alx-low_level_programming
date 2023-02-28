#include "main.h"
#include <stdio.h>

/**
 * _strcpy - to copy a  string
 * @dest: string destination, function parameter
 * @src: string source, function parameter
 * Return: 0 as usual
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
