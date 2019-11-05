#include "lists.h"

/**
 *free_listint2 - free a linked list
 *@head: head of the linked list
 *
 *Return: nothing, it's a void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	while (*head != NULL)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
	}
}
