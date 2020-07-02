#include "holberton.h"
/**
 * _memcpy - copies array to array
 * @dest: copy destination
 * @src: copy source
 * @n: size
 * Return: copied array array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	if (!dest || !src || !n)
		return (0);
	for (l = 0; l < n; l++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest = dest - l;
	return (dest);
}
