#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t  *navigator = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (navigator != NULL)
			{
				putchar(',');
				putchar(' ');
			}
			navigator = ht->array[i];
			while (navigator->next != NULL)
			{
				printf("\'%s\': \'%s\'",
				       navigator->key, navigator->value);
				putchar(',');
				putchar(' ');
				navigator = navigator->next;
			}
			printf("\'%s\': \'%s\'",
			       navigator->key,
			       navigator->value);
		}
	}
	putchar('}');
	putchar('\n');
}
