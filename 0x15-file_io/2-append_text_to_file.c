#include "holberton.h"
/**
 * append_text_to_file - create a file
 * @filename: filename
 * @text_content: content of new file
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write_check = write(fd, text_content, (_strlen(text_content)));
	close(fd);
	if (write_check < 0)
		return (-1);
	else
		return (1);
}

/**
 * _strlen - gets string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
