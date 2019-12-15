#include "lists.h"

/**
 *add_dnodeint - adds a node to the given double linked list
 *@head: head of the double linked list
 *@n: value of the new node added
 *
 *Return: address of the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
