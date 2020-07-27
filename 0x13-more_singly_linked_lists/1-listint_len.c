#include "lists.h"
/**
 * listint_len - list the numbers
 * @h: list to print
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
