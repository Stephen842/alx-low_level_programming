#include <stdio.h>

/**
 * main - a self learning on predefine macros on preprocessor
 *
 * Return: 0 if successful
 */

int main(void)
{
	printf("File: %s\n", __FILE__);
	printf("Date: %s\n", __DATE__);
	printf("Time: %s\n", __TIME__);
	printf("Line: %d\n", __LINE__);
	printf("ANSI: %d\n", __STDC__);
	return (0);
}
