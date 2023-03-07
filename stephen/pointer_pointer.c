 #include <stdio.h>

/**
 * main - pointer to a pointer pointing to a variable
 *
 * Return: 0 if successful
 */

int main(void)
{
	int a = 456;
	int *b;
	int **bb;

	b = &a;
	bb = &b;
	printf("Value if a: %d\n", a);
	printf("Value of *b: %d\n", *b);
	printf("Value of **bb: %d\n", **bb);
	return (0);
}
