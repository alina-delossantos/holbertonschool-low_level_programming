#include "lists.h"

/**
 * list_len - nbr of elements
 * @h: head
 * Return: nbr
 */

size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
