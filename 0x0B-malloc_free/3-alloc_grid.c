#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid - allocate a grid
 * @width: width of array
 * @height: height of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{

	int **array, i, j;

	array = malloc(height * sizeof(int *));
	if (!array)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
