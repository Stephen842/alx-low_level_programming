#include "main.h"

/**
 * get_endianness - function that check how big or small a computer store byte
 * Return: 0 if it is a big endian or 1 if it is small
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	return (*b);
}
