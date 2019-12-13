#include "lists.h"

/**
 *sum_dlistint - sums the value of every node of a double linked list
 *@head: head of the double linked list
 *
 *Return: sum of all the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
