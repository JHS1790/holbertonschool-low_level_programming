#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 *                            linked list
 * @head: current head of the list
 * @index: node to delete
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fore = *head;
	dlistint_t *aft = *head;
	dlistint_t *bad_node = *head;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index > listint_len(*head) - 1)
		return (-1);
	for (count = 0; count < index + 1; count++)
		fore = fore->next;
	for (count = 0; count < index; count++)
		bad_node = bad_node->next;
	if (index > 0)
	{
		for (count = 0; count < index - 1; count++)
			aft = aft->next;
		aft->next = fore;
		fore->prev = aft;
	}
	else
	{
		*head = fore;
		if (fore != NULL)
			fore->prev = NULL;
	}
	free(bad_node);
	return (1);
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
