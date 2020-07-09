#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory of specified size
 * @b: size of memory
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);
	if (address == NULL)
		exit(98);
	else
		return (address);
}
