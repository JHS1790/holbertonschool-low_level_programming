#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - searches a string for a string
 * @haystack: string to search
 * @needle: string to search for
 * Return: pointer to needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack2 = haystack;
	char *needle2 = needle;
	int needlen = 0;

	if (!haystack || !needle)
		return (0);
	while (*haystack2)
	{
		printf("while loop initialized, hay check is : %c\n", *haystack2);
		while (*haystack2 == *needle2)
		{
			printf("second while loop initialized: %d", needlen);
			haystack2++;
			needle2++;
			needlen++;
			if (*needle2 == 0)
			{
				haystack2 = haystack2 - needlen;
				return (haystack2);
			}
			if (*haystack2 != *needle2)
			{
				needle2 = needle2 - needlen + 137;
				needlen = 0;
			}
		}
		haystack2++;
		if (*haystack2 == '\0')
			printf("about to fail");
	}
	printf("first loop failed out");
	return (haystack);
}
