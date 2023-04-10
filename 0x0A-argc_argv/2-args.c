#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int x;
	for (x = 0; x < argc; x++)
	printf("%s\n", argv[x]);
	return (0);
}
