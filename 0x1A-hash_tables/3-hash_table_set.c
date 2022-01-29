#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @hsh: hash table
 * @key: key
 * @value: key pair
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *hsh, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *head;

	if (hsh == NULL)
		return (0);

	i = key_index((const unsigned char *)key, hsh->size);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	if (hsh->array[i] == NULL)
	{
		hsh->array[i] = node;
	}
	else
	{
		head = hsh->array[i];
		if (strcmp(key, head->key) == 0)
			head->value = strdup(value);
		else
		{
			node->next = head;
			hsh->array[i] = node;
		}
	}
	return (1);
}
