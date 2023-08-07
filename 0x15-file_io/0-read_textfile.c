#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes_read, num_bytes_written;
	char *buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	free(buffer);
	return (0);
	}

	num_bytes_read = read(fd, buffer, letters);
	if (num_bytes_read == -1)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (num_bytes_written != num_bytes_read)
	{
	free(buffer);
	close(fd);
	return (0);
	}

	free(buffer);
	close(fd);
	return (num_bytes_written);
}
