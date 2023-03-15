#include <stdio.h>

/**
 * main - a program that print its name.
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
