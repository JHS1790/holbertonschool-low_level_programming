6#include "holberton.h"
#include <stdio.h>
/**
 * set_string - sets the string
 * @s: string to be written over
 * @to: string to write
 */
void set_string(char **s, char *to)
{
	int tlen = 0, slen = 0;

	printf("hello world");
	while (*to)
	{
		printf("%d pass through to", tlen);
		**s = *to;
		to++;
		s++;
		tlen++;
		slen++;
	}
	**s = 0;
	*s = *s - slen;
	to = to - tlen;
}
