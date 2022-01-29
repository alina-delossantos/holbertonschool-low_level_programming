#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key
 * @size: array size
 *
 * Return: index of array in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh;


	hsh = hash_djb2(key);
	return (hsh % size);
}
