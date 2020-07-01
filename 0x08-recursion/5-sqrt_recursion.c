#include "holberton.h"
int _sqrt2(int n, int i);
/**
 * _sqrt_recursion - returns natural square root
 * @n: input number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt2(n, 0));
}
/**
 * _sqrt2 - second function because Holberton is asinine
 * @n: final call
 * @i: square call
 * Return: square root
 */
int _sqrt2(int n, int i)
{
	if (n <= 0 || n < i)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt2(n, i + 1));
}
