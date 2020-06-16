#include "holberton.h"
/**
 * times_table - ends my sanity with the click of a button!
 * Return: void
 */
void times_table(void)
{
	int a = 0, t = 0, l = 1, c = 0;
	int f, s;

	while (l <= 10)
	{
		_putchar('0');
		while (c <= 8)
		{
			t = t + a;
			f = (t / 10);
			s = (t % 10);
			_putchar(',');
			_putchar(' ');
			if (f == 0)
				_putchar(' ');
			else
				_putchar('0' + f);
			_putchar('0' + s);
			c++;
		}
		_putchar('\n');
		c = 0;
		t = 0;
		l++;
		a++;
	}
}
