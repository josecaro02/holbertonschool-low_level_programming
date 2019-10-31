#include "lists.h"

/**
 *print_list - function that prints all the elements of a list
 *@h: list of elements
 *
 *Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %p\n", h->str);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
