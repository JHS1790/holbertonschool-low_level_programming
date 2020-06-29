#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "cowabunga";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	if (f == NULL)
		printf("nothing found\n");
	return (0);
}
