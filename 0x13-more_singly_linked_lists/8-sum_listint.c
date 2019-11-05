#include "lists.h"

/**
 *sum_listint - sum all the values of the nodes
 *@head: head of the linked list
 *
 *Return: result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while(head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
