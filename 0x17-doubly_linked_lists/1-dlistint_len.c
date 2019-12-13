#include "lists.h"

/**
 *dlistint_len - counts the nodes in a double linked list
 *@h: head of the double linked list
 *
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);
	do {
		count++;
		h = h->next;
	} while (h != NULL);
	return (count);
}
