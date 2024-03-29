#include "main.h"

#define BUF_SIZE 1024

/**
 * close_file - copying the content of a file to another file
 * @fd: file descriptor
 *
 *
 *
 */

void close_file(int fd)

{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copying the content of a file to another file
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: if it success return 0
 *
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t nread, nwrite;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close_file(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((nread = read(file_from, buf, BUF_SIZE)) > 0)
	{
		nwrite = write(file_to, buf, nread);
		if (nwrite == -1)
		{
			close_file(file_from);
			close_file(file_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (nread == -1)
	{
		close_file(file_from);
		close_file(file_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_file(file_from);
		close_file(file_to);
	return (0);
}

