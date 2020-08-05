#include "holberton.h"
/**
 * read_textfile - read the letter, ginger
 * @filename: filename
 * @letters: number of characters
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, check;
	unsigned int charcount = 0;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((check = read(fd, buffer, 1024)) > 0)
	       charcount += write(1, buffer, check);
	close(fd);
	return (charcount);
}
