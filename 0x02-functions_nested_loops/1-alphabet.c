#include "holberton.h"

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
