#include <stdio.h>

/**
 * main - dereference a pointer with the char and int example 
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a;
	int *b;
	char c;
	char *d;

	a = 84;
	b = &a;
	c = 'Y';
	d = &c;
	printf("Value of 'a': %d\n", a);
	printf("Address of 'a': %p\n", &a);
	printf("Value of 'b': %p\n", b);
	printf("Value of 'c': %c\n", c);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'd': %p\n", d);
	*b = 3;
	printf("Value of 'a': %d\n", a);
	*d = 'u';
	printf("Value of '*d': %d\n", *d);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("Value of '*d': %d ('%c')\n", *d, *d);
	return (0);
}
