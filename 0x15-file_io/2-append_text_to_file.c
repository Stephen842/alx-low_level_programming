#include "main.h"

/**
 * append_text_to_file - this program append text to the end of a file
 * @filename: function parameter which is the name of the file
 * @text_content: function parameter which is the null terminated at the EOF
 * Return: 1 on success and -1 if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b = 0;
	int c;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (b = 0; text_content[b];)
			b++;
	}
	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);
	c = write(a, text_content, b);
	if (c == -1)
		return (-1);

	close(a);
	return (1);
}
