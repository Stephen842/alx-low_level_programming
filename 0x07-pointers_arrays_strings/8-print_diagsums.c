#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of square matrix of integer
 * @a: function parameter
 * @size: function parameter 2
 * Return: 0 if successful
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int y;

	for (y = 0 ; y < size ; y++)
	{
		sum1 = sum1 + a[y * size + y];
	}
	for (y = size - 1 ; y >= 0 ; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
