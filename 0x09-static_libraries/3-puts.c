#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @s: pointer to the string to be printed
 */

void _puts(char *s)
{
	printf("%s\n", s);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
