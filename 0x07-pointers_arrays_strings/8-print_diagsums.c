#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the saltires of a matrix
 * @a: input pointer
 * @size: size of input
 */
void print_diagsums(int *a, int size)
{
	int *b = a;
	int leftsalt = 0, rightsalt = 0, row = 0;

	if (!a || !size)
		return;
	while (row < size)
	{
		leftsalt = leftsalt + *b;
		row++;
		if (row == size)
			break;
		b = b + size + 1;
	}
	printf("%d, ", leftsalt);
	b = b - (size * size);
	b = b + size;
	row = 0;
	while (row < size)
	{
		rightsalt = rightsalt + *b;
		b = b + size - 1;
		row++;
	}
	printf("%d\n", rightsalt);
}
