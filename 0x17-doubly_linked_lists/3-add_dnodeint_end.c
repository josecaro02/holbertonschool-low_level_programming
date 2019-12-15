#include "lists.h"

/**
 *add_dnodeint_end - add a node at the end of the double linked list
 *@head: head of the double linked list
 *@n: value of the node to be added
 *
 *Return: address of the linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *actual;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		actual = *head;
		while (actual->next != NULL)
			actual = actual->next;
		actual->next = new;
		new->prev = actual;
	}
	return (new);
}
