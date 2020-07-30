#include "holberton.h"
/**
 * get_bit - grabing a bite to eat
 * @n: what we're feeling like today
 * @index: where we're eating
 * Return: value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k;

	if (index > 32)
		return (-1);
	k = n >> index;
	if (k & 1)
		return (1);
	else
		return (0);
}
