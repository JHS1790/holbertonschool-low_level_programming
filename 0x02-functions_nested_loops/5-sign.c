#include "holberton.h"

/**
 * print_sign - returns if c is a letter or not
 *
 * @n: 1 is a letter, 0 is not
 *
 * Return: Ends program
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);

	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);

	}
	else
	{
		_putchar(45);
		return (-1);
	}

}
