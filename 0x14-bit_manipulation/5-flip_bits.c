#include "holberton.h"
/**
 * flip_bits - is it like flipping flajacks?
 * @n: one side of the pancake
 * @m: the other side of the hotcake
 * Return: the fluffy batter in the middle
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int check = (n ^ m);

	while (check > 0)
	{
		count++;
		check &= (check - 1);
	}
	return (count);
}
