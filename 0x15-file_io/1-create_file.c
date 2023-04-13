#include "main.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * create_file - function that create a file
 * @filename: is the name of the file to be created
 * @text_content: is a null terminating string
 * Return: 1 on succes, -1 0n failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fd;

	if (!filename)
		return (-1);

	fd = fopen(filename, "a");
	if (!fd)
		return (-1);

	if (text_content)
		fputs(text_content, fd);
	fclose(fd);

	if (chmod(filename, S_IRUSR | S_IWUSR) == -1 && access(filename, F_OK) != -1)
	return (-1);

	return (1);
}
