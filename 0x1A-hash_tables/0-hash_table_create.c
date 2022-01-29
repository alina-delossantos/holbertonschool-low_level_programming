#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: array sieze
 *
 * Return: pointer to the newly created hash table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_tb;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	hsh_tb = malloc(sizeof(hash_table_t));
	if (hsh_tb == NULL)
		return (NULL);
	hsh_tb->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh_tb->array == NULL)
	{
		free(hsh_tb);
		return (NULL);
	}

	hsh_tb->size = size;

	for (i = 0; i < size; i++)
		hsh_tb->array[i] = NULL;
	return (hsh_tb);
}
