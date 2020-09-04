#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: current header of list
 * @idx: index to insert at
 * @n: data for new node
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *fore = *h;
	dlistint_t *aft = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	if (idx > listint_len(*h))
		return (NULL);
	if (*h == NULL)
		*h = new_node;
	while (fore != NULL)
	{
		if (count == idx)
			break;
		count++;
		fore = fore->next;
	}
	new_node->n = n;
	new_node->next = fore;
	if (idx == 0)
	{
		*h = new_node;
		new_node->prev = NULL;
		(void)aft;
	}
	else
	{
		count--;
		while (count)
		{
			count--;
			aft = aft->next;
		}
		aft->next = new_node;
		new_node->prev = aft;
	}
	return (new_node);
}

/**
 * listint_len - list the numbers
 * @h: list to print
 * Return: number of nodes in list
 */
size_t listint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
