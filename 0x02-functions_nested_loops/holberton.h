#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints alphabet in lower case and a newline
 *
 * Return: Ends program
 */

void print_alphabet(void)
{

	char a, n = 10;

	for (a = 97; a <= 122; a++)
	{

		_putchar(a);

	}

	_putchar(n);

}

/**
 * print_alphabet_x10 - prints alphabet in lower case and a newline tenm times
 *
 * Return: Ends program
 */

void print_alphabet_x10(void)
{

	char a, n = 10, x = 1;

	while (x <= 10)
	{
		for (a = 97; a <= 122; a++)
		{

			_putchar(a);

		}

		_putchar(n);
		x++;
	}

}

#endif /* HOLBERTON_H*/
