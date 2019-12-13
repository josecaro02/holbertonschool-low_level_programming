#include "lists.h"

/**
 *print_dlistint - prints each node of a double linked list
 *@h: head of the linked list
 *
 *Return: size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);
	do {
		count++;
		printf("%d\n", h->n);
		h = h->next;
	} while (h != NULL);
	return (count);
}
