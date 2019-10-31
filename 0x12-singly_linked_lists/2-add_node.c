#include "lists.h"

/**
 *add_node - add a node in the head of the list
 *@head: head of the list
 *@str: value of the string to add
 *
 *Return: return the list with the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new  = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{}
	new->str = strdup(str);
	new->len = i;
	new->next = (*head);
	(*head) = new;
	return (new);
}
