#include "holberton.h"
/**
 * swap_int - swaps ints
 * @a: first to swap
 * @b: sec to swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
