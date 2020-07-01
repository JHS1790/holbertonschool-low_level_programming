#include "holberton.h"
int prime2(int n, int i);
/**
 * is_prime_number - is it a prime number?
 * @n: input number
 * Return: 0 = no, 1 = yes
 */
int is_prime_number(int n)
{
	return (prime2(n, 0));
}
/**
 * prime2 - second function because Holberton is asinine
 * @n: final call
 * @i: square call
 * Return: square root
 */
int prime2(int n, int i)
{
	if (n <= 0 || i * i == n)
		return (0);
	if (n < i)
		return (1);
	return (prime2(n, i + 1));
}
