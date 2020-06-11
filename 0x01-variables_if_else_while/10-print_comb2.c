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

	for (ch = 0 ; ch < 100 ; ch++)
	{
		putchar((ch / 10) + '0');
		putchar((ch % 10) + '0');

		if (ch < 99)
		{
			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
