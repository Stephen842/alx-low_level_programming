#include <stdio.h>

/**
 * main - main function goes here
 *
 * Return: 0 as usual
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
