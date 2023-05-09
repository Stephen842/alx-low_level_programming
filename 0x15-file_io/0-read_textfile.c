#include "main.h"

/**
 * read_textfile - function that read a file and print it to the posix standard
 * output
 * @letters: function parameter of the number of letters that should be print
 * and read.
 * @filename: function parameter that gives the file name to be opened.
 * Return: if file is empty return 0 and also if file is empty.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *a;
	ssize_t b;

	a = fopen(filename, "r");
	if (!a)
	{
		return (0);
	}
	buffer = malloc(letters + 1);
	if (!buffer)
	{
		fclose(a);
		return (0);
	}
	b = fread(buffer, sizeof(char), letters, a);
	buffer[b] = '\0';
	printf("%s", buffer);

	free(buffer);
	fclose(a);
	return (b);
}
