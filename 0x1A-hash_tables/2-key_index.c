#include "hash_tables.h"

/**
 *key_index - converts string into hash value and then into an index value
 *@key: string target to find its index
 *@size: size of the hash table
 *
 *Return: key_index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);
	return (hash_value % size);
}
