#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * @ac: Argumetns counter
 * @av: Arguments array
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac < 2)
	{
		printf("Usage: %s filename\n", av[0]);
		return (1);
	}
	res = create_file(av[1], NULL);
	printf("%i\n", res);
	return (0);
}
