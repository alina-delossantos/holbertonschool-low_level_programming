#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the value, -1 if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i += jump;
		if (i >= size)
			break;
	}
	i -= jump;
	printf("Value found between indexes [%d] and [%d]\n",
							 (int)i, (int)(i + jump));

	while (array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		i++;
		if (i == size)
			return (-1);
	}

	if (array[i] == value)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		return (i);
	}

	return (-1);
}
