#include "holberton.h"
/**
 * _memset - 
 * @s: 
 * @b: 
 * @n: 
 * Return: 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	if (!s || !b || !n)
		return (0);
	for (l = 0; l < n; l++)
	{
		*s = b;
		s++;
	}
	return (s);
}
