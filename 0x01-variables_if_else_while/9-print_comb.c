#include <stdio.h>

/**
 * main - declares n as positive or negative or 0
 *
 *
 * Return: Ends the program
 */

int main(void)
{

	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);

		if (ch < '9')
		{
			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
