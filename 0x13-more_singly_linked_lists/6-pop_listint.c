#include "lists.h"

/**
 *pop_listint - move the head of the linked list to the second element
 *@head: head of the linked list
 *
 *Return: data of the head node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int value;

	if (*head == NULL)
		return (0);
	new = *head;
	value = new->n;
	new = new->next;
	return (value);
}
