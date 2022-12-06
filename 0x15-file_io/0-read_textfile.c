#include "main.h"

/**
 * read_textfile - returns the numbr of letters it can read and print
 * @filename: file to be read
 * @letters: leeters to read and print
 * Return 0 for NULL for value
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buf;
	buf = malloc(sizeof(char*) * letters);

	if (filename == NULL)
		return (0);
	else
	{

	
		fd = open(filename, O_RDONLY);

		if (fd == -1)
		{
			printf("Failed to open and read the file.\n");
			exit(1);
		}

		read(fd, buf, letters);
	
		close(fd);
	}
	free (buf);
	printf( "%s\n", buf);
	return (letters);
}

