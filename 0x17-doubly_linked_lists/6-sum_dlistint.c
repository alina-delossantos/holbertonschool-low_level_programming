#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in linked list
 * @head: head
 *
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (sum);

	temp = head;
	for (sum = 0; temp;)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
