#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strdup(char *str);

/**
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *neue_hund;

	if (!*name || !*owner)
		return (NULL);
	neue_hund = malloc(sizeof(dog_t));
	if (neue_hund == NULL)
		return (NULL);
	(*neue_hund).name = _strdup(name);
	(*neue_hund).age = age;
	(*neue_hund).owner = _strdup(owner);
	return (neue_hund);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0, i;

	if (!str)
		return (NULL);
	while (str[length] != 0)
	{
		length++;
	}
	length++;
	dup = malloc(sizeof(char) * length);
	if (!dup)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
