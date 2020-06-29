#include "holberton.h"
/**
 * _strchr - search an array
 * @s: string to search
 * @c: character to search for
 * Return: pointer to character
 */
char *_strchr(char *s, char c)
{
	if (!s || !c)
		return (0);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
