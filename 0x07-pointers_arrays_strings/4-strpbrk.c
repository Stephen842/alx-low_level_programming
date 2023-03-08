 #include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: function parameter
 * @accept: function parameter 2
 * Return: 0 if successful
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0 ; accept[d] ; d++)
		{
			if (*s == accept[d])
				return (s);
		}
		s++;
	}
	return ('\0');
}
