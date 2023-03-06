#include <stdio.h>

/**
 * modif_my_char_var - solve me
 *
 * Return: 0 if successful
 */

void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = '1';
}

/**
 * main- solve me
 *
 * Return: 0 if successful
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c': %c\n", c);
	printf("address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'c': %c\n", c);
	printf("Value of 'p': %p\n", p);
	return (0);
}
