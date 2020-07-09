#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements of array
 * @size: size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;
	return (array);
}
