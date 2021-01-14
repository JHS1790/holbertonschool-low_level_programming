#include "search_algos.h"
/**
 * jump_search - a function that searches for a value in a sorted array of
 *               integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int a = 0, b, n = (int) size;

	if (array == NULL || size == 0)
		return (-1);
	b = sqrt(n);
	printf("Value checked array[%d] = [%d]\n", a, array[a]);
	while (array[_min(b, n)] < value)
	{
		a = b;
		b += sqrt(n);
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		if (b >= n)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", a, b);

	while (array[a] < value)
	{
		if (a < n)
			printf("Value checked array[%d] = [%d]\n", a, array[a]);
		a++;
		if (a == _min(b, n) + 1)
			return (-1);
	}

	printf("Value checked array[%d] = [%d]\n", a, array[a]);

	if (array[a] == value)
		return (a);
	else
		return (-1);
}

/**
 * _min - returns minimum of two numbers
 * @a: first number
 * @b: second number
 * Return: whichever is smaller, a or b
 */
int _min(int a, int b)
{
	if (a >= b)
		return (b);
	else
		return (a);
}
