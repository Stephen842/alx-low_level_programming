#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);

/**
 * op_add - returns the sum of two number
 * @a: function parameter
 * @b: function parameter
 * Return: 0 if successful
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the diff of two number
 * @a: function parameter
 * @b: function parameter
 * Return: 0 if successful
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two number
 * @a: function parameter
 * @b: function parameter
 * Return: 0 if successful
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two number
 * @a: function parameter
 * @b: function parameter
 * Return: 0 if successful
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two number
 * @a: function parameter
 * @b: function parameter
 * Return: 0 if successful
 */

int op_mod(int a, int b)
{
	return (a % b);
}
