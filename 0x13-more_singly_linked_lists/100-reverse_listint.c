#include "lists.h"

/**
 *reverse_listint - reverse a linked list
 *head: head of the linked list
 *
 *Return: new head of the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *actual, *next;

	if (*head == NULL)
		return (NULL);
	actual = *head;
	next = actual->next;
	actual->next = NULL;
	*head = next;
	while (next != NULL)
	{
		next = (*head)->next;
		(*head)->next = actual;
		actual = (*head);
		*head = next;
	}
	*head = actual;
	return (*head);
}
