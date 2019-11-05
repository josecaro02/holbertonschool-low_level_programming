#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node at the position given
 *@head: head of the linked list
 *@idx: position of the node to add
 *@n: value of the node
 *
 *Return: new linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *actual;
	unsigned int index;

	index = 0;
	new = malloc(sizeof(listint_t));
	new->n = n;
	actual = *head;
	while (index < idx - 1)
	{
		actual  = actual->next;
		index++;
	}
	new->next = actual->next;
	actual->next = new;
	return(*head);
}
