#include "holberton.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: string to search for
 * Return: pointer to search
 */
char *_strpbrk(char *s, char *accept)
{
	char *t = s, *acc2 = accept;
	int alen = 0;

	if (!s || !accept)
		return (0);
	while (*t)
	{
		while (*acc2)
		{
			if (*acc2 == *t)
				return (t);
			acc2++;
			alen++;
		}
		acc2 = acc2 - alen;
		alen = 0;
		t++;
	}
	return (0);
}
