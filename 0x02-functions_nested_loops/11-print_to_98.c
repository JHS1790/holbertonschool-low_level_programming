#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - ends my sanity with the click of a button!
 * @n: number from 98
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
