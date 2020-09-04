#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of the list to print
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *nav = h;
	int count = 0;

	while (nav)
	{
		count++;
		printf("%d\n", nav->n);
		nav = nav->next;
	}
	return (count);
}
