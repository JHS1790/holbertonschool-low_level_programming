#include "holberton.h"
/**
 * puts2 - puts every other character
 * @str: input string
 */
void puts2(char *str)
{
	char *str2 = str;
	int l;

	while (*str2)
	{
		l++;
		str2++;
	}
	while (str < str2)
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
