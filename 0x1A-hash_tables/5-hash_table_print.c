#include "hash_tables.h"

/**
 *hash_table_print - prints all the hash table
 *@ht: given hash table
 *
 *Return: nothing, it's a void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int hasElement, hasMore;
	hash_node_t *node;

	hasElement = hasMore = 0;
	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			else
			{
				if (hasElement == 0)
				{
					printf("{");
					hasElement = 1;
				}
				node = ht->array[i];
				while (node != NULL)
				{
					if (hasMore == 0)
					{
						printf("\'%s\': \'%s\'",
						       node->key, node->value);
						hasMore = 1;
					}
					else
						printf(", \'%s\': \'%s\'",
						       node->key, node->value);
					node = node->next;
				}
			}
		}
		if (hasElement == 1)
			printf("}\n");
		if (hasElement == 0)
			printf("{}\n");
	}

}
