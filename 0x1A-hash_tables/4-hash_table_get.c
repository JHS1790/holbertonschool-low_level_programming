#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the key, or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *navigator;
	const unsigned char *key2;
	int w = 0;

	if (
		ht == NULL ||
		key == NULL
		)
		return (NULL);

	key2 = malloc(sizeof(unsigned char *) * strlen(key));
	if (key2 == NULL)
		return (NULL);

	strcpy((char *)key2, key);
	index = key_index(key2, ht->size);
	free((char *)key2);
	if (ht->array[index] == NULL)
		return (NULL);
	navigator = ht->array[index];
	while (w == 0)
	{
		if (!strcmp(key, navigator->key))
			return (navigator->value);
		if (navigator->next == NULL)
			return (NULL);
		navigator = navigator->next;
	}
	return (NULL);
}
