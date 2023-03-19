#include <stdio.h>

/**
 * main - task on stringize operator
 * @a: function parameter
 * @b: function parameter
 * Return: 0 if successful
 */

#define message_for(a, b) \
	printf(#a " and " #b ": we are gonna make it\n")
int main(void)
{
	message_for(Stephen, Francis);
	return (0);
}
