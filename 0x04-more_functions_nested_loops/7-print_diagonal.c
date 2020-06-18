#include "holberton.h"
/**
 * print_diagonal - literally throwing dollar signs down a chute
 * @n: the length of the line
 */
void print_diagonal(int n)
{
	int s = 0, t = 0;

	while (s < n)
	{
		while (t < s)
		{
			_putchar(' ');
			t++;
		}
		_putchar(92); /*backslash*/
		_putchar('\n');
		s++;
		t = 0;
	}

	if (n <= 0)
		_putchar('\n');
}
