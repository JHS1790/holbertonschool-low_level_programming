#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes each part of array, for the revolution
 * @array: the bastille has nothing on gulag comrade X))))))))))))
 * @size: number of reactionaries
 * @action: method of execution
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
