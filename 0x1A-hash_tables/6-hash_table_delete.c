#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @hsh: hash table
 */

void hash_table_delete(hash_table_t *hsh)
{
	unsigned long int i;
	hash_node_t *node, *next_node;

	if (hsh == NULL)
		return;


	for (i = 0; i < hsh->size; i++)
	{
		node = hsh->array[i];
		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			if (next_node != NULL)
				node = next_node;
			else
				break;
		}
		
	}
	free(hsh->array);
	free(hsh);
}
