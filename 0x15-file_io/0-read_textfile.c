#include "holberton.h"
/**
 * read_textfile - read the letter, ginger
 * @filename: filename
 * @letters: number of characters
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	unsigned int nullcount;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	nullcount = read(fd, buffer, letters);
	close(fd);
	if (nullcount > letters)
		return (write(1, buffer, letters));
	else
		return (write(1, buffer, nullcount));
}
