#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - node of a hash table
 * @key: the key
 * @value: the value corrisponding to the key
 * @next a pointer to the next node
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table data
 * @size: the size of  the array
 * @array: an array of size @aize
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;



hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif
