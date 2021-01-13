#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if absent or if array
 *         is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int L = 0, R, m;

	if (array == NULL || size <= 1)
		return (-1);
	R = size - 1;
	while (L <= R)
	{
		printf("Searching in array:");
		print_array(array, L, R);
		printf("\n");
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - prints the array given assigned parameters
 * @array: pointer to first element of array to print.
 * @L: lower bound of print range
 * @R: upper bound of print range
 */
void print_array(int *array, unsigned int L, unsigned int R)
{
	unsigned int i = L;

	for (i = L; i <= R; i++)
	{
		if (i != R)
			printf(" %i,", array[i]);
		else
			printf(" %i", array[i]);
	}
}
