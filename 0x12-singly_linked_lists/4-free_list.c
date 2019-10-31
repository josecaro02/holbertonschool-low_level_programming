#include "lists.h"

/**
 *free_list - free memory of a list
 *@head: head of the list
 *
 *Return: nothing, it's a void
 */
void free_list(list_t *head)
{
	list_t *last;

	while (head != NULL)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last;
	}
}
