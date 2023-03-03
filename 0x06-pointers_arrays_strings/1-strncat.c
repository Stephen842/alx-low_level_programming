#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: function parameter 1
 * @src: function parameter 2
 * @n: function parameter 3
 * Return: concatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
