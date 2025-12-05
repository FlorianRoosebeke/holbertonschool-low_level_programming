#include "main.h"

/**
 * append_text_to_file - appends text content to a file
 * @filename: name of the file to append to
 * @text_content: NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int written_bytes = 0, len = 0;
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	else
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	written_bytes = write(fd, text_content, len);
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
