#include "holberton.h"
/**
 * read_textfile - read the letter, ginger
 * @filename: filename
 * @letters: number of characters
 * Return: the number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readcheck;
	unsigned int charcount = 0, lettercheckabs, lettercheckbuf;
	char buffer[1024];

	if (filename == NULL)
		return (0);
	if (letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	lettercheckabs = letters;
	while (lettercheckabs > 0)
	{
		if (lettercheckabs > 1024)
			lettercheckbuf = 1024;
		else
			lettercheckbuf = lettercheckabs;
		readcheck = read(fd, buffer, lettercheckbuf);
		charcount += write(1, buffer, readcheck);
		lettercheckabs -= lettercheckbuf;
	}
	close(fd);
	return (charcount);
}
