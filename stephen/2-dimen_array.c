#include <stdio.h>

/**
 * main - function that talks about multidimensional arrays
 *
 * Return: 0 if successful
 */

int main(void)
{
	int c[4] [2] = { {0,1}, {1,2}, {3,4}, {4,5} };
	int a, b;

	for (a = 0 ; a < 4 ; a++)
	{
		for (b = 0 ; b < 2 ; b++);
		printf("c[%d][%d] = %d\n", a,b, c[a][b]);
	}
	return (0);
	
}
