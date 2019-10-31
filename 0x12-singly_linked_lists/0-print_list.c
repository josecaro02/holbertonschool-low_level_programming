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
	const list_t *last;

	last = h;
	size = 0;
	while (last != NULL)
	{
		if (last->str == NULL)
			printf("[0] %p\n", last->str);
		else
			printf("[%d] %s\n", last->len, last->str);
		last = last->next;
		size++;
	}
	return (size);
}
