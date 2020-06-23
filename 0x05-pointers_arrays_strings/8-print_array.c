#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: the array
 * @n: the size of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
