#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 as usual
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; i++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				for (l = 3 ; l < 10 ; l++)
				{
					if (i < j && j < k && k < l)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
						putchar(l + '0');
						if (i + j + k + l != 36)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
