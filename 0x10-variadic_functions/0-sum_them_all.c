#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - adds all parameters together
 * @n: number of passed arguments
 * Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list addlist;
	int sum = 0;
	unsigned int i;

	va_start(addlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(addlist, int);
	va_end(addlist);
	return (sum);
}
