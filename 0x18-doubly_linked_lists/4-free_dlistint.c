#include "lists.h"

/**
 * free_dlistint - afunction that a frees a dlistint
 * @head: doubly linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *empty = NULL;

	while (head != NULL)
	{
		empty = head->next;
		free(head);
		head = empty;
	}
	free(head);
}
