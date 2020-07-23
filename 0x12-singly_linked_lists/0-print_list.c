#include "lists.h"
/**
 * print_list - prints everything in a singly linked list
 * @h: the list to print
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		count++;
	}
	return (count);
}
