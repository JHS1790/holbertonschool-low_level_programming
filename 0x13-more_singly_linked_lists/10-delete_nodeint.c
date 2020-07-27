#include "lists.h"
/**
 * delete_nodeint_at_index - self explanatory
 * @head: head of list
 * @index: index to delete
 * Return: 1 on success, -1 on failiure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *fore = *head;
	listint_t *aft = *head;
	listint_t *bad_node = *head;
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
	}
	else
		*head = fore;
	free(bad_node);
	return (1);
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
