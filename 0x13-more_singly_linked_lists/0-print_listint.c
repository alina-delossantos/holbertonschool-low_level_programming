#include "lists.h"

/**
 * print_listint - prints elemnts within list
 * @h: head
 * Return: nbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	for (size = 0; h != NULL; size++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (size);
}
