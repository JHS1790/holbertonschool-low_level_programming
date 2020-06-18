#include "holberton.h"
/**
 * print_numbers - superior to its more common brethren
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
		_putchar('0' + i++);

	_putchar('\n');
}
