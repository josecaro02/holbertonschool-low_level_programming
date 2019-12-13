#include "lists.h"

/**
 *listint_len - return the size of the linked list
 *@h: linked list
 *
 *Return: size of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
