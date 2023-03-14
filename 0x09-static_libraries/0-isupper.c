#include "main.h"

/**
 * _isupper - convert letters to uppercase
 * @c: function paramter
 * Return: 0 if successful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
