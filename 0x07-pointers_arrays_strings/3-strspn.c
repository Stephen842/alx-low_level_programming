#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: function parameter
 * @accept: function parameter 2
 * Return: 0 if successful
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0 ; accept[a] ; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
