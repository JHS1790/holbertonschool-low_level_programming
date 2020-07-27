#include "lists.h"
/**
 * pop_listint - deletes head of list
 * @head: head of list
 * Return: data in head
 */
int pop_listint(listint_t **head)
{
	listint_t *working = *head;
	int deln;

	if (*head == NULL)
		return (0);
	*head = working->next;
	deln = working->n;
	free(working);
	return (deln);
}
