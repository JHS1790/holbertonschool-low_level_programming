#include "holberton.h"
/**
 * clear_bit - grabing a bite to eat
 * @n: what we're feeling like today
 * @index: where we're eating
 * Return: value at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	if (n == NULL)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
