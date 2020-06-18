#include "holberton.h"
/**
 * print_line - please sign
 * @n: the length of the line
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
