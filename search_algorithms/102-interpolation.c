#include "search_algos.h"

/**
 * interpolation_search - search value using Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: The first index where value is located
 * If value is not present in or if array is NULL, function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
			return (array[low] == value ? low : -1);
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
