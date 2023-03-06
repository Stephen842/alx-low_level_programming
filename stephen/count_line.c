#include <stdio.h>

/**
 * main - this function count the number of lines
 * Return: 0 if successful
 */

int main(void)
{
	int a, b;


	b = 0;
	while ((a = getchar()) != EOF)
	{
		if (a == '\n')
			++b;
		printf("%d\n", b);
	}
	return (0);
}
