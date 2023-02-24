#include "main.h"

/**
 * positive_or_negative - check for positive or negative number
 *@i: function parameter, the number to be check
 * Return: 0 as usual
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
