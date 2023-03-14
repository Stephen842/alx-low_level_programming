#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: function parameter 1
 * @src: function paramtere 2
 * Return: 0 if successful
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int e;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	e = 0;
	while (src[e] != '\0')
	{
		dest[d] = src[e];
		d++;
		e++;
	}
	dest[d] = '\0';
	return (dest);
}
