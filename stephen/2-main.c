#include <stdio.h>

/**
 * main - printing the size in bytes of a pointer
 *
 * Return: 0 if successful
 */

int main (void)
{
	int *p;

	printf("Size of a pointer: %lu\n", sizeof(p));
	return (0);
}
