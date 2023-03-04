#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches value in sorted array using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * If value is not present in or if array is NULL, function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump;
	size_t i;

	if (!array)
		return (-1);
	jump = sqrt(size);
	i = 0;
	do {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
		if (i >= size)
			break;
	} while (array[i] < value);
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	i -= jump;
	while (array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		++i;
		if (i == size)
			return (-1);
	}
	if (array[i] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}
