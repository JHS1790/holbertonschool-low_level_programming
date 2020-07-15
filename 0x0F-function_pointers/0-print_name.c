#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - SAY MY NAME
 * @name: Ivanho
 * @f: function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
