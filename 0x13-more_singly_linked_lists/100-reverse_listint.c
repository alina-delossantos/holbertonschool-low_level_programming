#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: head
 * Return: node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);

}
