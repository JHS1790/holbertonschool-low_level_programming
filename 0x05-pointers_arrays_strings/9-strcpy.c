#include "holberton.h"
/**
 * _strcpy - copies string to pointer
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	char *destcpy = dest, *srccpy = src;

	while (*srccpy)
	{
		*destcpy = *srccpy;
		destcpy++;
		srccpy++;
	}
	return (dest);
}
