#include "holberton.h"
/**
 * puts_half - puts half the statement, duh
 * @str: input string
 */
void puts_half(char *str)
{
	char *str2 = str;
	int l = 0, h;

	while(*str2)
	{
		l++;
		str2++;
	}
	if (l % 2 == 0)
		h = l / 2;
	else
		h = (l - 1) / 2;
	while (h < l)
	{
		h++;
		str++;
	}
	if (l % 2 == 0)
		h = l / 2;
	else
		h = (l - 1) / 2;
	while (h < l)
	{
		_putchar(*str);
		h++;
		str++;
	}
	_putchar('\n');
}
