#include "lists.h"

/**
 *delete_nodeint_at_index - delete a node at the given index
 *@head: head of the linked list
 *@index: index of the node to delete
 *
 *Return: 1 if succeed, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual, *post;
	unsigned int value;

	if (*head == NULL)
		return (-1);
	actual = *head;
	if (index == 0)
	{
		*head = actual->next;
		free(actual);
		return (1);
	}
	value = 1;
	while (value < index)
	{
		actual = actual->next;
		if (actual == NULL)
			return (-1);
		value++;
	}
	post = actual->next;
	actual->next = post->next;
	free(post);
	return (1);
}
