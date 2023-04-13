#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and print to standard output
 * @filename: name of file to be read
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could print and read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t i;
	ssize_t j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(fd, buf, letters);
	i = write(STDOUT_FILENO, buf, j);


	free(buf);
	close(fd);
	return (i);
}
