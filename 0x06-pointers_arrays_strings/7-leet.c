#include "holberton.h"
/**
 * leet - get gud scrub
 * @s: input string
 * Return: output string
 */
char *leet(char *s)
{
	int l = 0, x;
	char alpha[10] = "AaEeOoTtLl";
	char leet[10] = "4433007711";

	while (*s)
	{
		for (x = 0; x < 10; x++)
		{
			if (*s == alpha[x])
				*s = leet[x];
		}
		s++;
		l++;
	}
	s = s - l;
	return (s);
}
