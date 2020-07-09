#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	_memset(array, 0, (nmemb * size));
	return (array);
}

/**
 * _memset - sets part of array
 * @s: array to be set
 * @b: char to set
 * @n: size
 * Return: set array
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;
	unsigned int l;

	if (!s || !b || !n)
		return (0);
	for (l = 0; l < n; l++)
	{
		*t = b;
		t++;
	}
	return (s);
}
