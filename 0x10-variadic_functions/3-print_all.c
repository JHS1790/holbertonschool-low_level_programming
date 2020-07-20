#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - even the kitchen sink
 * @format: format of thing to print
 */
void print_all(const char * const format, ...)
{
	va_list printlist;
	int i = 0;
	char *working;

	va_start(printlist, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != 0)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(printlist, int));
			break;
		case 'i':
			printf("%d", va_arg(printlist, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(printlist, double));
			break;
		case 's':
			working = va_arg(printlist, char *);
			if (working == NULL)
				printf("(nil)");
			else
				printf("%s", working);
			break;
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		     format[i] == 'f' || format[i] == 's') &&
		    format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(printlist);
}
