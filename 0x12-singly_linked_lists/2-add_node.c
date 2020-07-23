#include "lists.h"
/**
 * add_node - adds node to head of linked list
 * @head: Current head
 * @str: string to input
'* Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *newstring = strdup(str);
	list_t *new_head = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
		return (NULL);
	new_head->str = newstring;
	new_head->next = *head;
	new_head->len = _strlen(newstring);
	*head = new_head;
	return (*head);
}

/**
 * _strlen - gets string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
