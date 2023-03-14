#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: function parameter 1
 * @src: function parameter 2
 * @n: function parameter 3
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;


	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}


	return (dest);
}
