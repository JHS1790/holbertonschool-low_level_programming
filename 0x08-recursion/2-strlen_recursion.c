#include "holberton.h"
/**
 * _strlen_recursion - finds string length
 * @s: input string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == 0)
		return (0);
	s++;
	length = _strlen_recursion(s) + 1;
	return (length);
}
