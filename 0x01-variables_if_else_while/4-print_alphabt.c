#include <stdio.h>

/**
 * main - declares n as positive or negative or 0
 *
 *
 * Return: Ends the program
 */

int main(void)
{

	char ch = 'a';

	do {

		if (ch == 'e' || ch == 'q')
		{
			ch++;
			continue;
		}

		putchar(ch);
		ch++;

	} while (ch <= 'z');

	putchar('\n');

	return (0);
}
