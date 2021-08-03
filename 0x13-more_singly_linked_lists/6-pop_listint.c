#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: head
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n = 0;

	current = *head;
	if (*head == NULL)
		return (n);

	*head = (*current).next;
	n = (*current).n;
	free(current);
	return (n);
}
