#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **head;
	unsigned long int i;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
		return;
	head = ht->array;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (head[i] != NULL)
			printf("'%s': '%s', ", head[i]->key, head[i]->value);
	}
	printf("}");
}
