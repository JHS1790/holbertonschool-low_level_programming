#include "lists.h"
/**
 * add_nodeint_end - adds node to tail of list
 * @head: current head
 * @n: content of new node
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int newn = n;
	listint_t *new_tail = (listint_t *) malloc(sizeof(listint_t));
	listint_t *current;

	if (new_tail == NULL)
		return (NULL);
	new_tail->n = newn;
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
