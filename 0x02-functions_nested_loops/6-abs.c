#include "holberton.h"

/**
 * _abs - returns absolute value
 *
 * @r: absolute value
 *
 * Return: r
 */

int _abs(int r)
{

	if (r < 0)
	{
		r = r * -1;
		return (r);
	}

	else
		return (r);
}
