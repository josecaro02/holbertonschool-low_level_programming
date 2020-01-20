#include "hash_tables.h"

/**
 *hash_table_delete - delete the hash table
 *@ht: hash table
 *
 *Return: nothing, it's a void function
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *aux_node;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			free(ht->array[i]);
			continue;
		}
		node = ht->array[i];
		while (node != NULL)
		{
			aux_node = node->next;
			free(node->value);
			free(node->key);
			free(node);
			node = aux_node;
		}
	}
	free(ht->array);
	free(ht);
}
