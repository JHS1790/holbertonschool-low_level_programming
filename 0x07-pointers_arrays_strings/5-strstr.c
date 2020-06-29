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
	int needlen = 0, haylen = 0;

	printf("hello");
	if (!haystack || !needle)
		printf("NULL check triggered\n");
		return (0);
	while (*haystack2)
	{
		printf("haystack check %d\n", haylen);
		while (*haystack2 == *needle2)
		{
			printf("search check triggered: %d\n", needlen);
			haystack2++;
			haylen++;
			needle2++;
			needlen++;
			if (needle2 == 0)
			{
				printf("end of needle found\n");
				haystack2 = haystack2 - needlen;
				return (haystack2);
			}
			if (*haystack2 != *needle2)
				needle2 = needle2 - needlen;
		}
		haystack2++;
		haylen++;
	}
	return (0);
}
