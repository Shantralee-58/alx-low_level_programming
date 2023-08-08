#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
	ssize_t n;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
	exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
	dprintf(2, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	exit(99);
	}

	while ((n = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
	if (write(fd_to, buffer, n) != n)
	{
	dprintf(2, "Error: Can't write to %s\n", argv[2]);
	close(fd_from);
	close(fd_to);
	exit(99);
	}
	}

	if (n == -1)
	{
	dprintf(2, "Error: Can't read from file %s\n", argv[1]);
	close(fd_from);
	close(fd_to);
	exit(98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
	dprintf(2, "Error: Can't close fd\n");
	exit(100);
	}

	return (0);
}
