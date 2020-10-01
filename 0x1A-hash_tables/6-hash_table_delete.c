#include "hash_tables.h"
/**
 * hash_table_delete - prints a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *navigator;
	hash_node_t *kill;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			navigator = ht->array[i];
			while (navigator != NULL)
			{
				kill = navigator;
				free(navigator->key);
				free(navigator->value);
				navigator = navigator->next;
				free(kill);
			}
		}
	}
	free(ht->array);
	free(ht);
}
