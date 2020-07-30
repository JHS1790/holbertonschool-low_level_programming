#include "holberton.h"
/**
 * print_binary - blow this
 * @n: input decimal
 */
void print_binary(unsigned long int n)
{
	int k, c, g;

	if (n == 0)
		_putchar('0');
	for (g = 31; g >= 0; g--)
	{
		k = n >> g;
		if (k & 1)
			break;
	}
	for (c = g; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
