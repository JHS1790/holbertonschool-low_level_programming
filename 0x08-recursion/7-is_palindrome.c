#include "holberton.h"
char *_copy_rev_recursion(char *s);
int pal_rec(char str[], int s, int e);
/**
 * is_palindrome - is it a palindomawatist
 * @s: string to check
 * Return: 1: yes 0: no
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
		return (1);
	return (pal_rec(s, 0, n - 1));
}
/**
 * pal_rec - checks the palindrome
 * @str: input string
 * @s: first position
 * @e: last position
 * Return: 1 is yes 0 is no
 */
int pal_rec(char str[], int s, int e)
{
	if (s == e)
		return (1);
	if (str[s] != str[e])
		return (0);
	if (s < e + 1)
		return (pal_rec(str, s + 1, e - 1));
	return (1);
}
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
