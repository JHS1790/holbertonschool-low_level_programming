#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: current header of list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *nav;
	int sum = 0;

	if (head == NULL)
		return (0);
	nav = head;
	while (nav != NULL)
	{
		sum += nav->n;
		nav = nav->next;
	}
	return (sum);
}
