#include "main.h"

/**
 * append_text_to_file - appends text at
 * end of file
 * @filename: name of the file
 * @text_content: null terminated string
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
