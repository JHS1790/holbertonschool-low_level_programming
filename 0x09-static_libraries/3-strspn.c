#include "holberton.h"
/**
 * _strspn - calculates the length of matching in a string
 * @s: string to search
 * @accept: string to match
 * Return: length of matching
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int fail = 0, slen = 0, alen = 0;

	if (!s || !accept)
		return (0);
	while (fail == 0)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				l++;
				break;
			}
			accept++;
			alen++;
		}
		if (*accept == 0)
			fail = 1;
		accept = accept - alen;
		alen = 0;
		s++;
		slen++;
	}
	s = s - slen;
	return (l);
}
