#include "lists.h"
/**
 * print_listint - prints the list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
