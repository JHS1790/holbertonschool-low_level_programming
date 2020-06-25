#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: output string
 */
char *cap_string(char *s)
{
	int l = 0;

	while (*s)
	{
		if (*s == 9 || *s == 10 || *s == 32 || *s == 33 || *s == 34)
		{
			s++;
			l++;
			if (*s >= 97 && *s <= 122)
				*s = *s - 32;
		}
		if (*s == 44 || *s == 46 || *s == 59 || *s == 63)
		{
			s++;
			l++;
			if (*s >= 97 && *s <= 122)
				*s = *s - 32;
		}
		if (*s == 40 || *s == 41 || *s == 123 || *s == 125)
		{
			s++;
			l++;
			if (*s >= 97 && *s <= 122)
				*s = *s - 32;
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
