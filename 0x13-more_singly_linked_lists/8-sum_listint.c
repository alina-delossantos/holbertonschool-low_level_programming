#include "lists.h"

/**
 * sum_listint - sum of data
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	sum = 0;
	if (head == NULL)
		return (sum);
	node = head;
	while (node != NULL)
	{
		sum += (*node).n;
		node = (*node).next;
	}
	return (sum);
}
