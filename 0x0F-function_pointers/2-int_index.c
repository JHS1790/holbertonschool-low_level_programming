#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - index the codex in the rolex
 * @array: index this thing
 * @size: how much shit I have to do
 * @cmp: how do
 * Return: pointer to index or error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		check = cmp(array[i]);
		if (check != 0)
			return (i);
	}
	return (-1);
}
