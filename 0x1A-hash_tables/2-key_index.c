#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key of bucket
 * @size: size of an array
 * Return: the index at which the key/vaulke pair should be stored in thearray
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
