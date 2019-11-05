#include "lists.h"

/**
 *free_listint - free all the allocated memory
 *@head: linked list
 *
 *Return: nothing, it's a void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	new = head;
	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
