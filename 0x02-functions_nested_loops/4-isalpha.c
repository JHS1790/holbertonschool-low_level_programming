D#include "holberton.h"

/**
 * _isalpha - returns if c is a letter or not
 *
 * @c: 1 is a letter, 0 is not
 *
 * Return: Ends program
 */

int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
