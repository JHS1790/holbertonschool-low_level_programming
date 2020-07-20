#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - a ball of cat yarn
 * @separator: seperator between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printlist;
	unsigned int i;
	char *working;

	va_start(printlist, n);
	for (i = 0; i < n; i++)
	{
		working = va_arg(printlist, char*);
		if (i == 0)
		{
			if (working == NULL)
				printf("(nil)");
			else
				printf("%s", working);
		}
		else
		{
			if (working == NULL)
				printf("%s(nil)", separator);
			else
			{
				if (separator == NULL)
					printf("%s", working);
				else
					printf("%s%s", separator, working);
			}
		}
	}
	va_end(printlist);
	printf("\n");
}
