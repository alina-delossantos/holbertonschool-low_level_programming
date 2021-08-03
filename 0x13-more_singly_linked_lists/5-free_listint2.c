#include "lists.h"

/**
 * free_listint2 - free list
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		current = (*current).next;
		free(*head);
		*head =  current;
	}
	*head = NULL;
}
