#include "holberton.h"
/**
 * factorial - returns factorial of a number
 * @n: input number
 * Return: final factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
