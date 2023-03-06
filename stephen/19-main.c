#include <stdio.h>

/**
 * main - function that print the size and address of an array
 *
 * Return: 0 if successful
 */

int main(void)
{
	char b[98];

	printf("b: %p\n", b);
	printf("&b : %p\n", &b);
	printf("sizeof (b): %lu\n", sizeof(b));
	printf("sizeof(&b): %lu\n", sizeof(&b));
	return (0);
}
