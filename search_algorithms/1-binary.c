#include "search_algos.h"

/**
 * binary_search - search value in a sorted array using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:the number of elements in array
 * @value: is the value to search for
 *
 * Return: index where value is located
 * If value is not present in or if array is NULL, must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, low = 0, mid = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		mid = (high + low) / 2;
		i = low;

		printf("Searching in array: ");

		for (; i <= high; ++i)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}

		printf("\n");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
