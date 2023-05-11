#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: function parameter of the file to be saved.
 * @text_content: funnction parameter of the file to write to.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0;
	int b;
	int c;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (a = 0; text_content[a];)
			a++;
	}

	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (b == -1)
		return (-1);
	c = write(b, text_content, a);
	close(b);
	if (c == -1)
		return (-1);
	return (1);
}
