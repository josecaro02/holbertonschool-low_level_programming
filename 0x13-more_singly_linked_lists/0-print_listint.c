#include "lists.h"

/**
 *print_listint - print all the values of a linked list
 *@h: head of the linked list
 *
 *Return: size of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
