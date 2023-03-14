#include "main.h"

/**
 * _strchr - entry point
 * @s: function parameter 1
 * @c: function parameter 2
 * Return: 0 if successful
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0' ; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
