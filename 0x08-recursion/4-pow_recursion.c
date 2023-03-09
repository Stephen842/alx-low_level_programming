#include "main.h"

/**
 * _pow_recursion - function that gives x raised to the power of y
 * @x: function parameter
 * @y: function paramter
 * Return: 0 if successful
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
