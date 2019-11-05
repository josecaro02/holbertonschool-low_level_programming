#include "lists.h"

/**
 *add_nodeint_end - add a node to the linked list at the end
 *@head: head of the linked list
 *@n: number int to add to the node
 *
 *Return: head of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (*head);
}
