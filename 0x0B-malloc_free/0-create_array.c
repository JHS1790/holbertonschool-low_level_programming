#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars filled with c
 * @size: length of array
 * @c: character fill
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size < 1)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = 0;
	return (array);
}
