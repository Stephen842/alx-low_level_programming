#include <stdio.h>

/**
 * main - stores the address of a variable into a pointer
 *
 * Return: 0 if successful
 */

int main(void)
{
	int n;
	int *p;

	n = 67;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return (0);
}
