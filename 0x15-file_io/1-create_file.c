#include "main.h"
#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

/**
 * create_file - function that create a file
 * @filename: is the name of the file to be created
 * @text_content: is a null terminating string
 * Return: 1 on succes, -1 0n failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, a, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fd, text_content, length);

	if (fd == -1 || a == -1)
		return (-1);

	close(fd);

	return (1);

}
