#include "lists.h"

/**
 *find_listint_loop - printf a list of elements with address
 *@head: head of the linked list
 *
 *Return: node of the loop in the linked list
 */
listint_t *find_listint_loop(listint_t *head)
{
	int *add_a, *add_b;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		add_a = (int *)&head;
		add_b = (int *)&head->next;
		if (head->next == NULL)
			return (NULL);
		if (add_a[0] - add_b[0] <= 0)
		{
			return (head->next);
		}
		head = head->next;
	}
	return (head);
}
