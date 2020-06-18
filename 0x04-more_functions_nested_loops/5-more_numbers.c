#include "holberton.h"
/**
 * more_numbers - MOAR POWAERRRRR
 */
void more_numbers(void)
{
	int r = 1, c = 0, a, b;

	while (r <= 10)
	{
		while (c <= 14)
		{
			a = c / 10;
			b = c % 10;
			if (a > 0)
				_putchar('0' + a);
			_putchar('0' + b);
			c++;
		}
		_putchar('\n');
		c = 0;
		r++;
	}
}
