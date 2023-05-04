#include "main.h"

/**
 * binary_to_uint - func that convert a number in a binary form to an unsig int
 * @b: where b is pointitng to a string of 0 and 1
 * Return: the number that have been converted to an interger
 */

unsigned int binary_to_uint(const char *b)
{
	int l = 0;
	unsigned int a = 0;

	if (b == NULL)
		return (0);

	while (b[l] != '\0')
	{
		if (b[l] == '0' || b[l] == '1')
		{
			a = (a << 1) | (b[l] - '0');
			l++;
		}
		else
		{
			return (0);
		}
	}
	return (a);
}
