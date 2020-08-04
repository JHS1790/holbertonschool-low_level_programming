#include "holberton.h"
/**
 * main - copies files
 * @ac: number of arguements
 * @av: av[1] should be file_from and av[2] should be file_to
 * Return: to Lumby
 */
int main(int ac, char **av)
{
	int fd1, fd2, check;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		return (99);
	}
	while ((check = read(fd1, buffer, 1024)) > 0)
		write(fd2, buffer, check) == -1;
	check = close(fd1);
	if (check < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd1);
		return (100);
	}
	check = close(fd2);
	if (check < 0)
	{
		dprintf(2, "Error: Can't close fd %i\n", fd2);
		return (100);
	}
	return (0);
}
