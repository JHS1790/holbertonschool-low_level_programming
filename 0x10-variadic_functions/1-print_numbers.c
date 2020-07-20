#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - what do the numbers mean?!
 * @separator: seperator between numbers
 * @n: number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printlist;
	unsigned int i;

	va_start(printlist, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(printlist, int));
		else
		{
			if (separator == NULL)
				printf("%d", va_arg(printlist, int));
			else
				printf("%s%d", separator, va_arg(printlist, int));
		}
	}
	va_end(printlist);
	printf("\n");
}
