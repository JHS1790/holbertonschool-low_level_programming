#include "holberton.h"
/**
 * _isdigit - is digit? naw? well then get rekt mate
 *@c: the character for checking
 * Return: 1 is aye 0 is otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
