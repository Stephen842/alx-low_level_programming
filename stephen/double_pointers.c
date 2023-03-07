#include <stdio.h>

/**
 * main - pointer_pointer pointing to a variable with an integer value
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a = 12;
	int *b;
	int **bb;

	b = &a;
	bb = &b;
	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", *b);
	printf("Value of bb: %d\n", **bb);
	// to find there address
	printf("Address of a: %p\n", &a);
	printf("Adress of *b: %p\n", b);
	printf("Address of **bb: %p\n", bb);
	// to find the value of pointers
	printf("Value of pointer b: %p\n", b);
	printf("Value of pointer bb: %p\n", bb);
	//to find address of pointers
	printf("Address of pointer *b: %p\n", b);
	printf("Address of pointer **bb: %p\n", bb);
	//double pointer value and address
	printf("Value of pointer b: %p\n", b);
	printf("Address of pointer b: %p\n", &b);
	return (0);
}
