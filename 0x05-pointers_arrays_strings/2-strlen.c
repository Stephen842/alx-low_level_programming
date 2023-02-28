#include "main.h"
#include <stdio.h>

/**
 * _strlen -  a function that returns the length of a string.
 * @s: function parameter
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int string = 0;

	while (s[string] != '\0')
		string++;
	return (string);
}
