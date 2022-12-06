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

	char buf[1024];
	
	filename = open(*filename, O_CREAT | O_RDONLY);

	if (filename == -1)
	{
		printf("Failed to open and read the file.\n");
		exit(1);
	}

	read(filename, buf, letters);
	buf[1024] = '\0';

	close(fd);

	return (letters);
}

