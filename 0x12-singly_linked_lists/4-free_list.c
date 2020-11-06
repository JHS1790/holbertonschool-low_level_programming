#include "lists.h"
/**
 * free_list - Free the lists!
 * @head: thw worker in this analogy I guess
 */
void free_list(list_t *head)
{
	list_t *working = head;
	list_t *next;

	while(working != NULL)
	{
		next = working->next;
		free(working->str);
		free(working);
		working = next;
	}
	head = NULL;
}
