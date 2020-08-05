#include "holberton.h"

void error(int errorno, char *file, int fd);

/**
 * main - copies files
 * @ac: number of arguements
 * @av: av[1] should be file_from and av[2] should be file_to
 * Return: to Lumby
 */
int main(int ac, char **av)
{
	int fd1, fd2, check, writecheck;
	char buffer[1024];

	if (ac != 3)
		error(97, av[0], 0);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
		error(98, av[1], fd1);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
		error(99, av[2], fd2);
	while ((check = read(fd1, buffer, 1024)) > 0)
	{
		if (check < 0)
			error(98, av[1], fd1);
		writecheck = write(fd2, buffer, check);
		if (writecheck < 0)
			error(99, av[2], fd2);
	}
	check = close(fd1);
	if (check < 0)
		error(100, av[1], fd1);
	check = close(fd2);
	if (check < 0)
		error(100, av[2], fd2);
	return (0);
}

/**
 * error - print error
 * @errorno: error number
 * @file: file name
 * @fd: file descriptor
 */
void error(int errorno, char *file, int fd)
{
	switch (errorno)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
