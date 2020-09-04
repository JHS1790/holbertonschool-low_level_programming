#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: current header for the list
 * @n: data for new node
 * Return:
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nav = *head;
	dlistint_t *new_tail = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_tail == NULL)
		return (NULL);
	new_tail->n = n;
	new_tail->next = NULL;
	if (*head == NULL)
	{
		new_tail->prev = NULL;
		*head = new_tail;
	}
	else
	{
		while (nav->next != NULL)
			nav = nav->next;
		new_tail->prev = nav;
		nav->next = new_tail;
	}
	return (new_tail);
}
