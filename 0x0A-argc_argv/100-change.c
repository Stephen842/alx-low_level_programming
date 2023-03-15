#include <stdio.h>
#include <stdlib.h>

/**
 * main - give the minimum number of a coins to make change for a sum.
 * @argc: function paramter
 * @argv: function parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int cents;
	int coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
