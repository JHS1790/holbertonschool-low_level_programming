#include "lists.h"
/**
 * insert_nodeint_at_index - self explanatory
 * @head: head of list to insert
 * @idx: index of new node
 * @n: data of new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *fore = *head;
	listint_t *aft = *head;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	if (idx > listint_len(*head))
		return (NULL);
	if (*head == NULL)
		*head = new_node;
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
		*head = new_node;
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
	}
	return (new_node);
}

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
