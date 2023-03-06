#include <stdio.h>

/**
 * main - this program count the number of character
 * Return: 0 if successful
 */

int main(void)
{
	long a;
	
	a = 0;
	while (getchar() != EOF)
		++a;
	printf("%ld\n", a);
	return (0);
}


