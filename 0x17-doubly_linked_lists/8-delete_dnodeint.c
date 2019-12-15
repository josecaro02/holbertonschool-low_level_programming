#include "lists.h"
/**
 *delete_dnodeint_at_index - delete a node at the given index
 *@head: head of the double linked list
 *@index: index of the node to delete
 *
 *Return: 1 succeed, -1 fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual;
	unsigned int pos;

	pos = 0;
	if (*head == NULL || head == NULL)
		return (-1);
	actual = *head;
	if (index == 0 && actual->next != NULL)
	{
		*head = actual->next;
		(*head)->prev = NULL;
		free(actual);
		return (1);
	}
	if (index == 0 && actual->next == NULL)
	{
		*head = NULL;
		free(actual);
		return (1);
	}
	while (actual->next != NULL && pos < index)
	{
		actual = actual->next;
		pos++;
	}
	if (pos + 1 < index)
		return (-1);
	actual->prev->next = actual->next;
	actual->next->prev = actual->prev;
	free(actual);
	return (1);
}
