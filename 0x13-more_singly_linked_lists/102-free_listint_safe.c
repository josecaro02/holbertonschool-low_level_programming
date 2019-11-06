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
	int *add_a, *add_b;
	listint_t *save;

	save = malloc(sizeof(listint_t));
	n = 0;
	if (*h == NULL)
		exit(98);
	while (*h != NULL)
	{
		add_a = (int *)&(*h);
		add_b = (int *)&(*h)->next;
		if (add_a[0] - add_b[0] <= 0)
		{
			(*h) = NULL;
			n++;
			return (n);
		}
		save = (*h)->next;
		free(*h);
		*h = save;
		n++;
	}
	return (n);
}
