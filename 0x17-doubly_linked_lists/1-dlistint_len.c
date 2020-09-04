#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: header for list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nav = h;
	int count = 0;

	while (nav)
	{
		count++;
		nav = nav->next;
	}
	return (count);
}
