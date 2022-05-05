#include "search_algos.h"

/**
 * leap_list - searches for a value in a sorted list of integers using the jump search algorithm
 * @list: pointer to head
 * @size: nbr of nodes
 * @value: value searched
 *
 * Return: NULL or pointer
 *
 * Description: prints valure
 */
listint_t *leap_list(listint_t *list, size_t size, int value)
{
	size_t lap, lap_size;
	listint_t *node, *leap;

	if (list == NULL || size == 0)
		return (NULL);

	lap = 0;
	lap_size = sqrt(size);
	for (node = leap = list; leap->index + 1 < size && leap->n < value;)
	{
		node = leap;
		for (lap += lap_size; leap->index < lap; leap = leap->next)
		{
			if (leap->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", leap->index, leap->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, leap->index);

	for (; node->index < leap->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL); 
}
