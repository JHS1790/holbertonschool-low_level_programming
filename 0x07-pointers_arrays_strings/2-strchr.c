#include "holberton.h"
/**
 * _strchr - search an array
 * @s: string to search
 * @c: character to search for
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	char *t = s;

	if (!s || !c)
		return (0);
	while (*t)
	{
		if (*t == c)
			return (t);
		t++;
	}
	if (*t == c)
		return (t);
	return (0);
}
