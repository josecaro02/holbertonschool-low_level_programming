#include "lists.h"

/**
 *get_dnodeint_ad_index - get a node to the double linked list at the given idx
 *@head: head of the double linked list
 *@index: index to the new node
 *
 *Return: address of the finded node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for(i = 0; i != index; i++)
	{
		head = head->next;
		if(head == NULL)
			return(NULL);
	}
	return(head);
}
