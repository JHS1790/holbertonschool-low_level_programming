#include "holberton.h"
/**
 * _isupper - is upper? naw? well then get rekt mate
 *@c: the letter for checking
 * Return: 1 is lower case 0 is otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
