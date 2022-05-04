#include "search_algos.h"

/**
 * print_array - prints array
 * @array: pointer to the first element of the array
 * @first: first elem array
 * @end: last elem array
 * Return: nothing
 */
void print_array(int *array, size_t first, size_t end)
{
	size_t i = first;

	if (first <= end)
	{
		printf("Searching in array: ");
		for (; i <= end ; i++)
		{
			printf("%d", array[i]);
			if (i < end )
				printf(", ");
		}
		printf("\n");
	}
}
/**
 * binarySearch - find index of a value in array
 * @arr: array
 * @first: first elem array
 * @end: last elem array
 * @x: value searched for
 * Return: none
 */
int binarySearch(int arr[], int first, int end, int x)
{
	int mid;

	if (end  >= first)
	{
		print_array(arr, first, end);
		mid = first + (end  - first) / 2;
		if (arr[mid] == x)
			return (mid);
		if (arr[mid] > x)
			return (binarySearch(arr, first, mid - 1, x));
		return (binarySearch(arr, mid + 1, end , x));
	}
	return (-1);
}
/**
 * min - find the minumum
 * @a: first int
 * @b: second int
 * Return: the min
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * exponential_search - find the range to find a value
 * @array: array to check
 * @size: size of the array
 * @value: value to find
 * Return: The index if success or -1 if not
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	char *msg;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	msg = "Value found between indexes [%ld] and [%d]\n";
	printf(msg, bound / 2, min(bound, size - 1));
	return (binarySearch(array, bound / 2, min(bound, size - 1), value));
}
