#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head
 *
 * Return: node nbr
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	for (counter = 0; h; counter++)
	{
		h = h->next;
	}
	return (counter);
}
