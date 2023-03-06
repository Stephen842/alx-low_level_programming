#include <stdio.h>

/**
 * main- function is an array and not a pointer but it stores an address 
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a[98];

	printf("a : %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	return (0);
}
