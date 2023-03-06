#include <stdio.h>

/**
 * modif_my_param - ste the integer to 1
 * @b: a pointer the interger we want to set to 1
 *
 * Return: 0 if successful
 */

void modif_my_param(int *b)
{
	printf("Value of 'b': %p\n", b);
	printf("Address of 'b': %p\n", b);
	*b = 1;
}

/**
 * main - how to change the value of a variable from the outside
 * it is declared using a pointer
 *
 * Return: 0 if successful.
 */

int main(void)
{
	int n = 9;
	int *p = &n;

	printf("Value of 'n' before the call: %d\n", n);
	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_param(p);
	printf("Value of 'n' after the call: %d\n", n);
	return (0);
}
