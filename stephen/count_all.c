#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/**
 * main - this program counts lines, words and character in an input.
 * Return: 0 as usual.
 */

int main(void)
{
	int a, b, c, d, state;

	state = OUT;
	b = c = d = 0;
	while ((a = getchar()) != EOF)
	{
		++d;
	if (a == '\n')
		++b;
	if (a == ' ' || a == '\n' || a == '\t')
		state = OUT;
	else if (state == OUT)
	{
		state = IN;
		++c;
	}
	}
	printf("%d %d %d\n", b, c, d);
	return (0);
}
