#include "lists.h"
/**
 * sum_listint - add up the list
 * @head: head of list to add
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	unsigned int count = 0;

	if(head == NULL)
		return (0);
	while(current != NULL)
	{
		count += current->n;
		current = current->next;
	}
	return (count);
}
