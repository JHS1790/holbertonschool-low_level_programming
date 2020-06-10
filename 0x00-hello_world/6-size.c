#include <stdio.h>

/**
 * main - Prints sizes of types
 *
 * Return: exits the program
 */

int main(void)
{

	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);

}
