#include <stdio.h>

/**
 * main - accessing the different elements of an array
 *
 * Return: if successful
 */

int main(void)
{
	int a[6];

	a[0] = 5;
	a[1] = 6;
	a[2] = 7;
	a[3] = 8;
	a[4] = 9;
	a[5] = 0;
	printf("Value of 'a[0]': %d\n", a[0]);
	printf("Value of 'a[1]': %d\n", a[1]);
	printf("Value of 'a[2]': %d\n", a[2]);
	printf("Value of 'a[3]': %d\n", a[3]);
	printf("Value of 'a[4]': %d\n", a[4]);
	printf("Value of 'a[5]': %d\n", a[5]);
	printf("Address of 'a[0]': %p\n", &a[0]);
	printf("Address of 'a[1]': %p\n", &a[1]);
	printf("Address of 'a[2]': %p\n", &a[2]);
	printf("Address of 'a[3]': %p\n", &a[3]);
	printf("Address of 'a[4]': %p\n", &a[4]);
	printf("Address of 'a[5]': %p\n", &a[5]);
	return (0);
}
