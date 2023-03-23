#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - a function that print a name
 * @name: function parameter
 * @f: function parameter
 * Return: 0 if successful
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
