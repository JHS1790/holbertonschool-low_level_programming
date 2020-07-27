#include "lists.h"
/**
 * add_nodeint - adds node to head of list
 * @head: current head
 * @n: content of new node
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int newn = n;
	listint_t *new_head = (listint_t *) malloc(sizeof(listint_t));

	new_head->n = newn;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
