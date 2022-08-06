#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data 
 * @head: doubly linked list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int s;
	dlistint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	s = 0;
	while (node != NULL)
	{
		s = s + node->n;
		node = node->next;
	}
	return (s);
}
