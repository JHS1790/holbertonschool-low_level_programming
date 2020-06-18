#include "holberton.h"
/**
 * print_triangle - Raise the siege ramps!
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int s, h, r;

	for (r = 1 ; r <= size ; r++)
	{
		s = size - r;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
		h = r;
		while (h > 0)
		{
			_putchar('#');
			h--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
