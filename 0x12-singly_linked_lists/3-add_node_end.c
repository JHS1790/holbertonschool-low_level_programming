#include "lists.h"
/**
 * add_node_end - adds node to tail of linked list
 * @head: Current head
 * @str: string to input
'* Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail;
	list_t *current;
	char *newstring = strdup(str);

	new_tail = (list_t *) malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);
	new_tail->str = newstring;
	new_tail->len = _strlen(newstring);
	new_tail->next = NULL;
	if (*head == NULL)
		*head = new_tail;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_tail;
	}
	return (new_tail);
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
