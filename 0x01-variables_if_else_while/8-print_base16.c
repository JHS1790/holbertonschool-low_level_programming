#include <stdio.h>

/**
 * main - declares n as positive or negative or 0
 *
 *
 * Return: Ends the program
 */

int main(void)
{

	char ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
