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
		printf(h->str == NULL ? "[%d] %p\n" : "[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
