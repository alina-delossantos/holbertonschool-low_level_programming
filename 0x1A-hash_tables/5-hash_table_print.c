#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @hsh: hash table
 */

void hash_table_print(const hash_table_t *hsh)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (hsh == NULL)
		return;

	printf("{");
	
	for (i = 0; i < hsh->size; i++)
	{
		node = hsh->array[i];
		while (node !=  NULL)
		{
			if (first == 1)
			{
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		
	}
	printf("}\n");
}
