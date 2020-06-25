#include "holberton.h"
/**
 * _strncpy - copies n of string
 * @dest: destination
 * @src: source
 * @n: length
 * Return: new string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int ld = 0, ls = 0, w = 1;

	if (*dest == 0 || *src == 0)
		return (0);
	while (*dest)
	{
		dest++;
		ld++;
	}
	dest = dest - ld;
	while (*src)
	{
		src++;
		ls++;
	}
	src = src - ls;
	while (w <= n)
	{
		if (w > ls)
			*dest = 0;
		else
			*dest = *src;
		w++;
		src++;
		dest++;
	}
	dest = dest - n;
	return (dest);
}
