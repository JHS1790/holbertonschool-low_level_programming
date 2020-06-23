#include "holberton.h"
/**
 * print_rev - puts a string backwards for some reason
 * @s: string
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	l--;
	while (l >= 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
}
