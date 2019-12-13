#include "lists.h"

/**
 *add_nodeint - function that add a node in the thead of a linked list
 *@head: head of the linked list
 *@n: value of the integer in the linked list structure
 *
 *Return: linked list with a new head added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
