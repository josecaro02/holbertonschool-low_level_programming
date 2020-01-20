#include "hash_tables.h"

/**
 *hash_table_set - Set an element in the hash table based in the key
 *@ht: hash table given
 *@key: key of the element of the hash table
 *@value: value of that element in the hash table
 *
 *Return: 1 if succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;
	hash_node_t *new_key, *aux_node;
	char *key_cpy, *value_cpy;

	if (ht == NULL)
		return (0);
	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	new_key = malloc(sizeof(hash_node_t));
	if (new_key == NULL)
	{
		free(new_key);
		return (0);
	}
	new_key->key = key_cpy = strdup(key);
	value_cpy = strdup(value);
	key_idx = key_index((unsigned char *)key_cpy, ht->size);
	new_key->value = value_cpy;
	new_key->next = NULL;
	aux_node = ht->array[key_idx];
	if (ht->array[key_idx] == NULL)
		ht->array[key_idx] = new_key;
	else
	{
		while (aux_node != NULL)
		{
			if (strcmp(aux_node->key, key_cpy) == 0)
			{
				free(aux_node->value);
				aux_node->value = value_cpy;
				free(key_cpy);
				free(new_key);
				return (1);
			}
			aux_node = aux_node->next;
		}
		new_key->next = ht->array[key_idx];
		ht->array[key_idx] = new_key;
	}
	return (1);
}
