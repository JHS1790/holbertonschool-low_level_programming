#include "holberton.h"
/**
 * binary_to_uint - converts a binary string to an unsigned int
 * @b: input binary
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int power = _strlen(b) - 1;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; i < _strlen(b); i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] == 49)
			decimal += _pow(2, power);
		power--;
	}
	return (decimal);
}

/**
 * _pow - raises to the power
 * @x: number to raise
 * @y: power
 * Return: RAISED, HALLELUJAH
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	return (x * _pow(x, y));
}

/**
 * _strlen - gets string length
 * @s: string
 * Return: string length
 */
int _strlen(const char *s)
{
	int l = 0;

	while (s[l] != 0)
		l++;
	return (l);
}
