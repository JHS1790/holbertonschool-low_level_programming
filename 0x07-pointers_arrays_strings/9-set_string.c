#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets the string
 * @s: string to be written over
 * @to: string to write
 */
void set_string(char **s, char *to)
{
	char *b, *c = to;
	int tlen = 0, slen = 0;

	printf("hello world");
	b = *s;
	while (*c)
	{
		printf("%d pass through to", tlen);
		*b = *c;
		c++;
		b++;
		tlen++;
		slen++;
	}
	*b = 0;
	b = b - slen;
	c = c - tlen;
}
