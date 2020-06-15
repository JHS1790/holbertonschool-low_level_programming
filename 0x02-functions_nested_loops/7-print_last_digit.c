#include "holberton.h"

/**
 * print_last_digit - prints and returns last digit of input
 *
 * @i: input int and other things because betty hates me
 *
 * Return: r
 */

int print_last_digit(int i)
{

	i = i % 10;

	if (i >= 0)
		_putchar('0' + i);

	else
	{
		i = i * -1;
		_putchar('0' + i);
	}

	return (i);
}
