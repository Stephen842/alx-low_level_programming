#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: function parameter
 * @...: function parameter in variadic form
 * Return: 0 if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
