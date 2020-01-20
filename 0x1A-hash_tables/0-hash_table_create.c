#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: size of the array of the hash table
 *
 *Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = malloc(size * sizeof(hash_node_t));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->size = size;
	return (new_table);
}
