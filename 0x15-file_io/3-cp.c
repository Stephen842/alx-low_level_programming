#include "main.h"

/**
 * create_buffer - this function allocate about 1024 bytes to a buffer
 * @file: function parameter indicating the file name
 * Return: 0 if successful, that is a pointer to the newly allocated buffer
 */

char *create_buffer(const char *file)
{
	FILE *a = fopen(file, "r");
	char *buffer;
	long size = ftell(a);

	if (a == NULL)
	{
		fprintf(stderr, "Error: Can't open %s\n", file);
		exit(99);
	}
	fseek(a, 0, SEEK_END);

	rewind(a);

	buffer = malloc((size + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: Cant allocate memory\n");
		exit(99);
	}
	fread(buffer, sizeof(char), size, a);
	buffer[size] = '\0';

	fclose(a);
	return (buffer);
}

/**
 * close_file - this function closes the file descriptors
 * @file: function parameter indicating the file descriptor that is to be close
 * Return: 0 on success
 */

void close_file(FILE *file)
{
	if (fclose(file) != 0)
	{
		fprintf(stderr, "Error: Can't close file\n");
		exit(100);
	}
}

/**
 * main - this function copies a content in a file to another file
 * @argc: function parameter of the number of argument count given to the prog
 * @argv: function parameter indicating an arrar of pointer to the argument
 * Return: 0 on success else otherwise
 */

int main(int argc, char *argv[])
{
	char *buffer;
	FILE *from;
	FILE *to;
	size_t read_byte;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from_file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = fopen(argv[1], "rb");
	if (from == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	to = fopen(argv[2], "wb");
	if (to == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[2]);
		free(buffer);
		fclose(from);
		exit(99);
	}
	while ((read_byte = fread(buffer, sizeof(char), 1024, from)) > 0)
	{
		if (fwrite(buffer, sizeof(char), read_byte, to) != read_byte)
		{
			fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
			free(buffer);
			fclose(from);
			fclose(to);
			exit(99);
		}
	}
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
