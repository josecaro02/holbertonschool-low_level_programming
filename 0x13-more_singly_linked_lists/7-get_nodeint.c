#include "lists.h"

/**
 *get_nodeint_at_index - get value of an element of the list
 *@head: head of the linked list
 *@index: index to find in the linked list
 *
 *Return: node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	n = 0;
	while(n != index)
	{
		head = head->next;
		n++;
	}
	return(head);
}
