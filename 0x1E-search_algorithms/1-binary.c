#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: pointer to array
 * @size: elem nbr
 * @value: value searched
 *
 * Return: index or -1
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, half = 0, i = 0;

	if (array == NULL)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		printf("\n");

		half = (left + right) / 2;

		if (array[half] == value)
			return (half);

		else if (array[half] > value)
			right = half - 1;

		else if (array[half] < value)
			left = half + 1;
	}
	return (-1);
}
