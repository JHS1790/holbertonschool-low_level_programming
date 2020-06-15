#include "holberton.h"

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
