#include "main.h"

/**
 * _abs -  check for absolute value
 *
 * @a: function parameter
 * Return: positive digit
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
