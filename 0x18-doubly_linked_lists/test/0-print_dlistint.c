#include "lists.h"

/**
 * print_dlistint - prints all the elements of dlistint
 * @h: doubly linked list
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i += 1;
		h = h->next;
	}
	return (i);
}
