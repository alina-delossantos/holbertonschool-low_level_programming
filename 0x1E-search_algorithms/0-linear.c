#Ainclude "search_algos.h"

/**
 * linear_search - searches for a value in an array
 *
 * @array: pointer
 * @size: ellemnts nbr
 * @value: value searched for
 *
 * Return: -1 or NULL
 *
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
		return (i);
	}

	return (-1);
}
