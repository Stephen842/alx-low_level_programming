#include "main.h"

/**
 * _strstr - a function that locates a substri
 * @haystack: function parameter
 * @needle: function parameter 2
 * Return: 0 if successful
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
