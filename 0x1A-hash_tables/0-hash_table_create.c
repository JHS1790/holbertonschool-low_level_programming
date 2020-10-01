#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of main array
 * Return: a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	new_table->size = size;
	new_table->array = NULL;
	return (new_table);
}
