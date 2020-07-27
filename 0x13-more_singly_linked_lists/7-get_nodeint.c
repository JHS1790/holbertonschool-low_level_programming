#include "lists.h"
/**
 * get_nodeint_at_index - self explanatory
 * @head: head of list to search
 * @index: what we're looking for
 * Return: pointer to index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if(head == NULL)
		return (NULL);
	while(current != NULL)
	{
		if(count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
