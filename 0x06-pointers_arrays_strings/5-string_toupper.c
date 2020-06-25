#include "holberton.h"
/**
 * string_toupper - changes lower case to upper case
 * @s: input string
 * Return: output string
 */
char *string_toupper(char *s)
{
	int l = 0;

	while (*s)
	{
		if (*s >= 97 && *s <= 122)
		{
			*s = *s - 32;
			s++;
			l++;
		}
		else
		{
			s++;
			l++;
		}
	}
	s = s - l;
	return (s);
}
