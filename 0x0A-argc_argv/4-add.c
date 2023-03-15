#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers.
 * @argc: function parameter
 * @argv: function parameter
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			if (!atoi(argv[j]))
			{
				printf("error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[j]);
		}
		printf("%d\n", sum);
	}
	return (0);


}
