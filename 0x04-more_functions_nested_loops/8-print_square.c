#include "holberton.h"
/**
 * print_square - It's actually a rectagle but whatever
 * @size: size of the square
 */
void print_square(int size)
{
	int r, c;

	for (r = 1 ; r <= size ; r++)
	{
		for (c = 1 ; c <= size ; c++)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
