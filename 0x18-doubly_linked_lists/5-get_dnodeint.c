#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint
 * @head: doubly linked list
 * @index: index of the node
 * Return: index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	i = 0;
	while (node != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
