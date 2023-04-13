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
	int fd;
	int a;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		a = write(fd, text_content, strlen(text_content));
		if (a == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	a = chmod(filename, S_IRUSR | S_IWUSR);
	if (a == -1)
		return (-1);

	return (1);
}
