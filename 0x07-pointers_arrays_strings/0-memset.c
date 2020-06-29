#include "holberton.h"
/**
 * _memset - sets part of array
 * @s: array to be set
 * @b: char to set
 * @n: size
 * Return: set array
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;
	unsigned int l;

	if (!s || !b || !n)
		return (0);
	for (l = 0; l < n; l++)
	{
		*t = b;
		t++;
	}
	return (s);
}
