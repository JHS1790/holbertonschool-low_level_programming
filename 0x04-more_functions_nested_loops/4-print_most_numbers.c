#include "holberton.h"
/**
 * print_most_numbers - a blantantly subpar product that doesn't print 2 or 4
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (!(i == 2 || i == 4))
			_putchar('0' + i++);
		else
			i++;
	}
	_putchar('\n');
}
