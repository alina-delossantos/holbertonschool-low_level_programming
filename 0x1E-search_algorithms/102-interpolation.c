#include "search_algos.h"
/**
  * interpolation_search - search the first ocurrency of a value in the array
  * @array: set of numbers
  * @size: size of the array
  * @value: value to search
  * Return: return the first index located, otherwise -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t before = 0, after = size - 1, loc = 0;

	if (!array)
		return (-1);
	loc = before + (((double)(after - before) / (array[after] - array[before]))
					 * (value - array[before]));
	if (loc >= size)
		printf("Value checked array[%d] is out of range\n", (int)loc);
	while ((array[after] != array[before]) && (value >= array[before])
			 && (value <= array[after]))
	{
		loc = before + (((double)(after - before) / (array[after] - array[before]))
						 * (value - array[before]));
		printf("Value checked array[%d] = [%d]\n", (int)loc, array[loc]);

		if (array[loc] < value)
			before = loc + 1;
		else if (array[loc] > value)
			after = loc - 1;
		else
			return (loc);
	}
	if (array[before] == value)
		return (before);
	return (-1);
}
