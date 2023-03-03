#include  "main.h"

/**
 * _strcmp - comparing two string
 * @s1: function parameter 1
 * @s2: function paramter 2
 * Return: 0 if successful
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
