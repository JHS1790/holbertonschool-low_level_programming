#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
void *_memset(void *s, unsigned int n);
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
	array = _memset(array, (nmemb * size));
	return (array);
}

/**
 * _memset - sets part of array
 * @s: array to be set
 * @n: size
 * Return: set array
 */
void *_memset(void *s, unsigned int n)
{
	char *t = s;
	unsigned int l;

	if (!s || !n)
		return (0);
	for (l = 0; l < n; l++)
	{
		*t = 0;
		t++;
	}
	return (s);
}
