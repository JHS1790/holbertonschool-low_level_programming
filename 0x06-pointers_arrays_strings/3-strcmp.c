#include "holberton.h"
/**
 * _strcmp - compares size of elements of strings
 * @s1: first string
 * @s2: second string
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{

	if (*s1 == *s2)
	{
		if (*s1 == 0 || *s2 == 0)
			return (0);
		s1++;
		s2++;
	}
	else
		return (*s1 - *s2);
	return (0);
}
