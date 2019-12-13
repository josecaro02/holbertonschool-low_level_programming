#include "lists.h"

/**
 *free_dlisstint - free the memory allocated by the double linked list
 *@head: head of the double linked list
 *
 *Return: nothing it's a void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual;

	if (head == NULL)
		return;
	actual = head;
	while(actual != NULL)
	{
		actual = actual->next;
		free(head);
		head = actual;
	}
}
