#include "lists.h"

/**
 * listint_len - will return nbr of list elemnts
 * @h: head
 * Return: nbr of elemnts
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		h = (*h).next;
	}
	return (size);
}
