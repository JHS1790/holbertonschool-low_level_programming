#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - declares n as positive or negative or 0
 *
 *
 * Return: Ends the program
 */

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
