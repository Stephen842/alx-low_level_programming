#include "main.h"

/**
 * rot13 - function that encode a string using rot13
 * @s: pointer that point to string parameter
 *
 * Return: 0 if successful
 */

char *rot13(char *s)
{
	int c;
	int d;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0 ; s[c] != '\0' ; c++)
	{
		for (d = 0 ; d < 52 ; d++)
		{
			if (s[c] == data1[d])
			{
				s[c] = datarot[d];
				break;
			}
		}
	}
	return (s);

}
