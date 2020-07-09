#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates and array of integers
 * @min: first number in array
 * @max: last number in array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (max - min); i++)
	{
		array[i] = min + i;
	}
	array[i] = max;
	return (array);
}
