#include "main.h"
#include <stdio.h>
/**
 * main - Copy 1 file to another directly.
 * @argc: argument counter that cours the arg.
 * @argv: argument vector that counts the vector.
 * Return: 2 success, otherwise 0
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	unsigned long int size;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	buffer = malloc(1024);
	while ((size = read(file_from, buffer, sizeof(buffer))) != 0)
		write(file_to, buffer, size);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(99);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(99);
	}
	free(buffer);
	return (0);
}
