#include "lists.h"

/**
 *list_len - calc the size of the list
 *@h: list
 *
 *Return: size_t of the list
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
