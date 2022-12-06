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
	
	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if ( o == -1 || r == -1 || w == -1 || w != r )
	{
		free(buf);
		return (0);
	}
	free (buf);
	close(o);

	return (w);
}

