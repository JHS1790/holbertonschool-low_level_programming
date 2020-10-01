#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	const unsigned char *key2 = malloc(sizeof(unsigned char*));
	char *key3 = malloc(sizeof(char *) + strlen(key));
	char *value2 = malloc(sizeof(char *) + strlen(value));
	unsigned long int index;

	strcpy((char *)key2, key);
	strcpy(key3, key);
	strcpy(value2, value);
	index = key_index(key2, ht->size);

	new_node->key = key3;
	new_node->value = value2;
	if(ht->array[index] != NULL)
		new_node->next = ht->array[index];
	else
		new_node->next = NULL;
	ht->array[index] = new_node;
	free((char *)key2);
	return (1);
}
