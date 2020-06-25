#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: output string
 */
char *cap_string(char *s)
{
	char a[13] = " \t\n,;.!?\"(){}";
	int l = 0, x;

	while (*s)
	{
		for (x = 0; x < 13; x++)
		{
			if (*s == a[x])
			{
				s++;
				l++;
				if (*s >= 97 || *s <= 122)
					*s = *s - 32;
			}
		}
		s++;
		l++;
	}
	s = s - l;
	return (s);
}
