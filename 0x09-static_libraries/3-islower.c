#include "holberton.h"

/**
 * _islower - returns a characters case
 *
 * @c: 0 is upper case, 1 is lower case, 2 is no case
 *
 * Return: Ends program
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
