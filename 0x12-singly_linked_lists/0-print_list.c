#include "lists.h"

/**
 * print_list - prints elements of list
 * @h: head
 * Return: nbr
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
