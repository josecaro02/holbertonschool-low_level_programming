#include "lists.h"

/**
 *free_listint_safe - free a list of elements with address
 *@h: head of the linked list
 *
 *Return: size of the linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n;
	long int add_a, add_b;
	listint_t *save;

	n = 0;

	if (h == NULL)
		return (n);
	if (*h == NULL)
	{
		return (n);
	}
	while (*h != NULL)
	{
		save = (*h)->next;
		add_a = (long int)(*h);
		add_b = (long int)(*h)->next;
		free(*h);
		if (add_a - add_b <= 0)
		{
			n++;
			return (n);
		}
		*h = save;
		n++;
	}
	return (n);
}
