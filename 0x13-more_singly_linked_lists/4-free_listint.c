#include "lists.h"

/**
 * free_listint - frees a libnked list
 * @head:  listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		te,p = head->next;
		free(head);
		head = temp;
	}
}

