#include "holberton.h"
/**
 * rev_string - puts a string backwards for some reason
 * @s: string
 */
void rev_string(char *s)
{
	char ch;
	int l = 0, m = 0;
	char *s2 = s;

	while (*s2)
	{
		l++;
		s2++;
	}
	l = l - 1;
	while (m < l)
	{
		ch = s[l];
		s[l] = s[m];
		s[m] = ch;
		m++;
		l--;
	}
}
