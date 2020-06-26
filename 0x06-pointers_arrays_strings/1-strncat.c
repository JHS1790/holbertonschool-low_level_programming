#include "holberton.h"
/**
 * _strncat - cats two strings
 * @dest: destination string
 * @src: source string
 * @n: lengths of source string to use
 * Return: new pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int ld = 0, ls = 0, w = 0;

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
	src = src - ls;
	while (w < n && w <= ls)
	{
		*dest = *src;
		dest++;
		src++;
		w++;
	}
	if (n <= ls)
		dest = dest - (n + ld);
	else
		dest = dest - (ls + ld);
	return (dest);
}
