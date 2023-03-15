#include <stdio.h>

/**
 * main - a program that print the number of arguments passed into it
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
