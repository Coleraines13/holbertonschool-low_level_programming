#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: doubly linked list
 * Return: the lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
