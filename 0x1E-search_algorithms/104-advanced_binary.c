#include "search_algos.h"

/**
  * advanced_binary_rec - search using binary search.
  * @array: pointer to first elem array
  * @first: first index
  * @after: last index
  * @value: value searched
  *
  * Return: -1 or index
  *
  * Description: prints index
  */
int advanced_binary_rec(int *array, size_t first, size_t after, int value)
{
	size_t i;

	if (after < first)
		return (-1);

	printf("Searching in array: ");
	for (i = first; i < after; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = first + (after - first) / 2;
	if (array[i] == value && (i == first || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_rec(array, first, i, value));
	return (advanced_binary_rec(array, i + 1, after, value));
}

/**
  * advanced_binary - search using advanced binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 or index
  *
  * Description: prints index
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_rec(array, 0, size - 1, value)); 
}
