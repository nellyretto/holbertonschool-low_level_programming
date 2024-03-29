#include "main.h"

/**
 * append_text_to_file - writing a fucntion that appends
 * text at the end of file
 * @filename: name of the created file
 * @text_content: NULL terminated string
 * Return: 1 success -1 if it fails
 *
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int fd;
	ssize_t nwritten;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		nwritten = write(fd, text_content, strlen(text_content));
		if (nwritten == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

