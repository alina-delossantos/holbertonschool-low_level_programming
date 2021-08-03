#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head
 * @n: int
 * Return: address new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;

	while ((*current).next != NULL)
	{
		current = (*current).next;
	}
	(*current).next = new;
	return (new);
}
