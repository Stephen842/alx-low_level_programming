#include "main.h"

/**
 * _islower - it checks for lower case character
 *
 *@c: parameter to be printed
 * Return: 1 if lowercase
 * and 0 if not
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
