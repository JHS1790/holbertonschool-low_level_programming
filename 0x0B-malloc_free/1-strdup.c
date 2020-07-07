#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0, i;

	if (!str)
		return (NULL);
	while (*str)
	{
		length++;
		str++;
	}
	str -= length;
	dup = malloc(sizeof(char) * length);
	if (!dup)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		*dup = *str;
		dup++;
		str++;
	}
	dup -= length;
	return (dup);
}
