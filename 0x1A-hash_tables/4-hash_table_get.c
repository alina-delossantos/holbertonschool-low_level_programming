#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @hsh: hash table
 * @key: key
 *
 * Return: value associated with key, NULL if not found
 */

char *hash_table_get(const hash_table_t *hsh, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (hsh == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, hsh->size);
	if (hsh->array[i] == NULL)
		return (NULL);

	node = hsh->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
