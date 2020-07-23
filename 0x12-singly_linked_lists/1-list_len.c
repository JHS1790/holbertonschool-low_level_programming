#include "lists.h"
/**
 * list_len - Counts number of nodes in linked list
 * @h: the list to count
 * Return: Number of nodes counted
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
