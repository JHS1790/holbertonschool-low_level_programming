#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - cats many strings from input
 * @ac: number of input strings
 * @av: pointer to input strings
 * Return: pointer to cat'd string
 */
char *argstostr(int ac, char **av)
{
	char *catstring;
	int i, j, length = 0, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][length] != 0)
		{
			length++;
		}
	}
	length++;
	catstring = malloc(sizeof(char) * length);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != 0)
		{
			catstring[k] = av[i][j];
			k++;
			j++;
		}
		catstring[k] = '\n';
		k++;
		j = 0;
	}
	catstring[k] = '\0';
	return (catstring);
}
