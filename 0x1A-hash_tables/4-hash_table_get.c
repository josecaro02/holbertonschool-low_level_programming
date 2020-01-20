#include "hash_tables.h"

/**
 *hash_table_get - retrieve the value associated with a key
 *@ht: hash table structure
 *@key: key to find the correct value
 *
 *Return: array with the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size_hs_tbl, key_idx;
	char *key_cpy;
	hash_node_t *cpy_nd;

	if (ht == NULL)
		return (NULL);
	if (strcmp(key, "") == 0)
		return (NULL);
	key_cpy = strdup(key);
	size_hs_tbl = ht->size;
	key_idx = key_index((unsigned char *)key_cpy, size_hs_tbl);
	cpy_nd = ht->array[key_idx];
	if (cpy_nd)
	{
		while (cpy_nd != NULL)
		{
			printf("key: %s\n", cpy_nd->key);
			if (strcmp(cpy_nd->key, key_cpy) == 0)
				return (cpy_nd->value);
			cpy_nd = cpy_nd->next;
		}
		return (NULL);
	}
	else
		return (NULL);

}
