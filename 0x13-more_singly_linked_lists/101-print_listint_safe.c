#include "lists.h"

/**
 *print_listint_safe - printf a list of elements with address
 *@head: head of the linked list
 *
 *Return: size of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n;
	int *add_a, *add_b;

	n = 0;
	if (head == NULL)
		return (n);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		add_a = (int *)&head;
		add_b = (int *)&head->next;
		if (add_a[0] - add_b[0] <= 0)
		{
			head = head->next;
			n++;
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (n);
		}
		head = head->next;
		n++;
	}
	return (n);
}
