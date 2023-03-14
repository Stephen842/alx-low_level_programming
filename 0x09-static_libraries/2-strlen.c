#include "main.h"
/**
 * _strlen - print the length of a string
 * @s: function parameter
 * Return: 0 if successful
 */
int _strlen(char *s)
{
	int longi = 0;


	while (*s != '\0')
	{
		longi++;
		s++;
	}


	return (longi);
}
