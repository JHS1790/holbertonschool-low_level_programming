#include "holberton.h"
/**
 * rot13 - My favorite is RotBraun
 * @s: input string
 * Return: output string
 */
char *rot13(char *s)
{
	int l = 0, x;
	char alpha[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		for (x = 0; x < 52; x++)
		{
			if (*s == alpha[x])
				*s = rot[x];
		}
		s++;
		l++;
	}
	s = s - l;
	return (s);
}
