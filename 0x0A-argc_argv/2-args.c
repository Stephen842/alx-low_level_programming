#include <stdio.h>

/**
 * main - a program that prints all arguments its recieves.
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{

	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
