#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at the given index in a
 *double linked list
 *@h: head of the double linked list
 *@idx: index position to add the node
 *@n: value of the node
 *
 *Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *actual;
	unsigned int pos;

	pos = 0;
	if (idx > 0 && *h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else
	{
		actual = *h;
		while(actual->next != NULL && pos < idx)
		{
			actual = actual->next;
			pos++;
		}
		if(actual->next == NULL && pos + 1 == idx)
			return (add_dnodeint_end(h, n));
		else if(pos + 1 < idx)
			return(NULL);
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = actual->prev;
			new->next = actual;
			actual->prev->next = new;
			actual->prev = new;
			return (new);
		}
	}
}
