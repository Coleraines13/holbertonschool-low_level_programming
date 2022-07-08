#include "list.h"

/**
 * print_list - prints n count n list
 * @h: pointer to first
 * Return: pointer
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u} %s\n", h->len, h->str);
		
		h = h->next;
		i++;
	}

	return (i);
}