#include "lists.h"

/**
 * free_listint - free list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		current = (*current).next;
		free(head);
		head = current;
	}
}
