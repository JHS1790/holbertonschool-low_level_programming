#include "hash_tables.h"
/**
 * key_index - provides the index for the given key
 * @key: key to assign
 * @size: size of the array
 * Return: index for given key in size array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
