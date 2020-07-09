#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - cats two strings to n of the second string
 * @s1: first string
 * @s2: second string
 * @n: amount of second string to be cat'd to the first string
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catstr;
	unsigned int l1 = 0, i, cati = 0;

	while (s1[l1] != 0)
		l1++;
	catstr = malloc(sizeof(char) + l1 + n + 1);
	if (catstr == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		catstr[cati] = s1[i];
		cati++;
	}
	i = 0;
	while (s2[i] != 0 && i < n)
	{
		catstr[cati] = s2[i];
		cati++;
		i++;
	}
	catstr[cati] = 0;
	return (catstr);
}
