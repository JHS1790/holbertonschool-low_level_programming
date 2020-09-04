#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: current header for the list
 * @n: data for new node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;
	*head = new_head;
	return (*head);
}
