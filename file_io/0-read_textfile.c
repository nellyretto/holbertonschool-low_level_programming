#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reading a text file and printing to the POSIX stoud
 * @filename: name of the created file
 * @letters: number of letter to read and print
 * Return: returns the numbers of letters it can print and read
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
    int fd;
    ssize_t nread, nwritten;
    char *buffer;

    if (filename == NULL) {
        return 0;
    }

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }

    buffer = malloc(letters * sizeof(char));
    if (buffer == NULL) {
        close(fd);
        return 0;
    }

    nread = read(fd, buffer, letters);
    if (nread == -1) {
        free(buffer);
        close(fd);
        return 0;
    }

    nwritten = write(STDOUT_FILENO, buffer, nread);
    if (nwritten == -1 || nwritten < nread) {
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);

    return nwritten;
}
