#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	FILE *source, *destination;
	int ch;

	/* Check if the correct number of arguments have been passed*/
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <source> <destination>\n", argv[0]);
		exit(1);
	}

	/* Open the source and destination files*/
	source = fopen(argv[1], "rb");
	destination = fopen(argv[2], "wb");

	/* Check if the files were successfully opened*/
	if (source == NULL || destination == NULL)
	{
		fprintf(stderr, "Error: Unable to open file.\n");
		exit(1);
	}

	/* Copy the contents of the source file to the destination file*/
	while ((ch = fgetc(source)) != EOF)
	{
		if (fputc(ch, destination) == EOF)
		{
			fprintf(stderr, "Error: Failed to write to destination file.\n");
			exit(1);
		}
	}

	/* Close the files*/
	fclose(source);
	fclose(destination);

	/* Set the permissions of the destination file to rw-rw-r-- */
	chmod(argv[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	printf("File copied successfully.\n");
	return (0);
}
