#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * exit_error - Prints an error message and exits with a given code.
 * @message: The error message format.
 * @arg: The argument for the error message.
 * @code: The exit code.
 */
void exit_error(const char *message, const char *arg, int code)
{
	dprintf(2, message, arg);
	exit(code);
}

/**
 * open_files - Opens source and destination files.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 *
 * Return: The file descriptor of the destination file.
 */
int open_files(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	exit_error("Error: Can't read from file %s\n", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	close(fd_from);
	exit_error("Error: Can't write to %s\n", file_to, 99);
	}

	return (fd_to);
}

/**
 * copy_data - Copies data from source file to destination file.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 */
void copy_data(int fd_from, int fd_to)
{
	ssize_t n;
	char buffer[1024];

	while ((n = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
	if (write(fd_to, buffer, n) != n)
	{
	close(fd_from);
	close(fd_to);
	exit_error("Error: Can't write to %s\n", "", 99);
	}
}

if (n == -1)
{
	close(fd_from);
	close(fd_to);
	exit_error("Error: Can't read from file %s\n", "", 98);
}
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, or exit with a specific error code.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	exit_error("Usage: %s file_from file_to\n", argv[0], 97);

	fd_to = open_files(argv[1], argv[2]);
	fd_from = open(argv[1], O_RDONLY);

	copy_data(fd_from, fd_to);

	close(fd_from);
	close(fd_to);

	return (0);
}

