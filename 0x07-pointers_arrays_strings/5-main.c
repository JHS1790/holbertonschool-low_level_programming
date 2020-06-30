#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "The object of war is not to die for your country but to make the other bastard die for his.";
	char *f = "ovoid";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
