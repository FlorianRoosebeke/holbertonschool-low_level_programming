#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t count = 0;
	int fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buffer, letters);

	if (count == -1)
	{
		close(fd);
		return (0);
	}

	count = write(1, buffer, count);
	free(buffer);

	close(fd);
	return (count);
}
