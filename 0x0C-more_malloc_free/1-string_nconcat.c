#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - a function that concatenate two string
 * @s1: function parameter
 * @s2: function parameter
 * @n: function parameter
 * Return: 0 if successful
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len2 + n + 1));
	if (!s)
		return (NULL);
	while (a < len1)
	{
		s[a] = s1[a];
		a++;
	}
	while (n < len2 && a < (len1 + n))
		s[a++] = s2[b++];
	while (n >= len2 && a < (len1 + len2))
		s[a++] = s2[b++];
	s[a] = '\0';
	return (s);
}
