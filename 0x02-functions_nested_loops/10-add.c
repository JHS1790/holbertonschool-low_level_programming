#include "holberton.h"
/**
 * times_table - ends my sanity with the click of a button!
 * Return: void
 */
void times_table(void)
{
	int h = 0, v = 0, a = 0, t = 0;

	while (v <= 10)
	{
		while (h <= 10)
		{
			t = t + a;
			_putchar(t);
			h++;
		}
		h = 0;
		v++;
	}
}
