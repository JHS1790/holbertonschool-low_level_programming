#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: seconmd string
 * Return: pointer to coned string
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int l1 = 0, l2 = 0, i;

	while (*s1)
	{
		l1++;
		s1++;
	}
	s1 -= l1;
	while (*s2)
	{
		l2++;
		s2++;
	}
	s2 -= l2;
	con = malloc(sizeof(char) * (l1 + l2));
	if (!con)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		*con = *s1;
		con++;
		s1++;
	}
	for (i = 0; i < l2; i++)
	{
		*con = *s2;
		con++;
		s2++;
	}
	con -= (l1 + l2);
	return (con);
}
