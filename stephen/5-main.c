#include <stdio.h>

/**
 * main -  function that changes the value of another variable (deferencing)
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;
	int *b;

	a = 56;
	b = &a;
	printf("Value of 'a': %d\n", a);
	printf("Address of 'a': %p\n", &a);
	printf("Value of 'b: %p\n", b);
	*b = 300;
	printf("Value of 'a': %d\n", a);
}
