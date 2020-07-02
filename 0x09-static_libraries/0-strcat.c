#include "holberton.h"
/**
 * _strcat - cats two strings
 * @dest: destination string
 * @src: source string
 * Return: new pointer to string
 */
char *_strcat(char *dest, char *src)
{
	int ld = 0, ls = 0, ln;

	if (!dest || !src)
		return (0);
	while (*dest)
	{
		dest++;
		ld++;
	}
	while (*src)
	{
		src++;
		ls++;
	}
	ln = ls + ld;
	src = src - ls;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = dest - ln;
	return (dest);
}
